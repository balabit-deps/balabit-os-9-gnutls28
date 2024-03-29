;;; GnuTLS --- Guile bindings for GnuTLS.
;;; Copyright (C) 2007-2012, 2021 Free Software Foundation, Inc.
;;;
;;; GnuTLS is free software; you can redistribute it and/or
;;; modify it under the terms of the GNU Lesser General Public
;;; License as published by the Free Software Foundation; either
;;; version 2.1 of the License, or (at your option) any later version.
;;;
;;; GnuTLS is distributed in the hope that it will be useful,
;;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
;;; Lesser General Public License for more details.
;;;
;;; You should have received a copy of the GNU Lesser General Public
;;; License along with GnuTLS; if not, write to the Free Software
;;; Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

;;; Written by Ludovic Court�s <ludo@chbouib.org>.


;;;
;;; Exercise the X.509 certificate API.
;;;

(use-modules (gnutls)
             (gnutls build tests)
             (srfi srfi-4)
             (srfi srfi-11)
             (ice-9 format))

(define %certificate-file
  (search-path %load-path "x509-certificate.pem"))

(define %private-key-file
  (search-path %load-path "x509-key.pem"))

(define %first-oid
  ;; The certificate's first OID.
  "2.5.4.6")

(define %signature-algorithm
  ;; The certificate's signature algorithm.
  sign-algorithm/rsa-sha1)

(define %sha1-fingerprint
  ;; The certificate's SHA-1 fingerprint.
  "7c55df47de718869d55998ee1e9301331ccd0601")

(define %sha256-fingerprint
  ;; The certificate's SHA-256 fingerprint.
  "0db40a5ee20169d25f090e4d165d87266b1a04722cddec4da36692c81c3096f6")


(define (file-size file)
  (stat:size (stat file)))

(define (u8vector->hex-string u8vector)
  (string-join (map (lambda (u8) (format #f "~2,'0x" u8))
                    (u8vector->list u8vector))
               ""))


(run-test
    (lambda ()
      (let ((raw-certificate (make-u8vector (file-size %certificate-file)))
            (raw-privkey     (make-u8vector (file-size %private-key-file))))

        (uniform-vector-read! raw-certificate
                              (open-input-file %certificate-file))
        (uniform-vector-read! raw-privkey
                              (open-input-file %private-key-file))

        (let ((cert (import-x509-certificate raw-certificate
                                             x509-certificate-format/pem))
              (sec  (import-x509-private-key raw-privkey
                                             x509-certificate-format/pem)))

          (and (x509-certificate? cert)
               (x509-private-key? sec)
               (string? (x509-certificate-dn cert))
               (string? (x509-certificate-issuer-dn cert))
               (string=? (x509-certificate-dn-oid cert 0) %first-oid)
               (eq? (x509-certificate-signature-algorithm cert)
                    %signature-algorithm)
               (x509-certificate-matches-hostname? cert "localhost")
               (let-values (((type name)
                             (x509-certificate-subject-alternative-name
                              cert 0)))
                 (and (string? name)
                      (string?
                       (x509-subject-alternative-name->string type))))
               (equal? (u8vector->hex-string
                        (x509-certificate-fingerprint cert digest/sha1))
                       %sha1-fingerprint)
               (equal? (u8vector->hex-string
                        (x509-certificate-fingerprint cert digest/sha256))
                       %sha256-fingerprint))))))

;;; arch-tag: eef09b52-30e8-472a-8b93-cb636434f6eb
