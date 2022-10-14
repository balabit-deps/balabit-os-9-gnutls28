/* This file is auto-generated from gnutls-cli-options.json; do not edit */
#include <stdbool.h>
#include <stdio.h>

#ifndef GNUTLS_CLI_OPTIONS_H_
#define GNUTLS_CLI_OPTIONS_H_ 1

struct gnutls_cli_list
{
  const char **args;
  unsigned int count;
};

struct gnutls_cli_opts
{
  /* Options present in the command line */
  struct
  {
    bool debug;
    bool verbose;
    bool tofu;
    bool strict_tofu;
    bool dane;
    bool local_dns;
    bool ca_verification;
    bool ocsp;
    bool resume;
    bool earlydata;
    bool rehandshake;
    bool sni_hostname;
    bool verify_hostname;
    bool starttls;
    bool starttls_proto;
    bool udp;
    bool mtu;
    bool crlf;
    bool fastopen;
    bool x509fmtder;
    bool print_cert;
    bool save_cert;
    bool save_ocsp;
    bool save_ocsp_multi;
    bool save_server_trace;
    bool save_client_trace;
    bool dh_bits;
    bool priority;
    bool x509cafile;
    bool x509crlfile;
    bool x509keyfile;
    bool x509certfile;
    bool rawpkkeyfile;
    bool rawpkfile;
    bool srpusername;
    bool srppasswd;
    bool pskusername;
    bool pskkey;
    bool port;
    bool insecure;
    bool verify_allow_broken;
    bool ranges;
    bool benchmark_ciphers;
    bool benchmark_tls_kx;
    bool benchmark_tls_ciphers;
    bool list;
    bool priority_list;
    bool noticket;
    bool srtp_profiles;
    bool alpn;
    bool heartbeat;
    bool recordsize;
    bool disable_sni;
    bool disable_extensions;
    bool single_key_share;
    bool post_handshake_auth;
    bool inline_commands;
    bool inline_commands_prefix;
    bool provider;
    bool fips140_mode;
    bool list_config;
    bool logfile;
    bool keymatexport;
    bool keymatexportsize;
    bool waitresumption;
    bool ca_auto_retrieve;
    bool version;
    bool help;
    bool more_help;
  } present;

  /* Option arguments in raw string form */
  struct
  {
    const char *debug;
    const char *earlydata;
    const char *sni_hostname;
    const char *verify_hostname;
    const char *starttls_proto;
    const char *mtu;
    const char *save_cert;
    const char *save_ocsp;
    const char *save_ocsp_multi;
    const char *save_server_trace;
    const char *save_client_trace;
    const char *dh_bits;
    const char *priority;
    const char *x509cafile;
    const char *x509crlfile;
    const char *x509keyfile;
    const char *x509certfile;
    const char *rawpkkeyfile;
    const char *rawpkfile;
    const char *srpusername;
    const char *srppasswd;
    const char *pskusername;
    const char *pskkey;
    const char *port;
    const char *srtp_profiles;
    const char *recordsize;
    const char *inline_commands_prefix;
    const char *provider;
    const char *logfile;
    const char *keymatexport;
    const char *keymatexportsize;
    const char *version;
  } arg;

  /* Option arguments parsed as integer */
  struct
  {
    int debug;
    int mtu;
    int dh_bits;
    int recordsize;
    int keymatexportsize;
  } value;

  /* Option arguments parsed as list */
  struct
  {
    struct gnutls_cli_list alpn;
  } list;

  /* Option enablement status */
  struct
  {
    bool verbose;
    bool tofu;
    bool strict_tofu;
    bool dane;
    bool local_dns;
    bool ca_verification;
    bool ocsp;
    bool ca_auto_retrieve;
  } enabled;
};

#define HAVE_OPT(name) HAVE_OPT_ ## name
#define OPT_ARG(name) OPT_ARG_ ## name
#define ENABLED_OPT(name) ENABLED_OPT_ ## name
#define STACKCT_OPT(name) STACKCT_OPT_ ## name
#define STACKLST_OPT(name) STACKLST_OPT_ ## name
#define USAGE(status) usage (stdout, (status))

#define HAVE_OPT_DEBUG gnutls_cliOptions.present.debug
#define HAVE_OPT_VERBOSE gnutls_cliOptions.present.verbose
#define HAVE_OPT_TOFU gnutls_cliOptions.present.tofu
#define HAVE_OPT_STRICT_TOFU gnutls_cliOptions.present.strict_tofu
#define HAVE_OPT_DANE gnutls_cliOptions.present.dane
#define HAVE_OPT_LOCAL_DNS gnutls_cliOptions.present.local_dns
#define HAVE_OPT_CA_VERIFICATION gnutls_cliOptions.present.ca_verification
#define HAVE_OPT_OCSP gnutls_cliOptions.present.ocsp
#define HAVE_OPT_RESUME gnutls_cliOptions.present.resume
#define HAVE_OPT_EARLYDATA gnutls_cliOptions.present.earlydata
#define HAVE_OPT_REHANDSHAKE gnutls_cliOptions.present.rehandshake
#define HAVE_OPT_SNI_HOSTNAME gnutls_cliOptions.present.sni_hostname
#define HAVE_OPT_VERIFY_HOSTNAME gnutls_cliOptions.present.verify_hostname
#define HAVE_OPT_STARTTLS gnutls_cliOptions.present.starttls
#define HAVE_OPT_STARTTLS_PROTO gnutls_cliOptions.present.starttls_proto
#define HAVE_OPT_UDP gnutls_cliOptions.present.udp
#define HAVE_OPT_MTU gnutls_cliOptions.present.mtu
#define HAVE_OPT_CRLF gnutls_cliOptions.present.crlf
#define HAVE_OPT_FASTOPEN gnutls_cliOptions.present.fastopen
#define HAVE_OPT_X509FMTDER gnutls_cliOptions.present.x509fmtder
#define HAVE_OPT_PRINT_CERT gnutls_cliOptions.present.print_cert
#define HAVE_OPT_SAVE_CERT gnutls_cliOptions.present.save_cert
#define HAVE_OPT_SAVE_OCSP gnutls_cliOptions.present.save_ocsp
#define HAVE_OPT_SAVE_OCSP_MULTI gnutls_cliOptions.present.save_ocsp_multi
#define HAVE_OPT_SAVE_SERVER_TRACE gnutls_cliOptions.present.save_server_trace
#define HAVE_OPT_SAVE_CLIENT_TRACE gnutls_cliOptions.present.save_client_trace
#define HAVE_OPT_DH_BITS gnutls_cliOptions.present.dh_bits
#define HAVE_OPT_PRIORITY gnutls_cliOptions.present.priority
#define HAVE_OPT_X509CAFILE gnutls_cliOptions.present.x509cafile
#define HAVE_OPT_X509CRLFILE gnutls_cliOptions.present.x509crlfile
#define HAVE_OPT_X509KEYFILE gnutls_cliOptions.present.x509keyfile
#define HAVE_OPT_X509CERTFILE gnutls_cliOptions.present.x509certfile
#define HAVE_OPT_RAWPKKEYFILE gnutls_cliOptions.present.rawpkkeyfile
#define HAVE_OPT_RAWPKFILE gnutls_cliOptions.present.rawpkfile
#define HAVE_OPT_SRPUSERNAME gnutls_cliOptions.present.srpusername
#define HAVE_OPT_SRPPASSWD gnutls_cliOptions.present.srppasswd
#define HAVE_OPT_PSKUSERNAME gnutls_cliOptions.present.pskusername
#define HAVE_OPT_PSKKEY gnutls_cliOptions.present.pskkey
#define HAVE_OPT_PORT gnutls_cliOptions.present.port
#define HAVE_OPT_INSECURE gnutls_cliOptions.present.insecure
#define HAVE_OPT_VERIFY_ALLOW_BROKEN gnutls_cliOptions.present.verify_allow_broken
#define HAVE_OPT_RANGES gnutls_cliOptions.present.ranges
#define HAVE_OPT_BENCHMARK_CIPHERS gnutls_cliOptions.present.benchmark_ciphers
#define HAVE_OPT_BENCHMARK_TLS_KX gnutls_cliOptions.present.benchmark_tls_kx
#define HAVE_OPT_BENCHMARK_TLS_CIPHERS gnutls_cliOptions.present.benchmark_tls_ciphers
#define HAVE_OPT_LIST gnutls_cliOptions.present.list
#define HAVE_OPT_PRIORITY_LIST gnutls_cliOptions.present.priority_list
#define HAVE_OPT_NOTICKET gnutls_cliOptions.present.noticket
#define HAVE_OPT_SRTP_PROFILES gnutls_cliOptions.present.srtp_profiles
#define HAVE_OPT_ALPN gnutls_cliOptions.present.alpn
#define HAVE_OPT_HEARTBEAT gnutls_cliOptions.present.heartbeat
#define HAVE_OPT_RECORDSIZE gnutls_cliOptions.present.recordsize
#define HAVE_OPT_DISABLE_SNI gnutls_cliOptions.present.disable_sni
#define HAVE_OPT_DISABLE_EXTENSIONS gnutls_cliOptions.present.disable_extensions
#define HAVE_OPT_SINGLE_KEY_SHARE gnutls_cliOptions.present.single_key_share
#define HAVE_OPT_POST_HANDSHAKE_AUTH gnutls_cliOptions.present.post_handshake_auth
#define HAVE_OPT_INLINE_COMMANDS gnutls_cliOptions.present.inline_commands
#define HAVE_OPT_INLINE_COMMANDS_PREFIX gnutls_cliOptions.present.inline_commands_prefix
#define HAVE_OPT_PROVIDER gnutls_cliOptions.present.provider
#define HAVE_OPT_FIPS140_MODE gnutls_cliOptions.present.fips140_mode
#define HAVE_OPT_LIST_CONFIG gnutls_cliOptions.present.list_config
#define HAVE_OPT_LOGFILE gnutls_cliOptions.present.logfile
#define HAVE_OPT_KEYMATEXPORT gnutls_cliOptions.present.keymatexport
#define HAVE_OPT_KEYMATEXPORTSIZE gnutls_cliOptions.present.keymatexportsize
#define HAVE_OPT_WAITRESUMPTION gnutls_cliOptions.present.waitresumption
#define HAVE_OPT_CA_AUTO_RETRIEVE gnutls_cliOptions.present.ca_auto_retrieve
#define HAVE_OPT_VERSION gnutls_cliOptions.present.version
#define HAVE_OPT_HELP gnutls_cliOptions.present.help
#define HAVE_OPT_MORE_HELP gnutls_cliOptions.present.more_help

#define OPT_ARG_DEBUG gnutls_cliOptions.arg.debug
#define OPT_ARG_VERBOSE gnutls_cliOptions.arg.verbose
#define OPT_ARG_TOFU gnutls_cliOptions.arg.tofu
#define OPT_ARG_STRICT_TOFU gnutls_cliOptions.arg.strict_tofu
#define OPT_ARG_DANE gnutls_cliOptions.arg.dane
#define OPT_ARG_LOCAL_DNS gnutls_cliOptions.arg.local_dns
#define OPT_ARG_CA_VERIFICATION gnutls_cliOptions.arg.ca_verification
#define OPT_ARG_OCSP gnutls_cliOptions.arg.ocsp
#define OPT_ARG_RESUME gnutls_cliOptions.arg.resume
#define OPT_ARG_EARLYDATA gnutls_cliOptions.arg.earlydata
#define OPT_ARG_REHANDSHAKE gnutls_cliOptions.arg.rehandshake
#define OPT_ARG_SNI_HOSTNAME gnutls_cliOptions.arg.sni_hostname
#define OPT_ARG_VERIFY_HOSTNAME gnutls_cliOptions.arg.verify_hostname
#define OPT_ARG_STARTTLS gnutls_cliOptions.arg.starttls
#define OPT_ARG_STARTTLS_PROTO gnutls_cliOptions.arg.starttls_proto
#define OPT_ARG_UDP gnutls_cliOptions.arg.udp
#define OPT_ARG_MTU gnutls_cliOptions.arg.mtu
#define OPT_ARG_CRLF gnutls_cliOptions.arg.crlf
#define OPT_ARG_FASTOPEN gnutls_cliOptions.arg.fastopen
#define OPT_ARG_X509FMTDER gnutls_cliOptions.arg.x509fmtder
#define OPT_ARG_PRINT_CERT gnutls_cliOptions.arg.print_cert
#define OPT_ARG_SAVE_CERT gnutls_cliOptions.arg.save_cert
#define OPT_ARG_SAVE_OCSP gnutls_cliOptions.arg.save_ocsp
#define OPT_ARG_SAVE_OCSP_MULTI gnutls_cliOptions.arg.save_ocsp_multi
#define OPT_ARG_SAVE_SERVER_TRACE gnutls_cliOptions.arg.save_server_trace
#define OPT_ARG_SAVE_CLIENT_TRACE gnutls_cliOptions.arg.save_client_trace
#define OPT_ARG_DH_BITS gnutls_cliOptions.arg.dh_bits
#define OPT_ARG_PRIORITY gnutls_cliOptions.arg.priority
#define OPT_ARG_X509CAFILE gnutls_cliOptions.arg.x509cafile
#define OPT_ARG_X509CRLFILE gnutls_cliOptions.arg.x509crlfile
#define OPT_ARG_X509KEYFILE gnutls_cliOptions.arg.x509keyfile
#define OPT_ARG_X509CERTFILE gnutls_cliOptions.arg.x509certfile
#define OPT_ARG_RAWPKKEYFILE gnutls_cliOptions.arg.rawpkkeyfile
#define OPT_ARG_RAWPKFILE gnutls_cliOptions.arg.rawpkfile
#define OPT_ARG_SRPUSERNAME gnutls_cliOptions.arg.srpusername
#define OPT_ARG_SRPPASSWD gnutls_cliOptions.arg.srppasswd
#define OPT_ARG_PSKUSERNAME gnutls_cliOptions.arg.pskusername
#define OPT_ARG_PSKKEY gnutls_cliOptions.arg.pskkey
#define OPT_ARG_PORT gnutls_cliOptions.arg.port
#define OPT_ARG_INSECURE gnutls_cliOptions.arg.insecure
#define OPT_ARG_VERIFY_ALLOW_BROKEN gnutls_cliOptions.arg.verify_allow_broken
#define OPT_ARG_RANGES gnutls_cliOptions.arg.ranges
#define OPT_ARG_BENCHMARK_CIPHERS gnutls_cliOptions.arg.benchmark_ciphers
#define OPT_ARG_BENCHMARK_TLS_KX gnutls_cliOptions.arg.benchmark_tls_kx
#define OPT_ARG_BENCHMARK_TLS_CIPHERS gnutls_cliOptions.arg.benchmark_tls_ciphers
#define OPT_ARG_LIST gnutls_cliOptions.arg.list
#define OPT_ARG_PRIORITY_LIST gnutls_cliOptions.arg.priority_list
#define OPT_ARG_NOTICKET gnutls_cliOptions.arg.noticket
#define OPT_ARG_SRTP_PROFILES gnutls_cliOptions.arg.srtp_profiles
#define OPT_ARG_ALPN gnutls_cliOptions.arg.alpn
#define OPT_ARG_HEARTBEAT gnutls_cliOptions.arg.heartbeat
#define OPT_ARG_RECORDSIZE gnutls_cliOptions.arg.recordsize
#define OPT_ARG_DISABLE_SNI gnutls_cliOptions.arg.disable_sni
#define OPT_ARG_DISABLE_EXTENSIONS gnutls_cliOptions.arg.disable_extensions
#define OPT_ARG_SINGLE_KEY_SHARE gnutls_cliOptions.arg.single_key_share
#define OPT_ARG_POST_HANDSHAKE_AUTH gnutls_cliOptions.arg.post_handshake_auth
#define OPT_ARG_INLINE_COMMANDS gnutls_cliOptions.arg.inline_commands
#define OPT_ARG_INLINE_COMMANDS_PREFIX gnutls_cliOptions.arg.inline_commands_prefix
#define OPT_ARG_PROVIDER gnutls_cliOptions.arg.provider
#define OPT_ARG_FIPS140_MODE gnutls_cliOptions.arg.fips140_mode
#define OPT_ARG_LIST_CONFIG gnutls_cliOptions.arg.list_config
#define OPT_ARG_LOGFILE gnutls_cliOptions.arg.logfile
#define OPT_ARG_KEYMATEXPORT gnutls_cliOptions.arg.keymatexport
#define OPT_ARG_KEYMATEXPORTSIZE gnutls_cliOptions.arg.keymatexportsize
#define OPT_ARG_WAITRESUMPTION gnutls_cliOptions.arg.waitresumption
#define OPT_ARG_CA_AUTO_RETRIEVE gnutls_cliOptions.arg.ca_auto_retrieve
#define OPT_ARG_VERSION gnutls_cliOptions.arg.version
#define OPT_ARG_HELP gnutls_cliOptions.arg.help
#define OPT_ARG_MORE_HELP gnutls_cliOptions.arg.more_help

#define OPT_VALUE_DEBUG gnutls_cliOptions.value.debug
#define OPT_VALUE_MTU gnutls_cliOptions.value.mtu
#define OPT_VALUE_DH_BITS gnutls_cliOptions.value.dh_bits
#define OPT_VALUE_RECORDSIZE gnutls_cliOptions.value.recordsize
#define OPT_VALUE_KEYMATEXPORTSIZE gnutls_cliOptions.value.keymatexportsize

#define ENABLED_OPT_VERBOSE gnutls_cliOptions.enabled.verbose
#define ENABLED_OPT_TOFU gnutls_cliOptions.enabled.tofu
#define ENABLED_OPT_STRICT_TOFU gnutls_cliOptions.enabled.strict_tofu
#define ENABLED_OPT_DANE gnutls_cliOptions.enabled.dane
#define ENABLED_OPT_LOCAL_DNS gnutls_cliOptions.enabled.local_dns
#define ENABLED_OPT_CA_VERIFICATION gnutls_cliOptions.enabled.ca_verification
#define ENABLED_OPT_OCSP gnutls_cliOptions.enabled.ocsp
#define ENABLED_OPT_CA_AUTO_RETRIEVE gnutls_cliOptions.enabled.ca_auto_retrieve

#define STACKCT_OPT_ALPN gnutls_cliOptions.list.alpn.count

#define STACKLST_OPT_ALPN gnutls_cliOptions.list.alpn.args


extern struct gnutls_cli_opts gnutls_cliOptions;
int optionProcess(struct gnutls_cli_opts *opts, int argc, char **argv);
void usage (FILE *out, int status);

#endif /* GNUTLS_CLI_OPTIONS_H_ */
