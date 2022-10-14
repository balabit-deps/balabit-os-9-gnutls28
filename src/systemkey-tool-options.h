/* This file is auto-generated from systemkey-tool-options.json; do not edit */
#include <stdbool.h>
#include <stdio.h>

#ifndef SYSTEMKEY_TOOL_OPTIONS_H_
#define SYSTEMKEY_TOOL_OPTIONS_H_ 1

struct systemkey_tool_list
{
  const char **args;
  unsigned int count;
};

struct systemkey_tool_opts
{
  /* Options present in the command line */
  struct
  {
    bool debug;
    bool outfile;
    bool list;
    bool delete;
    bool outder;
    bool version;
    bool help;
    bool more_help;
  } present;

  /* Option arguments in raw string form */
  struct
  {
    const char *debug;
    const char *outfile;
    const char *delete;
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
    bool outder;
  } enabled;
};

#define HAVE_OPT(name) HAVE_OPT_ ## name
#define OPT_ARG(name) OPT_ARG_ ## name
#define ENABLED_OPT(name) ENABLED_OPT_ ## name
#define STACKCT_OPT(name) STACKCT_OPT_ ## name
#define STACKLST_OPT(name) STACKLST_OPT_ ## name
#define USAGE(status) usage (stdout, (status))

#define HAVE_OPT_DEBUG systemkey_toolOptions.present.debug
#define HAVE_OPT_OUTFILE systemkey_toolOptions.present.outfile
#define HAVE_OPT_LIST systemkey_toolOptions.present.list
#define HAVE_OPT_DELETE systemkey_toolOptions.present.delete
#define HAVE_OPT_OUTDER systemkey_toolOptions.present.outder
#define HAVE_OPT_VERSION systemkey_toolOptions.present.version
#define HAVE_OPT_HELP systemkey_toolOptions.present.help
#define HAVE_OPT_MORE_HELP systemkey_toolOptions.present.more_help

#define OPT_ARG_DEBUG systemkey_toolOptions.arg.debug
#define OPT_ARG_OUTFILE systemkey_toolOptions.arg.outfile
#define OPT_ARG_LIST systemkey_toolOptions.arg.list
#define OPT_ARG_DELETE systemkey_toolOptions.arg.delete
#define OPT_ARG_OUTDER systemkey_toolOptions.arg.outder
#define OPT_ARG_VERSION systemkey_toolOptions.arg.version
#define OPT_ARG_HELP systemkey_toolOptions.arg.help
#define OPT_ARG_MORE_HELP systemkey_toolOptions.arg.more_help

#define OPT_VALUE_DEBUG systemkey_toolOptions.value.debug

#define ENABLED_OPT_OUTDER systemkey_toolOptions.enabled.outder




extern struct systemkey_tool_opts systemkey_toolOptions;
int optionProcess(struct systemkey_tool_opts *opts, int argc, char **argv);
void usage (FILE *out, int status);

#endif /* SYSTEMKEY_TOOL_OPTIONS_H_ */
