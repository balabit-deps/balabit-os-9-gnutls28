/* This file is auto-generated from certtool-options.json; do not edit */
#include <stdbool.h>
#include <stdio.h>

#ifndef CERTTOOL_OPTIONS_H_
#define CERTTOOL_OPTIONS_H_ 1

struct certtool_list
{
  const char **args;
  unsigned int count;
};

struct certtool_opts
{
  /* Options present in the command line */
  struct
  {
    bool debug;
    bool verbose;
    bool infile;
    bool outfile;
    bool certificate_info;
    bool pubkey_info;
    bool generate_self_signed;
    bool generate_certificate;
    bool generate_proxy;
    bool update_certificate;
    bool fingerprint;
    bool key_id;
    bool certificate_pubkey;
    bool v1;
    bool sign_params;
    bool crq_info;
    bool generate_request;
    bool no_crq_extensions;
    bool p12_info;
    bool p12_name;
    bool to_p12;
    bool key_info;
    bool p8_info;
    bool to_rsa;
    bool generate_privkey;
    bool key_type;
    bool bits;
    bool curve;
    bool sec_param;
    bool to_p8;
    bool pkcs8;
    bool provable;
    bool verify_provable_privkey;
    bool seed;
    bool crl_info;
    bool generate_crl;
    bool verify_crl;
    bool verify_chain;
    bool verify;
    bool verify_hostname;
    bool verify_email;
    bool verify_purpose;
    bool verify_allow_broken;
    bool verify_profile;
    bool p7_generate;
    bool p7_sign;
    bool p7_detached_sign;
    bool p7_include_cert;
    bool p7_time;
    bool p7_show_data;
    bool p7_info;
    bool p7_verify;
    bool smime_to_p7;
    bool generate_dh_params;
    bool get_dh_params;
    bool dh_info;
    bool load_privkey;
    bool load_pubkey;
    bool load_request;
    bool load_certificate;
    bool load_ca_privkey;
    bool load_ca_certificate;
    bool load_crl;
    bool load_data;
    bool password;
    bool null_password;
    bool empty_password;
    bool hex_numbers;
    bool cprint;
    bool rsa;
    bool dsa;
    bool ecc;
    bool hash;
    bool salt_size;
    bool inder;
    bool outder;
    bool disable_quick_random;
    bool template;
    bool stdout_info;
    bool ask_pass;
    bool pkcs_cipher;
    bool provider;
    bool text;
    bool version;
    bool help;
    bool more_help;
  } present;

  /* Option arguments in raw string form */
  struct
  {
    const char *debug;
    const char *infile;
    const char *outfile;
    const char *sign_params;
    const char *p12_name;
    const char *key_type;
    const char *bits;
    const char *curve;
    const char *sec_param;
    const char *seed;
    const char *verify_hostname;
    const char *verify_email;
    const char *verify_purpose;
    const char *verify_profile;
    const char *load_privkey;
    const char *load_pubkey;
    const char *load_request;
    const char *load_certificate;
    const char *load_ca_privkey;
    const char *load_ca_certificate;
    const char *load_crl;
    const char *load_data;
    const char *password;
    const char *hash;
    const char *salt_size;
    const char *template;
    const char *pkcs_cipher;
    const char *provider;
    const char *version;
  } arg;

  /* Option arguments parsed as integer */
  struct
  {
    int debug;
    int bits;
    int salt_size;
  } value;

  /* Option arguments parsed as list */
  struct
  {

  } list;

  /* Option enablement status */
  struct
  {
    bool verbose;
    bool p7_include_cert;
    bool p7_time;
    bool p7_show_data;
    bool inder;
    bool outder;
    bool ask_pass;
    bool text;
  } enabled;
};

#define HAVE_OPT(name) HAVE_OPT_ ## name
#define OPT_ARG(name) OPT_ARG_ ## name
#define ENABLED_OPT(name) ENABLED_OPT_ ## name
#define STACKCT_OPT(name) STACKCT_OPT_ ## name
#define STACKLST_OPT(name) STACKLST_OPT_ ## name
#define USAGE(status) usage (stdout, (status))

#define HAVE_OPT_DEBUG certtoolOptions.present.debug
#define HAVE_OPT_VERBOSE certtoolOptions.present.verbose
#define HAVE_OPT_INFILE certtoolOptions.present.infile
#define HAVE_OPT_OUTFILE certtoolOptions.present.outfile
#define HAVE_OPT_CERTIFICATE_INFO certtoolOptions.present.certificate_info
#define HAVE_OPT_PUBKEY_INFO certtoolOptions.present.pubkey_info
#define HAVE_OPT_GENERATE_SELF_SIGNED certtoolOptions.present.generate_self_signed
#define HAVE_OPT_GENERATE_CERTIFICATE certtoolOptions.present.generate_certificate
#define HAVE_OPT_GENERATE_PROXY certtoolOptions.present.generate_proxy
#define HAVE_OPT_UPDATE_CERTIFICATE certtoolOptions.present.update_certificate
#define HAVE_OPT_FINGERPRINT certtoolOptions.present.fingerprint
#define HAVE_OPT_KEY_ID certtoolOptions.present.key_id
#define HAVE_OPT_CERTIFICATE_PUBKEY certtoolOptions.present.certificate_pubkey
#define HAVE_OPT_V1 certtoolOptions.present.v1
#define HAVE_OPT_SIGN_PARAMS certtoolOptions.present.sign_params
#define HAVE_OPT_CRQ_INFO certtoolOptions.present.crq_info
#define HAVE_OPT_GENERATE_REQUEST certtoolOptions.present.generate_request
#define HAVE_OPT_NO_CRQ_EXTENSIONS certtoolOptions.present.no_crq_extensions
#define HAVE_OPT_P12_INFO certtoolOptions.present.p12_info
#define HAVE_OPT_P12_NAME certtoolOptions.present.p12_name
#define HAVE_OPT_TO_P12 certtoolOptions.present.to_p12
#define HAVE_OPT_KEY_INFO certtoolOptions.present.key_info
#define HAVE_OPT_P8_INFO certtoolOptions.present.p8_info
#define HAVE_OPT_TO_RSA certtoolOptions.present.to_rsa
#define HAVE_OPT_GENERATE_PRIVKEY certtoolOptions.present.generate_privkey
#define HAVE_OPT_KEY_TYPE certtoolOptions.present.key_type
#define HAVE_OPT_BITS certtoolOptions.present.bits
#define HAVE_OPT_CURVE certtoolOptions.present.curve
#define HAVE_OPT_SEC_PARAM certtoolOptions.present.sec_param
#define HAVE_OPT_TO_P8 certtoolOptions.present.to_p8
#define HAVE_OPT_PKCS8 certtoolOptions.present.pkcs8
#define HAVE_OPT_PROVABLE certtoolOptions.present.provable
#define HAVE_OPT_VERIFY_PROVABLE_PRIVKEY certtoolOptions.present.verify_provable_privkey
#define HAVE_OPT_SEED certtoolOptions.present.seed
#define HAVE_OPT_CRL_INFO certtoolOptions.present.crl_info
#define HAVE_OPT_GENERATE_CRL certtoolOptions.present.generate_crl
#define HAVE_OPT_VERIFY_CRL certtoolOptions.present.verify_crl
#define HAVE_OPT_VERIFY_CHAIN certtoolOptions.present.verify_chain
#define HAVE_OPT_VERIFY certtoolOptions.present.verify
#define HAVE_OPT_VERIFY_HOSTNAME certtoolOptions.present.verify_hostname
#define HAVE_OPT_VERIFY_EMAIL certtoolOptions.present.verify_email
#define HAVE_OPT_VERIFY_PURPOSE certtoolOptions.present.verify_purpose
#define HAVE_OPT_VERIFY_ALLOW_BROKEN certtoolOptions.present.verify_allow_broken
#define HAVE_OPT_VERIFY_PROFILE certtoolOptions.present.verify_profile
#define HAVE_OPT_P7_GENERATE certtoolOptions.present.p7_generate
#define HAVE_OPT_P7_SIGN certtoolOptions.present.p7_sign
#define HAVE_OPT_P7_DETACHED_SIGN certtoolOptions.present.p7_detached_sign
#define HAVE_OPT_P7_INCLUDE_CERT certtoolOptions.present.p7_include_cert
#define HAVE_OPT_P7_TIME certtoolOptions.present.p7_time
#define HAVE_OPT_P7_SHOW_DATA certtoolOptions.present.p7_show_data
#define HAVE_OPT_P7_INFO certtoolOptions.present.p7_info
#define HAVE_OPT_P7_VERIFY certtoolOptions.present.p7_verify
#define HAVE_OPT_SMIME_TO_P7 certtoolOptions.present.smime_to_p7
#define HAVE_OPT_GENERATE_DH_PARAMS certtoolOptions.present.generate_dh_params
#define HAVE_OPT_GET_DH_PARAMS certtoolOptions.present.get_dh_params
#define HAVE_OPT_DH_INFO certtoolOptions.present.dh_info
#define HAVE_OPT_LOAD_PRIVKEY certtoolOptions.present.load_privkey
#define HAVE_OPT_LOAD_PUBKEY certtoolOptions.present.load_pubkey
#define HAVE_OPT_LOAD_REQUEST certtoolOptions.present.load_request
#define HAVE_OPT_LOAD_CERTIFICATE certtoolOptions.present.load_certificate
#define HAVE_OPT_LOAD_CA_PRIVKEY certtoolOptions.present.load_ca_privkey
#define HAVE_OPT_LOAD_CA_CERTIFICATE certtoolOptions.present.load_ca_certificate
#define HAVE_OPT_LOAD_CRL certtoolOptions.present.load_crl
#define HAVE_OPT_LOAD_DATA certtoolOptions.present.load_data
#define HAVE_OPT_PASSWORD certtoolOptions.present.password
#define HAVE_OPT_NULL_PASSWORD certtoolOptions.present.null_password
#define HAVE_OPT_EMPTY_PASSWORD certtoolOptions.present.empty_password
#define HAVE_OPT_HEX_NUMBERS certtoolOptions.present.hex_numbers
#define HAVE_OPT_CPRINT certtoolOptions.present.cprint
#define HAVE_OPT_RSA certtoolOptions.present.rsa
#define HAVE_OPT_DSA certtoolOptions.present.dsa
#define HAVE_OPT_ECC certtoolOptions.present.ecc
#define HAVE_OPT_HASH certtoolOptions.present.hash
#define HAVE_OPT_SALT_SIZE certtoolOptions.present.salt_size
#define HAVE_OPT_INDER certtoolOptions.present.inder
#define HAVE_OPT_OUTDER certtoolOptions.present.outder
#define HAVE_OPT_DISABLE_QUICK_RANDOM certtoolOptions.present.disable_quick_random
#define HAVE_OPT_TEMPLATE certtoolOptions.present.template
#define HAVE_OPT_STDOUT_INFO certtoolOptions.present.stdout_info
#define HAVE_OPT_ASK_PASS certtoolOptions.present.ask_pass
#define HAVE_OPT_PKCS_CIPHER certtoolOptions.present.pkcs_cipher
#define HAVE_OPT_PROVIDER certtoolOptions.present.provider
#define HAVE_OPT_TEXT certtoolOptions.present.text
#define HAVE_OPT_VERSION certtoolOptions.present.version
#define HAVE_OPT_HELP certtoolOptions.present.help
#define HAVE_OPT_MORE_HELP certtoolOptions.present.more_help

#define OPT_ARG_DEBUG certtoolOptions.arg.debug
#define OPT_ARG_VERBOSE certtoolOptions.arg.verbose
#define OPT_ARG_INFILE certtoolOptions.arg.infile
#define OPT_ARG_OUTFILE certtoolOptions.arg.outfile
#define OPT_ARG_CERTIFICATE_INFO certtoolOptions.arg.certificate_info
#define OPT_ARG_PUBKEY_INFO certtoolOptions.arg.pubkey_info
#define OPT_ARG_GENERATE_SELF_SIGNED certtoolOptions.arg.generate_self_signed
#define OPT_ARG_GENERATE_CERTIFICATE certtoolOptions.arg.generate_certificate
#define OPT_ARG_GENERATE_PROXY certtoolOptions.arg.generate_proxy
#define OPT_ARG_UPDATE_CERTIFICATE certtoolOptions.arg.update_certificate
#define OPT_ARG_FINGERPRINT certtoolOptions.arg.fingerprint
#define OPT_ARG_KEY_ID certtoolOptions.arg.key_id
#define OPT_ARG_CERTIFICATE_PUBKEY certtoolOptions.arg.certificate_pubkey
#define OPT_ARG_V1 certtoolOptions.arg.v1
#define OPT_ARG_SIGN_PARAMS certtoolOptions.arg.sign_params
#define OPT_ARG_CRQ_INFO certtoolOptions.arg.crq_info
#define OPT_ARG_GENERATE_REQUEST certtoolOptions.arg.generate_request
#define OPT_ARG_NO_CRQ_EXTENSIONS certtoolOptions.arg.no_crq_extensions
#define OPT_ARG_P12_INFO certtoolOptions.arg.p12_info
#define OPT_ARG_P12_NAME certtoolOptions.arg.p12_name
#define OPT_ARG_TO_P12 certtoolOptions.arg.to_p12
#define OPT_ARG_KEY_INFO certtoolOptions.arg.key_info
#define OPT_ARG_P8_INFO certtoolOptions.arg.p8_info
#define OPT_ARG_TO_RSA certtoolOptions.arg.to_rsa
#define OPT_ARG_GENERATE_PRIVKEY certtoolOptions.arg.generate_privkey
#define OPT_ARG_KEY_TYPE certtoolOptions.arg.key_type
#define OPT_ARG_BITS certtoolOptions.arg.bits
#define OPT_ARG_CURVE certtoolOptions.arg.curve
#define OPT_ARG_SEC_PARAM certtoolOptions.arg.sec_param
#define OPT_ARG_TO_P8 certtoolOptions.arg.to_p8
#define OPT_ARG_PKCS8 certtoolOptions.arg.pkcs8
#define OPT_ARG_PROVABLE certtoolOptions.arg.provable
#define OPT_ARG_VERIFY_PROVABLE_PRIVKEY certtoolOptions.arg.verify_provable_privkey
#define OPT_ARG_SEED certtoolOptions.arg.seed
#define OPT_ARG_CRL_INFO certtoolOptions.arg.crl_info
#define OPT_ARG_GENERATE_CRL certtoolOptions.arg.generate_crl
#define OPT_ARG_VERIFY_CRL certtoolOptions.arg.verify_crl
#define OPT_ARG_VERIFY_CHAIN certtoolOptions.arg.verify_chain
#define OPT_ARG_VERIFY certtoolOptions.arg.verify
#define OPT_ARG_VERIFY_HOSTNAME certtoolOptions.arg.verify_hostname
#define OPT_ARG_VERIFY_EMAIL certtoolOptions.arg.verify_email
#define OPT_ARG_VERIFY_PURPOSE certtoolOptions.arg.verify_purpose
#define OPT_ARG_VERIFY_ALLOW_BROKEN certtoolOptions.arg.verify_allow_broken
#define OPT_ARG_VERIFY_PROFILE certtoolOptions.arg.verify_profile
#define OPT_ARG_P7_GENERATE certtoolOptions.arg.p7_generate
#define OPT_ARG_P7_SIGN certtoolOptions.arg.p7_sign
#define OPT_ARG_P7_DETACHED_SIGN certtoolOptions.arg.p7_detached_sign
#define OPT_ARG_P7_INCLUDE_CERT certtoolOptions.arg.p7_include_cert
#define OPT_ARG_P7_TIME certtoolOptions.arg.p7_time
#define OPT_ARG_P7_SHOW_DATA certtoolOptions.arg.p7_show_data
#define OPT_ARG_P7_INFO certtoolOptions.arg.p7_info
#define OPT_ARG_P7_VERIFY certtoolOptions.arg.p7_verify
#define OPT_ARG_SMIME_TO_P7 certtoolOptions.arg.smime_to_p7
#define OPT_ARG_GENERATE_DH_PARAMS certtoolOptions.arg.generate_dh_params
#define OPT_ARG_GET_DH_PARAMS certtoolOptions.arg.get_dh_params
#define OPT_ARG_DH_INFO certtoolOptions.arg.dh_info
#define OPT_ARG_LOAD_PRIVKEY certtoolOptions.arg.load_privkey
#define OPT_ARG_LOAD_PUBKEY certtoolOptions.arg.load_pubkey
#define OPT_ARG_LOAD_REQUEST certtoolOptions.arg.load_request
#define OPT_ARG_LOAD_CERTIFICATE certtoolOptions.arg.load_certificate
#define OPT_ARG_LOAD_CA_PRIVKEY certtoolOptions.arg.load_ca_privkey
#define OPT_ARG_LOAD_CA_CERTIFICATE certtoolOptions.arg.load_ca_certificate
#define OPT_ARG_LOAD_CRL certtoolOptions.arg.load_crl
#define OPT_ARG_LOAD_DATA certtoolOptions.arg.load_data
#define OPT_ARG_PASSWORD certtoolOptions.arg.password
#define OPT_ARG_NULL_PASSWORD certtoolOptions.arg.null_password
#define OPT_ARG_EMPTY_PASSWORD certtoolOptions.arg.empty_password
#define OPT_ARG_HEX_NUMBERS certtoolOptions.arg.hex_numbers
#define OPT_ARG_CPRINT certtoolOptions.arg.cprint
#define OPT_ARG_RSA certtoolOptions.arg.rsa
#define OPT_ARG_DSA certtoolOptions.arg.dsa
#define OPT_ARG_ECC certtoolOptions.arg.ecc
#define OPT_ARG_HASH certtoolOptions.arg.hash
#define OPT_ARG_SALT_SIZE certtoolOptions.arg.salt_size
#define OPT_ARG_INDER certtoolOptions.arg.inder
#define OPT_ARG_OUTDER certtoolOptions.arg.outder
#define OPT_ARG_DISABLE_QUICK_RANDOM certtoolOptions.arg.disable_quick_random
#define OPT_ARG_TEMPLATE certtoolOptions.arg.template
#define OPT_ARG_STDOUT_INFO certtoolOptions.arg.stdout_info
#define OPT_ARG_ASK_PASS certtoolOptions.arg.ask_pass
#define OPT_ARG_PKCS_CIPHER certtoolOptions.arg.pkcs_cipher
#define OPT_ARG_PROVIDER certtoolOptions.arg.provider
#define OPT_ARG_TEXT certtoolOptions.arg.text
#define OPT_ARG_VERSION certtoolOptions.arg.version
#define OPT_ARG_HELP certtoolOptions.arg.help
#define OPT_ARG_MORE_HELP certtoolOptions.arg.more_help

#define OPT_VALUE_DEBUG certtoolOptions.value.debug
#define OPT_VALUE_BITS certtoolOptions.value.bits
#define OPT_VALUE_SALT_SIZE certtoolOptions.value.salt_size

#define ENABLED_OPT_VERBOSE certtoolOptions.enabled.verbose
#define ENABLED_OPT_P7_INCLUDE_CERT certtoolOptions.enabled.p7_include_cert
#define ENABLED_OPT_P7_TIME certtoolOptions.enabled.p7_time
#define ENABLED_OPT_P7_SHOW_DATA certtoolOptions.enabled.p7_show_data
#define ENABLED_OPT_INDER certtoolOptions.enabled.inder
#define ENABLED_OPT_OUTDER certtoolOptions.enabled.outder
#define ENABLED_OPT_ASK_PASS certtoolOptions.enabled.ask_pass
#define ENABLED_OPT_TEXT certtoolOptions.enabled.text




extern struct certtool_opts certtoolOptions;
int optionProcess(struct certtool_opts *opts, int argc, char **argv);
void usage (FILE *out, int status);

#endif /* CERTTOOL_OPTIONS_H_ */
