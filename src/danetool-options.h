/* This file is auto-generated from danetool-options.json; do not edit */
#include <stdbool.h>
#include <stdio.h>

#ifndef DANETOOL_OPTIONS_H_
#define DANETOOL_OPTIONS_H_ 1

struct danetool_list
{
  const char **args;
  unsigned int count;
};

struct danetool_opts
{
  /* Options present in the command line */
  struct
  {
    bool debug;
    bool verbose;
    bool outfile;
    bool load_pubkey;
    bool load_certificate;
    bool dlv;
    bool hash;
    bool check;
    bool check_ee;
    bool check_ca;
    bool tlsa_rr;
    bool host;
    bool proto;
    bool port;
    bool starttls_proto;
    bool ca;
    bool x509;
    bool domain;
    bool local_dns;
    bool insecure;
    bool inder;
    bool print_raw;
    bool quiet;
    bool version;
    bool help;
    bool more_help;
  } present;

  /* Option arguments in raw string form */
  struct
  {
    const char *debug;
    const char *outfile;
    const char *load_pubkey;
    const char *load_certificate;
    const char *dlv;
    const char *hash;
    const char *check;
    const char *host;
    const char *proto;
    const char *port;
    const char *starttls_proto;
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
    bool domain;
    bool local_dns;
    bool inder;
    bool print_raw;
  } enabled;
};

#define HAVE_OPT(name) HAVE_OPT_ ## name
#define OPT_ARG(name) OPT_ARG_ ## name
#define ENABLED_OPT(name) ENABLED_OPT_ ## name
#define STACKCT_OPT(name) STACKCT_OPT_ ## name
#define STACKLST_OPT(name) STACKLST_OPT_ ## name
#define USAGE(status) usage (stdout, (status))

#define HAVE_OPT_DEBUG danetoolOptions.present.debug
#define HAVE_OPT_VERBOSE danetoolOptions.present.verbose
#define HAVE_OPT_OUTFILE danetoolOptions.present.outfile
#define HAVE_OPT_LOAD_PUBKEY danetoolOptions.present.load_pubkey
#define HAVE_OPT_LOAD_CERTIFICATE danetoolOptions.present.load_certificate
#define HAVE_OPT_DLV danetoolOptions.present.dlv
#define HAVE_OPT_HASH danetoolOptions.present.hash
#define HAVE_OPT_CHECK danetoolOptions.present.check
#define HAVE_OPT_CHECK_EE danetoolOptions.present.check_ee
#define HAVE_OPT_CHECK_CA danetoolOptions.present.check_ca
#define HAVE_OPT_TLSA_RR danetoolOptions.present.tlsa_rr
#define HAVE_OPT_HOST danetoolOptions.present.host
#define HAVE_OPT_PROTO danetoolOptions.present.proto
#define HAVE_OPT_PORT danetoolOptions.present.port
#define HAVE_OPT_STARTTLS_PROTO danetoolOptions.present.starttls_proto
#define HAVE_OPT_CA danetoolOptions.present.ca
#define HAVE_OPT_X509 danetoolOptions.present.x509
#define HAVE_OPT_DOMAIN danetoolOptions.present.domain
#define HAVE_OPT_LOCAL_DNS danetoolOptions.present.local_dns
#define HAVE_OPT_INSECURE danetoolOptions.present.insecure
#define HAVE_OPT_INDER danetoolOptions.present.inder
#define HAVE_OPT_PRINT_RAW danetoolOptions.present.print_raw
#define HAVE_OPT_QUIET danetoolOptions.present.quiet
#define HAVE_OPT_VERSION danetoolOptions.present.version
#define HAVE_OPT_HELP danetoolOptions.present.help
#define HAVE_OPT_MORE_HELP danetoolOptions.present.more_help

#define OPT_ARG_DEBUG danetoolOptions.arg.debug
#define OPT_ARG_VERBOSE danetoolOptions.arg.verbose
#define OPT_ARG_OUTFILE danetoolOptions.arg.outfile
#define OPT_ARG_LOAD_PUBKEY danetoolOptions.arg.load_pubkey
#define OPT_ARG_LOAD_CERTIFICATE danetoolOptions.arg.load_certificate
#define OPT_ARG_DLV danetoolOptions.arg.dlv
#define OPT_ARG_HASH danetoolOptions.arg.hash
#define OPT_ARG_CHECK danetoolOptions.arg.check
#define OPT_ARG_CHECK_EE danetoolOptions.arg.check_ee
#define OPT_ARG_CHECK_CA danetoolOptions.arg.check_ca
#define OPT_ARG_TLSA_RR danetoolOptions.arg.tlsa_rr
#define OPT_ARG_HOST danetoolOptions.arg.host
#define OPT_ARG_PROTO danetoolOptions.arg.proto
#define OPT_ARG_PORT danetoolOptions.arg.port
#define OPT_ARG_STARTTLS_PROTO danetoolOptions.arg.starttls_proto
#define OPT_ARG_CA danetoolOptions.arg.ca
#define OPT_ARG_X509 danetoolOptions.arg.x509
#define OPT_ARG_DOMAIN danetoolOptions.arg.domain
#define OPT_ARG_LOCAL_DNS danetoolOptions.arg.local_dns
#define OPT_ARG_INSECURE danetoolOptions.arg.insecure
#define OPT_ARG_INDER danetoolOptions.arg.inder
#define OPT_ARG_PRINT_RAW danetoolOptions.arg.print_raw
#define OPT_ARG_QUIET danetoolOptions.arg.quiet
#define OPT_ARG_VERSION danetoolOptions.arg.version
#define OPT_ARG_HELP danetoolOptions.arg.help
#define OPT_ARG_MORE_HELP danetoolOptions.arg.more_help

#define OPT_VALUE_DEBUG danetoolOptions.value.debug

#define ENABLED_OPT_VERBOSE danetoolOptions.enabled.verbose
#define ENABLED_OPT_DOMAIN danetoolOptions.enabled.domain
#define ENABLED_OPT_LOCAL_DNS danetoolOptions.enabled.local_dns
#define ENABLED_OPT_INDER danetoolOptions.enabled.inder
#define ENABLED_OPT_PRINT_RAW danetoolOptions.enabled.print_raw




extern struct danetool_opts danetoolOptions;
int optionProcess(struct danetool_opts *opts, int argc, char **argv);
void usage (FILE *out, int status);

#endif /* DANETOOL_OPTIONS_H_ */
