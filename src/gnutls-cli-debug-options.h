/* This file is auto-generated from gnutls-cli-debug-options.json; do not edit */
#include <stdbool.h>
#include <stdio.h>

#ifndef GNUTLS_CLI_DEBUG_OPTIONS_H_
#define GNUTLS_CLI_DEBUG_OPTIONS_H_ 1

struct gnutls_cli_debug_list
{
  const char **args;
  unsigned int count;
};

struct gnutls_cli_debug_opts
{
  /* Options present in the command line */
  struct
  {
    bool debug;
    bool verbose;
    bool port;
    bool starttls_proto;
    bool version;
    bool help;
    bool more_help;
  } present;

  /* Option arguments in raw string form */
  struct
  {
    const char *debug;
    const char *port;
    const char *starttls_proto;
    const char *version;
  } arg;

  /* Option arguments parsed as integer */
  struct
  {
    int debug;
    int port;
  } value;

  /* Option arguments parsed as list */
  struct
  {

  } list;

  /* Option enablement status */
  struct
  {
    bool verbose;
  } enabled;
};

#define HAVE_OPT(name) HAVE_OPT_ ## name
#define OPT_ARG(name) OPT_ARG_ ## name
#define ENABLED_OPT(name) ENABLED_OPT_ ## name
#define STACKCT_OPT(name) STACKCT_OPT_ ## name
#define STACKLST_OPT(name) STACKLST_OPT_ ## name
#define USAGE(status) usage (stdout, (status))

#define HAVE_OPT_DEBUG gnutls_cli_debugOptions.present.debug
#define HAVE_OPT_VERBOSE gnutls_cli_debugOptions.present.verbose
#define HAVE_OPT_PORT gnutls_cli_debugOptions.present.port
#define HAVE_OPT_STARTTLS_PROTO gnutls_cli_debugOptions.present.starttls_proto
#define HAVE_OPT_VERSION gnutls_cli_debugOptions.present.version
#define HAVE_OPT_HELP gnutls_cli_debugOptions.present.help
#define HAVE_OPT_MORE_HELP gnutls_cli_debugOptions.present.more_help

#define OPT_ARG_DEBUG gnutls_cli_debugOptions.arg.debug
#define OPT_ARG_VERBOSE gnutls_cli_debugOptions.arg.verbose
#define OPT_ARG_PORT gnutls_cli_debugOptions.arg.port
#define OPT_ARG_STARTTLS_PROTO gnutls_cli_debugOptions.arg.starttls_proto
#define OPT_ARG_VERSION gnutls_cli_debugOptions.arg.version
#define OPT_ARG_HELP gnutls_cli_debugOptions.arg.help
#define OPT_ARG_MORE_HELP gnutls_cli_debugOptions.arg.more_help

#define OPT_VALUE_DEBUG gnutls_cli_debugOptions.value.debug
#define OPT_VALUE_PORT gnutls_cli_debugOptions.value.port

#define ENABLED_OPT_VERBOSE gnutls_cli_debugOptions.enabled.verbose




extern struct gnutls_cli_debug_opts gnutls_cli_debugOptions;
int optionProcess(struct gnutls_cli_debug_opts *opts, int argc, char **argv);
void usage (FILE *out, int status);

#endif /* GNUTLS_CLI_DEBUG_OPTIONS_H_ */
