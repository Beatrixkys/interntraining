/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/filters/network/http_connection_manager/v3/http_connection_manager.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/extensions/filters/network/http_connection_manager/v3/http_connection_manager.upb.h"
#include "envoy/config/accesslog/v3/accesslog.upb.h"
#include "envoy/config/core/v3/base.upb.h"
#include "envoy/config/core/v3/config_source.upb.h"
#include "envoy/config/core/v3/extension.upb.h"
#include "envoy/config/core/v3/protocol.upb.h"
#include "envoy/config/core/v3/substitution_format_string.upb.h"
#include "envoy/config/route/v3/route.upb.h"
#include "envoy/config/route/v3/scoped_route.upb.h"
#include "envoy/config/trace/v3/http_tracer.upb.h"
#include "envoy/type/http/v3/path_transformation.upb.h"
#include "envoy/type/tracing/v3/custom_tag.upb.h"
#include "envoy/type/v3/percent.upb.h"
#include "google/protobuf/any.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "udpa/annotations/migrate.upb.h"
#include "udpa/annotations/security.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_submsgs[21] = {
  {.submsg = &envoy_config_accesslog_v3_AccessLog_msginit},
  {.submsg = &envoy_config_core_v3_Http1ProtocolOptions_msginit},
  {.submsg = &envoy_config_core_v3_Http2ProtocolOptions_msginit},
  {.submsg = &envoy_config_core_v3_Http3ProtocolOptions_msginit},
  {.submsg = &envoy_config_core_v3_HttpProtocolOptions_msginit},
  {.submsg = &envoy_config_core_v3_SchemeHeaderTransformation_msginit},
  {.submsg = &envoy_config_core_v3_TypedExtensionConfig_msginit},
  {.submsg = &envoy_config_route_v3_RouteConfiguration_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_InternalAddressConfig_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_PathNormalizationOptions_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_SetCurrentClientCertDetails_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_Tracing_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_UpgradeConfig_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpFilter_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_LocalReplyConfig_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_Rds_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_RequestIDExtension_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_msginit},
  {.submsg = &google_protobuf_BoolValue_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager__fields[46] = {
  {1, UPB_SIZE(4, 4), 0, 0, 14, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(32, 32), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(160, 288), UPB_SIZE(-165, -297), 15, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(160, 288), UPB_SIZE(-165, -297), 7, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(144, 256), 0, 13, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {6, UPB_SIZE(56, 80), 1, 18, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {7, UPB_SIZE(60, 88), 2, 11, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {8, UPB_SIZE(64, 96), 3, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {9, UPB_SIZE(68, 104), 4, 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {10, UPB_SIZE(40, 48), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {12, UPB_SIZE(72, 112), 5, 19, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {13, UPB_SIZE(148, 264), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {14, UPB_SIZE(76, 120), 6, 18, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {15, UPB_SIZE(80, 128), 7, 18, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {16, UPB_SIZE(8, 8), 0, 0, 14, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
  {17, UPB_SIZE(84, 136), 8, 10, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {18, UPB_SIZE(24, 24), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {19, UPB_SIZE(20, 20), 0, 0, 13, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
  {20, UPB_SIZE(25, 25), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {21, UPB_SIZE(26, 26), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {22, UPB_SIZE(48, 64), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {23, UPB_SIZE(152, 272), 0, 12, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {24, UPB_SIZE(88, 144), 9, 19, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {25, UPB_SIZE(92, 152), 10, 8, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {26, UPB_SIZE(96, 160), 11, 19, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {28, UPB_SIZE(100, 168), 12, 19, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {29, UPB_SIZE(104, 176), 13, 20, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {30, UPB_SIZE(108, 184), 14, 18, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {31, UPB_SIZE(160, 288), UPB_SIZE(-165, -297), 17, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {32, UPB_SIZE(27, 27), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {33, UPB_SIZE(28, 28), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {34, UPB_SIZE(12, 12), 0, 0, 14, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
  {35, UPB_SIZE(112, 192), 15, 4, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {36, UPB_SIZE(116, 200), 16, 16, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {37, UPB_SIZE(29, 29), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {38, UPB_SIZE(120, 208), 17, 14, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {39, UPB_SIZE(30, 30), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {40, UPB_SIZE(124, 216), 18, 18, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {41, UPB_SIZE(128, 224), 19, 19, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {42, UPB_SIZE(168, 300), UPB_SIZE(-173, -305), 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {43, UPB_SIZE(132, 232), 20, 9, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {44, UPB_SIZE(136, 240), 21, 3, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {45, UPB_SIZE(16, 16), 0, 0, 14, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
  {46, UPB_SIZE(156, 280), 0, 6, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {47, UPB_SIZE(31, 31), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {48, UPB_SIZE(140, 248), 22, 5, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager__fields[0],
  UPB_SIZE(176, 320), 46, _UPB_MSGEXT_NONE, 10, 255,
};

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_Tracing_submsgs[4] = {
  {.submsg = &envoy_config_trace_v3_Tracing_Http_msginit},
  {.submsg = &envoy_type_tracing_v3_CustomTag_msginit},
  {.submsg = &envoy_type_v3_Percent_msginit},
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_Tracing__fields[7] = {
  {3, UPB_SIZE(4, 8), 1, 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(8, 16), 2, 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(12, 24), 3, 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {6, UPB_SIZE(1, 1), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {7, UPB_SIZE(16, 32), 4, 3, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {8, UPB_SIZE(24, 48), 0, 1, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {9, UPB_SIZE(20, 40), 5, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_Tracing_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_Tracing_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_Tracing__fields[0],
  UPB_SIZE(32, 56), 7, _UPB_MSGEXT_NONE, 0, 255,
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_InternalAddressConfig__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_InternalAddressConfig_msginit = {
  NULL,
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_InternalAddressConfig__fields[0],
  UPB_SIZE(8, 8), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_SetCurrentClientCertDetails_submsgs[1] = {
  {.submsg = &google_protobuf_BoolValue_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_SetCurrentClientCertDetails__fields[5] = {
  {1, UPB_SIZE(8, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(1, 1), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(2, 2), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(3, 3), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {6, UPB_SIZE(4, 4), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_SetCurrentClientCertDetails_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_SetCurrentClientCertDetails_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_SetCurrentClientCertDetails__fields[0],
  UPB_SIZE(16, 16), 5, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_UpgradeConfig_submsgs[2] = {
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpFilter_msginit},
  {.submsg = &google_protobuf_BoolValue_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_UpgradeConfig__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(16, 32), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(12, 24), 1, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_UpgradeConfig_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_UpgradeConfig_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_UpgradeConfig__fields[0],
  UPB_SIZE(24, 48), 3, _UPB_MSGEXT_NONE, 3, 255,
};

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_PathNormalizationOptions_submsgs[1] = {
  {.submsg = &envoy_type_http_v3_PathTransformation_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_PathNormalizationOptions__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 2, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_PathNormalizationOptions_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_PathNormalizationOptions_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_PathNormalizationOptions__fields[0],
  UPB_SIZE(16, 24), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_LocalReplyConfig_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_SubstitutionFormatString_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_ResponseMapper_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_LocalReplyConfig__fields[2] = {
  {1, UPB_SIZE(8, 16), 0, 1, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_LocalReplyConfig_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_LocalReplyConfig_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_LocalReplyConfig__fields[0],
  UPB_SIZE(16, 24), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_ResponseMapper_submsgs[5] = {
  {.submsg = &envoy_config_accesslog_v3_AccessLogFilter_msginit},
  {.submsg = &envoy_config_core_v3_DataSource_msginit},
  {.submsg = &envoy_config_core_v3_HeaderValueOption_msginit},
  {.submsg = &envoy_config_core_v3_SubstitutionFormatString_msginit},
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_ResponseMapper__fields[5] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 2, 4, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(12, 24), 3, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(16, 32), 4, 3, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(20, 40), 0, 2, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_ResponseMapper_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_ResponseMapper_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_ResponseMapper__fields[0],
  UPB_SIZE(24, 48), 5, _UPB_MSGEXT_NONE, 5, 255,
};

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_Rds_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_ConfigSource_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_Rds__fields[2] = {
  {1, UPB_SIZE(12, 24), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_Rds_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_Rds_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_Rds__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_ScopedRouteConfigurationsList_submsgs[1] = {
  {.submsg = &envoy_config_route_v3_ScopedRouteConfiguration_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_ScopedRouteConfigurationsList__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_ScopedRouteConfigurationsList_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRouteConfigurationsList_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRouteConfigurationsList__fields[0],
  UPB_SIZE(8, 8), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_submsgs[4] = {
  {.submsg = &envoy_config_core_v3_ConfigSource_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRds_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRouteConfigurationsList_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes__fields[5] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(12, 24), 1, 3, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(16, 32), 2, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(20, 40), UPB_SIZE(-25, -49), 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(20, 40), UPB_SIZE(-25, -49), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes__fields[0],
  UPB_SIZE(32, 64), 5, _UPB_MSGEXT_NONE, 5, 255,
};

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_submsgs[1] = {
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder__fields[0],
  UPB_SIZE(8, 8), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_submsgs[1] = {
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder__fields[0],
  UPB_SIZE(8, 16), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_submsgs[1] = {
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_KvElement_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor__fields[4] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(16, 32), UPB_SIZE(-21, -41), 0, 13, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(16, 32), UPB_SIZE(-21, -41), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor__fields[0],
  UPB_SIZE(24, 48), 4, _UPB_MSGEXT_NONE, 4, 255,
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_KvElement__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_KvElement_msginit = {
  NULL,
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_KvElement__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_ScopedRds_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_ConfigSource_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_ScopedRds__fields[2] = {
  {1, UPB_SIZE(12, 24), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_ScopedRds_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRds_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRds__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_HttpFilter_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_ExtensionConfigSource_msginit},
  {.submsg = &google_protobuf_Any_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_HttpFilter__fields[4] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(12, 24), UPB_SIZE(-17, -33), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(12, 24), UPB_SIZE(-17, -33), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {6, UPB_SIZE(0, 0), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_HttpFilter_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpFilter_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpFilter__fields[0],
  UPB_SIZE(24, 48), 4, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_RequestIDExtension_submsgs[1] = {
  {.submsg = &google_protobuf_Any_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_RequestIDExtension__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_RequestIDExtension_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_RequestIDExtension_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_RequestIDExtension__fields[0],
  UPB_SIZE(8, 16), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_extensions_filters_network_http_connection_manager_v3_EnvoyMobileHttpConnectionManager_submsgs[1] = {
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_msginit},
};

static const upb_msglayout_field envoy_extensions_filters_network_http_connection_manager_v3_EnvoyMobileHttpConnectionManager__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_extensions_filters_network_http_connection_manager_v3_EnvoyMobileHttpConnectionManager_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_EnvoyMobileHttpConnectionManager_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_EnvoyMobileHttpConnectionManager__fields[0],
  UPB_SIZE(8, 16), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout *messages_layout[19] = {
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_Tracing_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_InternalAddressConfig_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_SetCurrentClientCertDetails_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_UpgradeConfig_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_PathNormalizationOptions_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_LocalReplyConfig_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_ResponseMapper_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_Rds_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRouteConfigurationsList_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_KvElement_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRds_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpFilter_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_RequestIDExtension_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_EnvoyMobileHttpConnectionManager_msginit,
};

const upb_msglayout_file envoy_extensions_filters_network_http_connection_manager_v3_http_connection_manager_proto_upb_file_layout = {
  messages_layout,
  NULL,
  19,
  0,
};

#include "upb/port_undef.inc"

