/* This file is auto-generated from p11tool-options.json; do not edit */
#include <stdbool.h>
#include <stdio.h>

#ifndef P11TOOL_OPTIONS_H_
#define P11TOOL_OPTIONS_H_ 1

struct p11tool_list
{
  const char **args;
  unsigned int count;
};

struct p11tool_opts
{
  /* Options present in the command line */
  struct
  {
    bool list_tokens;
    bool list_token_urls;
    bool list_mechanisms;
    bool initialize;
    bool initialize_pin;
    bool initialize_so_pin;
    bool set_pin;
    bool set_so_pin;
    bool list_all;
    bool list_all_certs;
    bool list_certs;
    bool list_all_privkeys;
    bool list_all_trusted;
    bool export;
    bool export_stapled;
    bool export_chain;
    bool export_pubkey;
    bool info;
    bool generate_privkey;
    bool generate_rsa;
    bool generate_dsa;
    bool generate_ecc;
    bool bits;
    bool curve;
    bool sec_param;
    bool set_id;
    bool set_label;
    bool write;
    bool delete;
    bool label;
    bool id;
    bool mark_wrap;
    bool mark_trusted;
    bool mark_distrusted;
    bool mark_decrypt;
    bool mark_sign;
    bool mark_ca;
    bool mark_private;
    bool mark_always_authenticate;
    bool secret_key;
    bool load_privkey;
    bool load_pubkey;
    bool load_certificate;
    bool debug;
    bool outfile;
    bool login;
    bool so_login;
    bool test_sign;
    bool sign_params;
    bool hash;
    bool generate_random;
    bool pkcs8;
    bool inder;
    bool outder;
    bool provider;
    bool provider_opts;
    bool detailed_url;
    bool only_urls;
    bool batch;
    bool version;
    bool help;
    bool more_help;
  } present;

  /* Option arguments in raw string form */
  struct
  {
    const char *set_pin;
    const char *set_so_pin;
    const char *generate_privkey;
    const char *bits;
    const char *curve;
    const char *sec_param;
    const char *set_id;
    const char *set_label;
    const char *label;
    const char *id;
    const char *secret_key;
    const char *load_privkey;
    const char *load_pubkey;
    const char *load_certificate;
    const char *debug;
    const char *outfile;
    const char *sign_params;
    const char *hash;
    const char *generate_random;
    const char *provider;
    const char *provider_opts;
    const char *version;
  } arg;

  /* Option arguments parsed as integer */
  struct
  {
    int bits;
    int debug;
    int generate_random;
  } value;

  /* Option arguments parsed as list */
  struct
  {

  } list;

  /* Option enablement status */
  struct
  {
    bool mark_wrap;
    bool mark_trusted;
    bool mark_decrypt;
    bool mark_sign;
    bool mark_ca;
    bool mark_private;
    bool mark_always_authenticate;
    bool login;
    bool so_login;
    bool inder;
    bool outder;
    bool detailed_url;
  } enabled;
};

#define HAVE_OPT(name) HAVE_OPT_ ## name
#define OPT_ARG(name) OPT_ARG_ ## name
#define ENABLED_OPT(name) ENABLED_OPT_ ## name
#define STACKCT_OPT(name) STACKCT_OPT_ ## name
#define STACKLST_OPT(name) STACKLST_OPT_ ## name
#define USAGE(status) usage (stdout, (status))

#define HAVE_OPT_LIST_TOKENS p11toolOptions.present.list_tokens
#define HAVE_OPT_LIST_TOKEN_URLS p11toolOptions.present.list_token_urls
#define HAVE_OPT_LIST_MECHANISMS p11toolOptions.present.list_mechanisms
#define HAVE_OPT_INITIALIZE p11toolOptions.present.initialize
#define HAVE_OPT_INITIALIZE_PIN p11toolOptions.present.initialize_pin
#define HAVE_OPT_INITIALIZE_SO_PIN p11toolOptions.present.initialize_so_pin
#define HAVE_OPT_SET_PIN p11toolOptions.present.set_pin
#define HAVE_OPT_SET_SO_PIN p11toolOptions.present.set_so_pin
#define HAVE_OPT_LIST_ALL p11toolOptions.present.list_all
#define HAVE_OPT_LIST_ALL_CERTS p11toolOptions.present.list_all_certs
#define HAVE_OPT_LIST_CERTS p11toolOptions.present.list_certs
#define HAVE_OPT_LIST_ALL_PRIVKEYS p11toolOptions.present.list_all_privkeys
#define HAVE_OPT_LIST_ALL_TRUSTED p11toolOptions.present.list_all_trusted
#define HAVE_OPT_EXPORT p11toolOptions.present.export
#define HAVE_OPT_EXPORT_STAPLED p11toolOptions.present.export_stapled
#define HAVE_OPT_EXPORT_CHAIN p11toolOptions.present.export_chain
#define HAVE_OPT_EXPORT_PUBKEY p11toolOptions.present.export_pubkey
#define HAVE_OPT_INFO p11toolOptions.present.info
#define HAVE_OPT_GENERATE_PRIVKEY p11toolOptions.present.generate_privkey
#define HAVE_OPT_GENERATE_RSA p11toolOptions.present.generate_rsa
#define HAVE_OPT_GENERATE_DSA p11toolOptions.present.generate_dsa
#define HAVE_OPT_GENERATE_ECC p11toolOptions.present.generate_ecc
#define HAVE_OPT_BITS p11toolOptions.present.bits
#define HAVE_OPT_CURVE p11toolOptions.present.curve
#define HAVE_OPT_SEC_PARAM p11toolOptions.present.sec_param
#define HAVE_OPT_SET_ID p11toolOptions.present.set_id
#define HAVE_OPT_SET_LABEL p11toolOptions.present.set_label
#define HAVE_OPT_WRITE p11toolOptions.present.write
#define HAVE_OPT_DELETE p11toolOptions.present.delete
#define HAVE_OPT_LABEL p11toolOptions.present.label
#define HAVE_OPT_ID p11toolOptions.present.id
#define HAVE_OPT_MARK_WRAP p11toolOptions.present.mark_wrap
#define HAVE_OPT_MARK_TRUSTED p11toolOptions.present.mark_trusted
#define HAVE_OPT_MARK_DISTRUSTED p11toolOptions.present.mark_distrusted
#define HAVE_OPT_MARK_DECRYPT p11toolOptions.present.mark_decrypt
#define HAVE_OPT_MARK_SIGN p11toolOptions.present.mark_sign
#define HAVE_OPT_MARK_CA p11toolOptions.present.mark_ca
#define HAVE_OPT_MARK_PRIVATE p11toolOptions.present.mark_private
#define HAVE_OPT_MARK_ALWAYS_AUTHENTICATE p11toolOptions.present.mark_always_authenticate
#define HAVE_OPT_SECRET_KEY p11toolOptions.present.secret_key
#define HAVE_OPT_LOAD_PRIVKEY p11toolOptions.present.load_privkey
#define HAVE_OPT_LOAD_PUBKEY p11toolOptions.present.load_pubkey
#define HAVE_OPT_LOAD_CERTIFICATE p11toolOptions.present.load_certificate
#define HAVE_OPT_DEBUG p11toolOptions.present.debug
#define HAVE_OPT_OUTFILE p11toolOptions.present.outfile
#define HAVE_OPT_LOGIN p11toolOptions.present.login
#define HAVE_OPT_SO_LOGIN p11toolOptions.present.so_login
#define HAVE_OPT_TEST_SIGN p11toolOptions.present.test_sign
#define HAVE_OPT_SIGN_PARAMS p11toolOptions.present.sign_params
#define HAVE_OPT_HASH p11toolOptions.present.hash
#define HAVE_OPT_GENERATE_RANDOM p11toolOptions.present.generate_random
#define HAVE_OPT_PKCS8 p11toolOptions.present.pkcs8
#define HAVE_OPT_INDER p11toolOptions.present.inder
#define HAVE_OPT_OUTDER p11toolOptions.present.outder
#define HAVE_OPT_PROVIDER p11toolOptions.present.provider
#define HAVE_OPT_PROVIDER_OPTS p11toolOptions.present.provider_opts
#define HAVE_OPT_DETAILED_URL p11toolOptions.present.detailed_url
#define HAVE_OPT_ONLY_URLS p11toolOptions.present.only_urls
#define HAVE_OPT_BATCH p11toolOptions.present.batch
#define HAVE_OPT_VERSION p11toolOptions.present.version
#define HAVE_OPT_HELP p11toolOptions.present.help
#define HAVE_OPT_MORE_HELP p11toolOptions.present.more_help

#define OPT_ARG_LIST_TOKENS p11toolOptions.arg.list_tokens
#define OPT_ARG_LIST_TOKEN_URLS p11toolOptions.arg.list_token_urls
#define OPT_ARG_LIST_MECHANISMS p11toolOptions.arg.list_mechanisms
#define OPT_ARG_INITIALIZE p11toolOptions.arg.initialize
#define OPT_ARG_INITIALIZE_PIN p11toolOptions.arg.initialize_pin
#define OPT_ARG_INITIALIZE_SO_PIN p11toolOptions.arg.initialize_so_pin
#define OPT_ARG_SET_PIN p11toolOptions.arg.set_pin
#define OPT_ARG_SET_SO_PIN p11toolOptions.arg.set_so_pin
#define OPT_ARG_LIST_ALL p11toolOptions.arg.list_all
#define OPT_ARG_LIST_ALL_CERTS p11toolOptions.arg.list_all_certs
#define OPT_ARG_LIST_CERTS p11toolOptions.arg.list_certs
#define OPT_ARG_LIST_ALL_PRIVKEYS p11toolOptions.arg.list_all_privkeys
#define OPT_ARG_LIST_ALL_TRUSTED p11toolOptions.arg.list_all_trusted
#define OPT_ARG_EXPORT p11toolOptions.arg.export
#define OPT_ARG_EXPORT_STAPLED p11toolOptions.arg.export_stapled
#define OPT_ARG_EXPORT_CHAIN p11toolOptions.arg.export_chain
#define OPT_ARG_EXPORT_PUBKEY p11toolOptions.arg.export_pubkey
#define OPT_ARG_INFO p11toolOptions.arg.info
#define OPT_ARG_GENERATE_PRIVKEY p11toolOptions.arg.generate_privkey
#define OPT_ARG_GENERATE_RSA p11toolOptions.arg.generate_rsa
#define OPT_ARG_GENERATE_DSA p11toolOptions.arg.generate_dsa
#define OPT_ARG_GENERATE_ECC p11toolOptions.arg.generate_ecc
#define OPT_ARG_BITS p11toolOptions.arg.bits
#define OPT_ARG_CURVE p11toolOptions.arg.curve
#define OPT_ARG_SEC_PARAM p11toolOptions.arg.sec_param
#define OPT_ARG_SET_ID p11toolOptions.arg.set_id
#define OPT_ARG_SET_LABEL p11toolOptions.arg.set_label
#define OPT_ARG_WRITE p11toolOptions.arg.write
#define OPT_ARG_DELETE p11toolOptions.arg.delete
#define OPT_ARG_LABEL p11toolOptions.arg.label
#define OPT_ARG_ID p11toolOptions.arg.id
#define OPT_ARG_MARK_WRAP p11toolOptions.arg.mark_wrap
#define OPT_ARG_MARK_TRUSTED p11toolOptions.arg.mark_trusted
#define OPT_ARG_MARK_DISTRUSTED p11toolOptions.arg.mark_distrusted
#define OPT_ARG_MARK_DECRYPT p11toolOptions.arg.mark_decrypt
#define OPT_ARG_MARK_SIGN p11toolOptions.arg.mark_sign
#define OPT_ARG_MARK_CA p11toolOptions.arg.mark_ca
#define OPT_ARG_MARK_PRIVATE p11toolOptions.arg.mark_private
#define OPT_ARG_MARK_ALWAYS_AUTHENTICATE p11toolOptions.arg.mark_always_authenticate
#define OPT_ARG_SECRET_KEY p11toolOptions.arg.secret_key
#define OPT_ARG_LOAD_PRIVKEY p11toolOptions.arg.load_privkey
#define OPT_ARG_LOAD_PUBKEY p11toolOptions.arg.load_pubkey
#define OPT_ARG_LOAD_CERTIFICATE p11toolOptions.arg.load_certificate
#define OPT_ARG_DEBUG p11toolOptions.arg.debug
#define OPT_ARG_OUTFILE p11toolOptions.arg.outfile
#define OPT_ARG_LOGIN p11toolOptions.arg.login
#define OPT_ARG_SO_LOGIN p11toolOptions.arg.so_login
#define OPT_ARG_TEST_SIGN p11toolOptions.arg.test_sign
#define OPT_ARG_SIGN_PARAMS p11toolOptions.arg.sign_params
#define OPT_ARG_HASH p11toolOptions.arg.hash
#define OPT_ARG_GENERATE_RANDOM p11toolOptions.arg.generate_random
#define OPT_ARG_PKCS8 p11toolOptions.arg.pkcs8
#define OPT_ARG_INDER p11toolOptions.arg.inder
#define OPT_ARG_OUTDER p11toolOptions.arg.outder
#define OPT_ARG_PROVIDER p11toolOptions.arg.provider
#define OPT_ARG_PROVIDER_OPTS p11toolOptions.arg.provider_opts
#define OPT_ARG_DETAILED_URL p11toolOptions.arg.detailed_url
#define OPT_ARG_ONLY_URLS p11toolOptions.arg.only_urls
#define OPT_ARG_BATCH p11toolOptions.arg.batch
#define OPT_ARG_VERSION p11toolOptions.arg.version
#define OPT_ARG_HELP p11toolOptions.arg.help
#define OPT_ARG_MORE_HELP p11toolOptions.arg.more_help

#define OPT_VALUE_BITS p11toolOptions.value.bits
#define OPT_VALUE_DEBUG p11toolOptions.value.debug
#define OPT_VALUE_GENERATE_RANDOM p11toolOptions.value.generate_random

#define ENABLED_OPT_MARK_WRAP p11toolOptions.enabled.mark_wrap
#define ENABLED_OPT_MARK_TRUSTED p11toolOptions.enabled.mark_trusted
#define ENABLED_OPT_MARK_DECRYPT p11toolOptions.enabled.mark_decrypt
#define ENABLED_OPT_MARK_SIGN p11toolOptions.enabled.mark_sign
#define ENABLED_OPT_MARK_CA p11toolOptions.enabled.mark_ca
#define ENABLED_OPT_MARK_PRIVATE p11toolOptions.enabled.mark_private
#define ENABLED_OPT_MARK_ALWAYS_AUTHENTICATE p11toolOptions.enabled.mark_always_authenticate
#define ENABLED_OPT_LOGIN p11toolOptions.enabled.login
#define ENABLED_OPT_SO_LOGIN p11toolOptions.enabled.so_login
#define ENABLED_OPT_INDER p11toolOptions.enabled.inder
#define ENABLED_OPT_OUTDER p11toolOptions.enabled.outder
#define ENABLED_OPT_DETAILED_URL p11toolOptions.enabled.detailed_url




extern struct p11tool_opts p11toolOptions;
int optionProcess(struct p11tool_opts *opts, int argc, char **argv);
void usage (FILE *out, int status);

#endif /* P11TOOL_OPTIONS_H_ */
