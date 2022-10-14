/* This file is auto-generated from gnutls-serv-options.json; do not edit */
#include <stdbool.h>
#include <stdio.h>

#ifndef GNUTLS_SERV_OPTIONS_H_
#define GNUTLS_SERV_OPTIONS_H_ 1

struct gnutls_serv_list
{
  const char **args;
  unsigned int count;
};

struct gnutls_serv_opts
{
  /* Options present in the command line */
  struct
  {
    bool debug;
    bool sni_hostname;
    bool sni_hostname_fatal;
    bool alpn;
    bool alpn_fatal;
    bool noticket;
    bool earlydata;
    bool maxearlydata;
    bool nocookie;
    bool generate;
    bool quiet;
    bool nodb;
    bool http;
    bool echo;
    bool crlf;
    bool udp;
    bool mtu;
    bool srtp_profiles;
    bool disable_client_cert;
    bool require_client_cert;
    bool verify_client_cert;
    bool heartbeat;
    bool x509fmtder;
    bool priority;
    bool dhparams;
    bool x509cafile;
    bool x509crlfile;
    bool pgpkeyfile;
    bool x509keyfile;
    bool x509certfile;
    bool rawpkkeyfile;
    bool rawpkfile;
    bool srppasswd;
    bool srppasswdconf;
    bool pskpasswd;
    bool pskhint;
    bool ocsp_response;
    bool ignore_ocsp_response_errors;
    bool port;
    bool list;
    bool provider;
    bool keymatexport;
    bool keymatexportsize;
    bool recordsize;
    bool httpdata;
    bool version;
    bool help;
    bool more_help;
  } present;

  /* Option arguments in raw string form */
  struct
  {
    const char *debug;
    const char *sni_hostname;
    const char *maxearlydata;
    const char *mtu;
    const char *srtp_profiles;
    const char *priority;
    const char *dhparams;
    const char *x509cafile;
    const char *x509crlfile;
    const char *pgpkeyfile;
    const char *srppasswd;
    const char *srppasswdconf;
    const char *pskpasswd;
    const char *pskhint;
    const char *port;
    const char *provider;
    const char *keymatexport;
    const char *keymatexportsize;
    const char *recordsize;
    const char *httpdata;
    const char *version;
  } arg;

  /* Option arguments parsed as integer */
  struct
  {
    int debug;
    int maxearlydata;
    int mtu;
    int port;
    int keymatexportsize;
    int recordsize;
  } value;

  /* Option arguments parsed as list */
  struct
  {
    struct gnutls_serv_list alpn;
    struct gnutls_serv_list x509keyfile;
    struct gnutls_serv_list x509certfile;
    struct gnutls_serv_list rawpkkeyfile;
    struct gnutls_serv_list rawpkfile;
    struct gnutls_serv_list ocsp_response;
  } list;

  /* Option enablement status */
  struct
  {
    bool require_client_cert;
    bool verify_client_cert;
  } enabled;
};

#define HAVE_OPT(name) HAVE_OPT_ ## name
#define OPT_ARG(name) OPT_ARG_ ## name
#define ENABLED_OPT(name) ENABLED_OPT_ ## name
#define STACKCT_OPT(name) STACKCT_OPT_ ## name
#define STACKLST_OPT(name) STACKLST_OPT_ ## name
#define USAGE(status) usage (stdout, (status))

#define HAVE_OPT_DEBUG gnutls_servOptions.present.debug
#define HAVE_OPT_SNI_HOSTNAME gnutls_servOptions.present.sni_hostname
#define HAVE_OPT_SNI_HOSTNAME_FATAL gnutls_servOptions.present.sni_hostname_fatal
#define HAVE_OPT_ALPN gnutls_servOptions.present.alpn
#define HAVE_OPT_ALPN_FATAL gnutls_servOptions.present.alpn_fatal
#define HAVE_OPT_NOTICKET gnutls_servOptions.present.noticket
#define HAVE_OPT_EARLYDATA gnutls_servOptions.present.earlydata
#define HAVE_OPT_MAXEARLYDATA gnutls_servOptions.present.maxearlydata
#define HAVE_OPT_NOCOOKIE gnutls_servOptions.present.nocookie
#define HAVE_OPT_GENERATE gnutls_servOptions.present.generate
#define HAVE_OPT_QUIET gnutls_servOptions.present.quiet
#define HAVE_OPT_NODB gnutls_servOptions.present.nodb
#define HAVE_OPT_HTTP gnutls_servOptions.present.http
#define HAVE_OPT_ECHO gnutls_servOptions.present.echo
#define HAVE_OPT_CRLF gnutls_servOptions.present.crlf
#define HAVE_OPT_UDP gnutls_servOptions.present.udp
#define HAVE_OPT_MTU gnutls_servOptions.present.mtu
#define HAVE_OPT_SRTP_PROFILES gnutls_servOptions.present.srtp_profiles
#define HAVE_OPT_DISABLE_CLIENT_CERT gnutls_servOptions.present.disable_client_cert
#define HAVE_OPT_REQUIRE_CLIENT_CERT gnutls_servOptions.present.require_client_cert
#define HAVE_OPT_VERIFY_CLIENT_CERT gnutls_servOptions.present.verify_client_cert
#define HAVE_OPT_HEARTBEAT gnutls_servOptions.present.heartbeat
#define HAVE_OPT_X509FMTDER gnutls_servOptions.present.x509fmtder
#define HAVE_OPT_PRIORITY gnutls_servOptions.present.priority
#define HAVE_OPT_DHPARAMS gnutls_servOptions.present.dhparams
#define HAVE_OPT_X509CAFILE gnutls_servOptions.present.x509cafile
#define HAVE_OPT_X509CRLFILE gnutls_servOptions.present.x509crlfile
#define HAVE_OPT_PGPKEYFILE gnutls_servOptions.present.pgpkeyfile
#define HAVE_OPT_X509KEYFILE gnutls_servOptions.present.x509keyfile
#define HAVE_OPT_X509CERTFILE gnutls_servOptions.present.x509certfile
#define HAVE_OPT_RAWPKKEYFILE gnutls_servOptions.present.rawpkkeyfile
#define HAVE_OPT_RAWPKFILE gnutls_servOptions.present.rawpkfile
#define HAVE_OPT_SRPPASSWD gnutls_servOptions.present.srppasswd
#define HAVE_OPT_SRPPASSWDCONF gnutls_servOptions.present.srppasswdconf
#define HAVE_OPT_PSKPASSWD gnutls_servOptions.present.pskpasswd
#define HAVE_OPT_PSKHINT gnutls_servOptions.present.pskhint
#define HAVE_OPT_OCSP_RESPONSE gnutls_servOptions.present.ocsp_response
#define HAVE_OPT_IGNORE_OCSP_RESPONSE_ERRORS gnutls_servOptions.present.ignore_ocsp_response_errors
#define HAVE_OPT_PORT gnutls_servOptions.present.port
#define HAVE_OPT_LIST gnutls_servOptions.present.list
#define HAVE_OPT_PROVIDER gnutls_servOptions.present.provider
#define HAVE_OPT_KEYMATEXPORT gnutls_servOptions.present.keymatexport
#define HAVE_OPT_KEYMATEXPORTSIZE gnutls_servOptions.present.keymatexportsize
#define HAVE_OPT_RECORDSIZE gnutls_servOptions.present.recordsize
#define HAVE_OPT_HTTPDATA gnutls_servOptions.present.httpdata
#define HAVE_OPT_VERSION gnutls_servOptions.present.version
#define HAVE_OPT_HELP gnutls_servOptions.present.help
#define HAVE_OPT_MORE_HELP gnutls_servOptions.present.more_help

#define OPT_ARG_DEBUG gnutls_servOptions.arg.debug
#define OPT_ARG_SNI_HOSTNAME gnutls_servOptions.arg.sni_hostname
#define OPT_ARG_SNI_HOSTNAME_FATAL gnutls_servOptions.arg.sni_hostname_fatal
#define OPT_ARG_ALPN gnutls_servOptions.arg.alpn
#define OPT_ARG_ALPN_FATAL gnutls_servOptions.arg.alpn_fatal
#define OPT_ARG_NOTICKET gnutls_servOptions.arg.noticket
#define OPT_ARG_EARLYDATA gnutls_servOptions.arg.earlydata
#define OPT_ARG_MAXEARLYDATA gnutls_servOptions.arg.maxearlydata
#define OPT_ARG_NOCOOKIE gnutls_servOptions.arg.nocookie
#define OPT_ARG_GENERATE gnutls_servOptions.arg.generate
#define OPT_ARG_QUIET gnutls_servOptions.arg.quiet
#define OPT_ARG_NODB gnutls_servOptions.arg.nodb
#define OPT_ARG_HTTP gnutls_servOptions.arg.http
#define OPT_ARG_ECHO gnutls_servOptions.arg.echo
#define OPT_ARG_CRLF gnutls_servOptions.arg.crlf
#define OPT_ARG_UDP gnutls_servOptions.arg.udp
#define OPT_ARG_MTU gnutls_servOptions.arg.mtu
#define OPT_ARG_SRTP_PROFILES gnutls_servOptions.arg.srtp_profiles
#define OPT_ARG_DISABLE_CLIENT_CERT gnutls_servOptions.arg.disable_client_cert
#define OPT_ARG_REQUIRE_CLIENT_CERT gnutls_servOptions.arg.require_client_cert
#define OPT_ARG_VERIFY_CLIENT_CERT gnutls_servOptions.arg.verify_client_cert
#define OPT_ARG_HEARTBEAT gnutls_servOptions.arg.heartbeat
#define OPT_ARG_X509FMTDER gnutls_servOptions.arg.x509fmtder
#define OPT_ARG_PRIORITY gnutls_servOptions.arg.priority
#define OPT_ARG_DHPARAMS gnutls_servOptions.arg.dhparams
#define OPT_ARG_X509CAFILE gnutls_servOptions.arg.x509cafile
#define OPT_ARG_X509CRLFILE gnutls_servOptions.arg.x509crlfile
#define OPT_ARG_PGPKEYFILE gnutls_servOptions.arg.pgpkeyfile
#define OPT_ARG_X509KEYFILE gnutls_servOptions.arg.x509keyfile
#define OPT_ARG_X509CERTFILE gnutls_servOptions.arg.x509certfile
#define OPT_ARG_RAWPKKEYFILE gnutls_servOptions.arg.rawpkkeyfile
#define OPT_ARG_RAWPKFILE gnutls_servOptions.arg.rawpkfile
#define OPT_ARG_SRPPASSWD gnutls_servOptions.arg.srppasswd
#define OPT_ARG_SRPPASSWDCONF gnutls_servOptions.arg.srppasswdconf
#define OPT_ARG_PSKPASSWD gnutls_servOptions.arg.pskpasswd
#define OPT_ARG_PSKHINT gnutls_servOptions.arg.pskhint
#define OPT_ARG_OCSP_RESPONSE gnutls_servOptions.arg.ocsp_response
#define OPT_ARG_IGNORE_OCSP_RESPONSE_ERRORS gnutls_servOptions.arg.ignore_ocsp_response_errors
#define OPT_ARG_PORT gnutls_servOptions.arg.port
#define OPT_ARG_LIST gnutls_servOptions.arg.list
#define OPT_ARG_PROVIDER gnutls_servOptions.arg.provider
#define OPT_ARG_KEYMATEXPORT gnutls_servOptions.arg.keymatexport
#define OPT_ARG_KEYMATEXPORTSIZE gnutls_servOptions.arg.keymatexportsize
#define OPT_ARG_RECORDSIZE gnutls_servOptions.arg.recordsize
#define OPT_ARG_HTTPDATA gnutls_servOptions.arg.httpdata
#define OPT_ARG_VERSION gnutls_servOptions.arg.version
#define OPT_ARG_HELP gnutls_servOptions.arg.help
#define OPT_ARG_MORE_HELP gnutls_servOptions.arg.more_help

#define OPT_VALUE_DEBUG gnutls_servOptions.value.debug
#define OPT_VALUE_MAXEARLYDATA gnutls_servOptions.value.maxearlydata
#define OPT_VALUE_MTU gnutls_servOptions.value.mtu
#define OPT_VALUE_PORT gnutls_servOptions.value.port
#define OPT_VALUE_KEYMATEXPORTSIZE gnutls_servOptions.value.keymatexportsize
#define OPT_VALUE_RECORDSIZE gnutls_servOptions.value.recordsize

#define ENABLED_OPT_REQUIRE_CLIENT_CERT gnutls_servOptions.enabled.require_client_cert
#define ENABLED_OPT_VERIFY_CLIENT_CERT gnutls_servOptions.enabled.verify_client_cert

#define STACKCT_OPT_ALPN gnutls_servOptions.list.alpn.count
#define STACKCT_OPT_X509KEYFILE gnutls_servOptions.list.x509keyfile.count
#define STACKCT_OPT_X509CERTFILE gnutls_servOptions.list.x509certfile.count
#define STACKCT_OPT_RAWPKKEYFILE gnutls_servOptions.list.rawpkkeyfile.count
#define STACKCT_OPT_RAWPKFILE gnutls_servOptions.list.rawpkfile.count
#define STACKCT_OPT_OCSP_RESPONSE gnutls_servOptions.list.ocsp_response.count

#define STACKLST_OPT_ALPN gnutls_servOptions.list.alpn.args
#define STACKLST_OPT_X509KEYFILE gnutls_servOptions.list.x509keyfile.args
#define STACKLST_OPT_X509CERTFILE gnutls_servOptions.list.x509certfile.args
#define STACKLST_OPT_RAWPKKEYFILE gnutls_servOptions.list.rawpkkeyfile.args
#define STACKLST_OPT_RAWPKFILE gnutls_servOptions.list.rawpkfile.args
#define STACKLST_OPT_OCSP_RESPONSE gnutls_servOptions.list.ocsp_response.args


extern struct gnutls_serv_opts gnutls_servOptions;
int optionProcess(struct gnutls_serv_opts *opts, int argc, char **argv);
void usage (FILE *out, int status);

#endif /* GNUTLS_SERV_OPTIONS_H_ */
