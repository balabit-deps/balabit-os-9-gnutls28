/* This file is auto-generated from srptool-options.json; do not edit */
#include <stdbool.h>
#include <stdio.h>

#ifndef SRPTOOL_OPTIONS_H_
#define SRPTOOL_OPTIONS_H_ 1

struct srptool_list
{
  const char **args;
  unsigned int count;
};

struct srptool_opts
{
  /* Options present in the command line */
  struct
  {
    bool debug;
    bool index;
    bool username;
    bool passwd;
    bool salt;
    bool verify;
    bool passwd_conf;
    bool create_conf;
    bool version;
    bool help;
    bool more_help;
  } present;

  /* Option arguments in raw string form */
  struct
  {
    const char *debug;
    const char *index;
    const char *username;
    const char *passwd;
    const char *salt;
    const char *passwd_conf;
    const char *create_conf;
    const char *version;
  } arg;

  /* Option arguments parsed as integer */
  struct
  {
    int debug;
    int index;
    int salt;
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

#define HAVE_OPT_DEBUG srptoolOptions.present.debug
#define HAVE_OPT_INDEX srptoolOptions.present.index
#define HAVE_OPT_USERNAME srptoolOptions.present.username
#define HAVE_OPT_PASSWD srptoolOptions.present.passwd
#define HAVE_OPT_SALT srptoolOptions.present.salt
#define HAVE_OPT_VERIFY srptoolOptions.present.verify
#define HAVE_OPT_PASSWD_CONF srptoolOptions.present.passwd_conf
#define HAVE_OPT_CREATE_CONF srptoolOptions.present.create_conf
#define HAVE_OPT_VERSION srptoolOptions.present.version
#define HAVE_OPT_HELP srptoolOptions.present.help
#define HAVE_OPT_MORE_HELP srptoolOptions.present.more_help

#define OPT_ARG_DEBUG srptoolOptions.arg.debug
#define OPT_ARG_INDEX srptoolOptions.arg.index
#define OPT_ARG_USERNAME srptoolOptions.arg.username
#define OPT_ARG_PASSWD srptoolOptions.arg.passwd
#define OPT_ARG_SALT srptoolOptions.arg.salt
#define OPT_ARG_VERIFY srptoolOptions.arg.verify
#define OPT_ARG_PASSWD_CONF srptoolOptions.arg.passwd_conf
#define OPT_ARG_CREATE_CONF srptoolOptions.arg.create_conf
#define OPT_ARG_VERSION srptoolOptions.arg.version
#define OPT_ARG_HELP srptoolOptions.arg.help
#define OPT_ARG_MORE_HELP srptoolOptions.arg.more_help

#define OPT_VALUE_DEBUG srptoolOptions.value.debug
#define OPT_VALUE_INDEX srptoolOptions.value.index
#define OPT_VALUE_SALT srptoolOptions.value.salt





extern struct srptool_opts srptoolOptions;
int optionProcess(struct srptool_opts *opts, int argc, char **argv);
void usage (FILE *out, int status);

#endif /* SRPTOOL_OPTIONS_H_ */
