/* This file is auto-generated from psktool-options.json; do not edit */
#include <stdbool.h>
#include <stdio.h>

#ifndef PSKTOOL_OPTIONS_H_
#define PSKTOOL_OPTIONS_H_ 1

struct psktool_list
{
  const char **args;
  unsigned int count;
};

struct psktool_opts
{
  /* Options present in the command line */
  struct
  {
    bool debug;
    bool keysize;
    bool username;
    bool pskfile;
    bool version;
    bool help;
    bool more_help;
  } present;

  /* Option arguments in raw string form */
  struct
  {
    const char *debug;
    const char *keysize;
    const char *username;
    const char *pskfile;
    const char *version;
  } arg;

  /* Option arguments parsed as integer */
  struct
  {
    int debug;
    int keysize;
  } value;

  /* Option arguments parsed as list */
  struct
  {

  } list;

  /* Option enablement status */
  struct
  {

  } enabled;
};

#define HAVE_OPT(name) HAVE_OPT_ ## name
#define OPT_ARG(name) OPT_ARG_ ## name
#define ENABLED_OPT(name) ENABLED_OPT_ ## name
#define STACKCT_OPT(name) STACKCT_OPT_ ## name
#define STACKLST_OPT(name) STACKLST_OPT_ ## name
#define USAGE(status) usage (stdout, (status))

#define HAVE_OPT_DEBUG psktoolOptions.present.debug
#define HAVE_OPT_KEYSIZE psktoolOptions.present.keysize
#define HAVE_OPT_USERNAME psktoolOptions.present.username
#define HAVE_OPT_PSKFILE psktoolOptions.present.pskfile
#define HAVE_OPT_VERSION psktoolOptions.present.version
#define HAVE_OPT_HELP psktoolOptions.present.help
#define HAVE_OPT_MORE_HELP psktoolOptions.present.more_help

#define OPT_ARG_DEBUG psktoolOptions.arg.debug
#define OPT_ARG_KEYSIZE psktoolOptions.arg.keysize
#define OPT_ARG_USERNAME psktoolOptions.arg.username
#define OPT_ARG_PSKFILE psktoolOptions.arg.pskfile
#define OPT_ARG_VERSION psktoolOptions.arg.version
#define OPT_ARG_HELP psktoolOptions.arg.help
#define OPT_ARG_MORE_HELP psktoolOptions.arg.more_help

#define OPT_VALUE_DEBUG psktoolOptions.value.debug
#define OPT_VALUE_KEYSIZE psktoolOptions.value.keysize





extern struct psktool_opts psktoolOptions;
int optionProcess(struct psktool_opts *opts, int argc, char **argv);
void usage (FILE *out, int status);

#endif /* PSKTOOL_OPTIONS_H_ */
