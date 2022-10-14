/* This file is auto-generated from tpmtool-options.json; do not edit */
#include <stdbool.h>
#include <stdio.h>

#ifndef TPMTOOL_OPTIONS_H_
#define TPMTOOL_OPTIONS_H_ 1

struct tpmtool_list
{
  const char **args;
  unsigned int count;
};

struct tpmtool_opts
{
  /* Options present in the command line */
  struct
  {
    bool debug;
    bool infile;
    bool outfile;
    bool generate_rsa;
    bool register;
    bool signing;
    bool legacy;
    bool user;
    bool system;
    bool pubkey;
    bool list;
    bool delete;
    bool test_sign;
    bool sec_param;
    bool bits;
    bool inder;
    bool outder;
    bool srk_well_known;
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
    const char *pubkey;
    const char *delete;
    const char *test_sign;
    const char *sec_param;
    const char *bits;
    const char *version;
  } arg;

  /* Option arguments parsed as integer */
  struct
  {
    int debug;
    int bits;
  } value;

  /* Option arguments parsed as list */
  struct
  {

  } list;

  /* Option enablement status */
  struct
  {
    bool inder;
    bool outder;
  } enabled;
};

#define HAVE_OPT(name) HAVE_OPT_ ## name
#define OPT_ARG(name) OPT_ARG_ ## name
#define ENABLED_OPT(name) ENABLED_OPT_ ## name
#define STACKCT_OPT(name) STACKCT_OPT_ ## name
#define STACKLST_OPT(name) STACKLST_OPT_ ## name
#define USAGE(status) usage (stdout, (status))

#define HAVE_OPT_DEBUG tpmtoolOptions.present.debug
#define HAVE_OPT_INFILE tpmtoolOptions.present.infile
#define HAVE_OPT_OUTFILE tpmtoolOptions.present.outfile
#define HAVE_OPT_GENERATE_RSA tpmtoolOptions.present.generate_rsa
#define HAVE_OPT_REGISTER tpmtoolOptions.present.register
#define HAVE_OPT_SIGNING tpmtoolOptions.present.signing
#define HAVE_OPT_LEGACY tpmtoolOptions.present.legacy
#define HAVE_OPT_USER tpmtoolOptions.present.user
#define HAVE_OPT_SYSTEM tpmtoolOptions.present.system
#define HAVE_OPT_PUBKEY tpmtoolOptions.present.pubkey
#define HAVE_OPT_LIST tpmtoolOptions.present.list
#define HAVE_OPT_DELETE tpmtoolOptions.present.delete
#define HAVE_OPT_TEST_SIGN tpmtoolOptions.present.test_sign
#define HAVE_OPT_SEC_PARAM tpmtoolOptions.present.sec_param
#define HAVE_OPT_BITS tpmtoolOptions.present.bits
#define HAVE_OPT_INDER tpmtoolOptions.present.inder
#define HAVE_OPT_OUTDER tpmtoolOptions.present.outder
#define HAVE_OPT_SRK_WELL_KNOWN tpmtoolOptions.present.srk_well_known
#define HAVE_OPT_VERSION tpmtoolOptions.present.version
#define HAVE_OPT_HELP tpmtoolOptions.present.help
#define HAVE_OPT_MORE_HELP tpmtoolOptions.present.more_help

#define OPT_ARG_DEBUG tpmtoolOptions.arg.debug
#define OPT_ARG_INFILE tpmtoolOptions.arg.infile
#define OPT_ARG_OUTFILE tpmtoolOptions.arg.outfile
#define OPT_ARG_GENERATE_RSA tpmtoolOptions.arg.generate_rsa
#define OPT_ARG_REGISTER tpmtoolOptions.arg.register
#define OPT_ARG_SIGNING tpmtoolOptions.arg.signing
#define OPT_ARG_LEGACY tpmtoolOptions.arg.legacy
#define OPT_ARG_USER tpmtoolOptions.arg.user
#define OPT_ARG_SYSTEM tpmtoolOptions.arg.system
#define OPT_ARG_PUBKEY tpmtoolOptions.arg.pubkey
#define OPT_ARG_LIST tpmtoolOptions.arg.list
#define OPT_ARG_DELETE tpmtoolOptions.arg.delete
#define OPT_ARG_TEST_SIGN tpmtoolOptions.arg.test_sign
#define OPT_ARG_SEC_PARAM tpmtoolOptions.arg.sec_param
#define OPT_ARG_BITS tpmtoolOptions.arg.bits
#define OPT_ARG_INDER tpmtoolOptions.arg.inder
#define OPT_ARG_OUTDER tpmtoolOptions.arg.outder
#define OPT_ARG_SRK_WELL_KNOWN tpmtoolOptions.arg.srk_well_known
#define OPT_ARG_VERSION tpmtoolOptions.arg.version
#define OPT_ARG_HELP tpmtoolOptions.arg.help
#define OPT_ARG_MORE_HELP tpmtoolOptions.arg.more_help

#define OPT_VALUE_DEBUG tpmtoolOptions.value.debug
#define OPT_VALUE_BITS tpmtoolOptions.value.bits

#define ENABLED_OPT_INDER tpmtoolOptions.enabled.inder
#define ENABLED_OPT_OUTDER tpmtoolOptions.enabled.outder




extern struct tpmtool_opts tpmtoolOptions;
int optionProcess(struct tpmtool_opts *opts, int argc, char **argv);
void usage (FILE *out, int status);

#endif /* TPMTOOL_OPTIONS_H_ */
