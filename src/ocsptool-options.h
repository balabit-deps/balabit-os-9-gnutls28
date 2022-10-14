/* This file is auto-generated from ocsptool-options.json; do not edit */
#include <stdbool.h>
#include <stdio.h>

#ifndef OCSPTOOL_OPTIONS_H_
#define OCSPTOOL_OPTIONS_H_ 1

struct ocsptool_list
{
  const char **args;
  unsigned int count;
};

struct ocsptool_opts
{
  /* Options present in the command line */
  struct
  {
    bool debug;
    bool verbose;
    bool infile;
    bool outfile;
    bool ask;
    bool verify_response;
    bool request_info;
    bool response_info;
    bool generate_request;
    bool nonce;
    bool load_chain;
    bool load_issuer;
    bool load_cert;
    bool load_trust;
    bool load_signer;
    bool inder;
    bool outder;
    bool outpem;
    bool load_request;
    bool load_response;
    bool ignore_errors;
    bool verify_allow_broken;
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
    const char *ask;
    const char *load_chain;
    const char *load_issuer;
    const char *load_cert;
    const char *load_trust;
    const char *load_signer;
    const char *load_request;
    const char *load_response;
    const char *version;
  } arg;

  /* Option arguments parsed as integer */
  struct
  {
    int debug;
  } value;

  /* Option arguments parsed as list */
  struct
  {

  } list;

  /* Option enablement status */
  struct
  {
    bool verbose;
    bool nonce;
    bool inder;
  } enabled;
};

#define HAVE_OPT(name) HAVE_OPT_ ## name
#define OPT_ARG(name) OPT_ARG_ ## name
#define ENABLED_OPT(name) ENABLED_OPT_ ## name
#define STACKCT_OPT(name) STACKCT_OPT_ ## name
#define STACKLST_OPT(name) STACKLST_OPT_ ## name
#define USAGE(status) usage (stdout, (status))

#define HAVE_OPT_DEBUG ocsptoolOptions.present.debug
#define HAVE_OPT_VERBOSE ocsptoolOptions.present.verbose
#define HAVE_OPT_INFILE ocsptoolOptions.present.infile
#define HAVE_OPT_OUTFILE ocsptoolOptions.present.outfile
#define HAVE_OPT_ASK ocsptoolOptions.present.ask
#define HAVE_OPT_VERIFY_RESPONSE ocsptoolOptions.present.verify_response
#define HAVE_OPT_REQUEST_INFO ocsptoolOptions.present.request_info
#define HAVE_OPT_RESPONSE_INFO ocsptoolOptions.present.response_info
#define HAVE_OPT_GENERATE_REQUEST ocsptoolOptions.present.generate_request
#define HAVE_OPT_NONCE ocsptoolOptions.present.nonce
#define HAVE_OPT_LOAD_CHAIN ocsptoolOptions.present.load_chain
#define HAVE_OPT_LOAD_ISSUER ocsptoolOptions.present.load_issuer
#define HAVE_OPT_LOAD_CERT ocsptoolOptions.present.load_cert
#define HAVE_OPT_LOAD_TRUST ocsptoolOptions.present.load_trust
#define HAVE_OPT_LOAD_SIGNER ocsptoolOptions.present.load_signer
#define HAVE_OPT_INDER ocsptoolOptions.present.inder
#define HAVE_OPT_OUTDER ocsptoolOptions.present.outder
#define HAVE_OPT_OUTPEM ocsptoolOptions.present.outpem
#define HAVE_OPT_LOAD_REQUEST ocsptoolOptions.present.load_request
#define HAVE_OPT_LOAD_RESPONSE ocsptoolOptions.present.load_response
#define HAVE_OPT_IGNORE_ERRORS ocsptoolOptions.present.ignore_errors
#define HAVE_OPT_VERIFY_ALLOW_BROKEN ocsptoolOptions.present.verify_allow_broken
#define HAVE_OPT_VERSION ocsptoolOptions.present.version
#define HAVE_OPT_HELP ocsptoolOptions.present.help
#define HAVE_OPT_MORE_HELP ocsptoolOptions.present.more_help

#define OPT_ARG_DEBUG ocsptoolOptions.arg.debug
#define OPT_ARG_VERBOSE ocsptoolOptions.arg.verbose
#define OPT_ARG_INFILE ocsptoolOptions.arg.infile
#define OPT_ARG_OUTFILE ocsptoolOptions.arg.outfile
#define OPT_ARG_ASK ocsptoolOptions.arg.ask
#define OPT_ARG_VERIFY_RESPONSE ocsptoolOptions.arg.verify_response
#define OPT_ARG_REQUEST_INFO ocsptoolOptions.arg.request_info
#define OPT_ARG_RESPONSE_INFO ocsptoolOptions.arg.response_info
#define OPT_ARG_GENERATE_REQUEST ocsptoolOptions.arg.generate_request
#define OPT_ARG_NONCE ocsptoolOptions.arg.nonce
#define OPT_ARG_LOAD_CHAIN ocsptoolOptions.arg.load_chain
#define OPT_ARG_LOAD_ISSUER ocsptoolOptions.arg.load_issuer
#define OPT_ARG_LOAD_CERT ocsptoolOptions.arg.load_cert
#define OPT_ARG_LOAD_TRUST ocsptoolOptions.arg.load_trust
#define OPT_ARG_LOAD_SIGNER ocsptoolOptions.arg.load_signer
#define OPT_ARG_INDER ocsptoolOptions.arg.inder
#define OPT_ARG_OUTDER ocsptoolOptions.arg.outder
#define OPT_ARG_OUTPEM ocsptoolOptions.arg.outpem
#define OPT_ARG_LOAD_REQUEST ocsptoolOptions.arg.load_request
#define OPT_ARG_LOAD_RESPONSE ocsptoolOptions.arg.load_response
#define OPT_ARG_IGNORE_ERRORS ocsptoolOptions.arg.ignore_errors
#define OPT_ARG_VERIFY_ALLOW_BROKEN ocsptoolOptions.arg.verify_allow_broken
#define OPT_ARG_VERSION ocsptoolOptions.arg.version
#define OPT_ARG_HELP ocsptoolOptions.arg.help
#define OPT_ARG_MORE_HELP ocsptoolOptions.arg.more_help

#define OPT_VALUE_DEBUG ocsptoolOptions.value.debug

#define ENABLED_OPT_VERBOSE ocsptoolOptions.enabled.verbose
#define ENABLED_OPT_NONCE ocsptoolOptions.enabled.nonce
#define ENABLED_OPT_INDER ocsptoolOptions.enabled.inder




extern struct ocsptool_opts ocsptoolOptions;
int optionProcess(struct ocsptool_opts *opts, int argc, char **argv);
void usage (FILE *out, int status);

#endif /* OCSPTOOL_OPTIONS_H_ */
