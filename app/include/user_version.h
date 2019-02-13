#ifndef __USER_VERSION_H__
#define __USER_VERSION_H__

#include "version.h"	/* ESP firmware header */

#define NODE_VERSION_MAJOR	ESP_SDK_VERSION_MAJOR
#define NODE_VERSION_MINOR	ESP_SDK_VERSION_MINOR
#define NODE_VERSION_REVISION	ESP_SDK_VERSION_PATCH
#define NODE_VERSION_INTERNAL   0

#define NODE_VERSION_STR(x)	#x
#define NODE_VERSION_XSTR(x)	NODE_VERSION_STR(x)

#define NODE_VERSION		"NodeMCU " ESP_SDK_VERSION_STRING "." NODE_VERSION_XSTR(NODE_VERSION_INTERNAL) " built with Docker provided by frightanic.com\n\tbranch: master\n\tcommit: 6ea7b0daf71752d3d7c45b9f48f3b067a3ce6e63\n\tSSL: true\n\tBuild type: integer\n\tLFS: Size: 0x20000\n\tmodules: adc,bit,crypto,encoder,file,gpio,http,i2c,mqtt,net,node,pwm,rtctime,sjson,sntp,tls,tmr,uart,wifi\n"

#ifndef BUILD_DATE
#define BUILD_DATE		"created on 2019-02-13 03:56\n"
#endif

extern char SDK_VERSION[];

#endif	/* __USER_VERSION_H__ */
