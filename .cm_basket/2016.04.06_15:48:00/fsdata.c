#include "fs.h"
#include "lwip/def.h"
#include "fsdata.h"


#define file_NULL (struct fsdata_file *) NULL


static const unsigned int dummy_align__404_html = 0;
static const unsigned char data__404_html[] = {
/* /404.html (10 chars) */
0x2f,0x34,0x30,0x34,0x2e,0x68,0x74,0x6d,0x6c,0x00,0x00,0x00,

/* HTTP header */
/* "HTTP/1.0 404 File not found
" (29 bytes) */
0x48,0x54,0x54,0x50,0x2f,0x31,0x2e,0x30,0x20,0x34,0x30,0x34,0x20,0x46,0x69,0x6c,
0x65,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0x0d,0x0a,
/* "Server: lwIP/1.3.1 (http://savannah.nongnu.org/projects/lwip)
" (63 bytes) */
0x53,0x65,0x72,0x76,0x65,0x72,0x3a,0x20,0x6c,0x77,0x49,0x50,0x2f,0x31,0x2e,0x33,
0x2e,0x31,0x20,0x28,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x73,0x61,0x76,0x61,0x6e,
0x6e,0x61,0x68,0x2e,0x6e,0x6f,0x6e,0x67,0x6e,0x75,0x2e,0x6f,0x72,0x67,0x2f,0x70,
0x72,0x6f,0x6a,0x65,0x63,0x74,0x73,0x2f,0x6c,0x77,0x69,0x70,0x29,0x0d,0x0a,
/* "Content-type: text/html

" (27 bytes) */
0x43,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x2d,0x74,0x79,0x70,0x65,0x3a,0x20,0x74,0x65,
0x78,0x74,0x2f,0x68,0x74,0x6d,0x6c,0x0d,0x0a,0x0d,0x0a,
/* raw file data (544 bytes) */
0x3c,0x21,0x44,0x4f,0x43,0x54,0x59,0x50,0x45,0x20,0x68,0x74,0x6d,0x6c,0x3e,0x0d,
0x0a,0x3c,0x68,0x74,0x6d,0x6c,0x3e,0x0d,0x0a,0x3c,0x68,0x65,0x61,0x64,0x3e,0x0d,
0x0a,0x3c,0x74,0x69,0x74,0x6c,0x65,0x3e,0x45,0x72,0x72,0x6f,0x65,0x20,0x34,0x30,
0x34,0x3c,0x2f,0x74,0x69,0x74,0x6c,0x65,0x3e,0x3c,0x2f,0x68,0x65,0x61,0x64,0x3e,
0x0d,0x0a,0x3c,0x62,0x6f,0x64,0x79,0x20,0x74,0x65,0x78,0x74,0x3d,0x22,0x23,0x30,
0x30,0x30,0x30,0x30,0x30,0x22,0x20,0x62,0x67,0x63,0x6f,0x6c,0x6f,0x72,0x3d,0x22,
0x23,0x66,0x66,0x66,0x66,0x66,0x66,0x22,0x3e,0x3c,0x63,0x65,0x6e,0x74,0x65,0x72,
0x3e,0x0d,0x0a,0x3c,0x66,0x6f,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0x3d,0x22,0x2b,
0x33,0x22,0x63,0x6f,0x6c,0x6f,0x72,0x3d,0x22,0x23,0x33,0x33,0x33,0x33,0x46,0x46,
0x22,0x3e,0x3c,0x62,0x3e,0x3c,0x69,0x3e,0x53,0x54,0x4d,0x33,0x32,0x46,0x34,0x78,
0x37,0x20,0x57,0x65,0x62,0x73,0x65,0x72,0x76,0x65,0x72,0x20,0x44,0x65,0x6d,0x6f,
0x3c,0x2f,0x69,0x3e,0x3c,0x2f,0x62,0x3e,0x3c,0x2f,0x66,0x6f,0x6e,0x74,0x3e,0x3c,
0x62,0x72,0x3e,0x0d,0x0a,0x3c,0x68,0x72,0x20,0x6e,0x6f,0x73,0x68,0x61,0x64,0x65,
0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x31,0x30,0x30,0x25,0x22,0x20,0x61,0x6c,
0x69,0x67,0x6e,0x3d,0x22,0x6c,0x65,0x66,0x74,0x22,0x3e,0x0d,0x0a,0x3c,0x68,0x31,
0x3e,0x45,0x72,0x72,0x6f,0x72,0x20,0x34,0x30,0x34,0x20,0x50,0x61,0x67,0x65,0x20,
0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0x3c,0x2f,0x68,0x31,0x3e,0x0d,0x0a,
0x3c,0x68,0x32,0x3e,0x53,0x6f,0x72,0x72,0x79,0x2c,0x74,0x68,0x65,0x20,0x70,0x61,
0x67,0x65,0x20,0x79,0x6f,0x75,0x20,0x61,0x72,0x65,0x20,0x72,0x65,0x71,0x75,0x65,
0x73,0x74,0x69,0x6e,0x67,0x20,0x77,0x61,0x73,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,
0x75,0x6e,0x64,0x20,0x6f,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x73,0x65,0x72,0x76,
0x65,0x72,0x3c,0x2f,0x68,0x32,0x3e,0x0d,0x0a,0x3c,0x68,0x72,0x20,0x6e,0x6f,0x73,
0x68,0x61,0x64,0x65,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x31,0x30,0x30,0x25,
0x22,0x20,0x61,0x6c,0x69,0x67,0x6e,0x3d,0x22,0x6c,0x65,0x66,0x74,0x22,0x3e,0x0d,
0x0a,0x3c,0x68,0x33,0x3e,0xca,0x20,0xf1,0xee,0xe6,0xe0,0xeb,0xe5,0xed,0xe8,0xfe,
0x2c,0x20,0xe7,0xe0,0xef,0xf0,0xe0,0xf8,0xe8,0xe2,0xe0,0xe5,0xec,0xe0,0xff,0x20,
0xc2,0xe0,0xec,0xe8,0x20,0xf1,0xf2,0xf0,0xe0,0xed,0xe8,0xf6,0xe0,0x20,0xed,0xe5,
0x20,0xed,0xe0,0xe9,0xe4,0xe5,0xed,0xe0,0x2e,0x2e,0x3c,0x2f,0x68,0x33,0x3e,0x0d,
0x0a,0x3c,0x68,0x33,0x3e,0xc4,0xeb,0xff,0x20,0xef,0xf0,0xee,0xe4,0xee,0xeb,0xe6,
0xe5,0xed,0xe8,0xff,0x20,0xf0,0xe0,0xe1,0xee,0xf2,0xfb,0x20,0xef,0xe5,0xf0,0xe5,
0xe9,0xe4,0xe8,0xf2,0xe5,0x20,0xed,0xe0,0x20,0xe3,0xeb,0xe0,0xe2,0xed,0xf3,0xfe,
0x20,0xf1,0xf2,0xf0,0xe0,0xed,0xe8,0xf6,0xf3,0x20,0xf1,0xe5,0xf0,0xe2,0xe5,0xf0,
0xe0,0x3c,0x2f,0x68,0x33,0x3e,0x0d,0x0a,0x3c,0x2f,0x74,0x62,0x6f,0x64,0x79,0x3e,
0x0d,0x0a,0x3c,0x2f,0x62,0x6f,0x64,0x79,0x3e,0x3c,0x2f,0x68,0x74,0x6d,0x6c,0x3e,
};

static const unsigned int dummy_align__index_html = 1;
static const unsigned char data__index_html[] = {
/* /index.html (12 chars) */
0x2f,0x69,0x6e,0x64,0x65,0x78,0x2e,0x68,0x74,0x6d,0x6c,0x00,

/* HTTP header */
/* "HTTP/1.0 200 OK
" (17 bytes) */
0x48,0x54,0x54,0x50,0x2f,0x31,0x2e,0x30,0x20,0x32,0x30,0x30,0x20,0x4f,0x4b,0x0d,
0x0a,
/* "Server: lwIP/1.3.1 (http://savannah.nongnu.org/projects/lwip)
" (63 bytes) */
0x53,0x65,0x72,0x76,0x65,0x72,0x3a,0x20,0x6c,0x77,0x49,0x50,0x2f,0x31,0x2e,0x33,
0x2e,0x31,0x20,0x28,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x73,0x61,0x76,0x61,0x6e,
0x6e,0x61,0x68,0x2e,0x6e,0x6f,0x6e,0x67,0x6e,0x75,0x2e,0x6f,0x72,0x67,0x2f,0x70,
0x72,0x6f,0x6a,0x65,0x63,0x74,0x73,0x2f,0x6c,0x77,0x69,0x70,0x29,0x0d,0x0a,
/* "Content-type: text/html

" (27 bytes) */
0x43,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x2d,0x74,0x79,0x70,0x65,0x3a,0x20,0x74,0x65,
0x78,0x74,0x2f,0x68,0x74,0x6d,0x6c,0x0d,0x0a,0x0d,0x0a,
/* raw file data (2013 bytes) */
0x3c,0x21,0x44,0x4f,0x43,0x54,0x59,0x50,0x45,0x20,0x68,0x74,0x6d,0x6c,0x3e,0x0d,
0x0a,0x3c,0x68,0x74,0x6d,0x6c,0x3e,0x0d,0x0a,0x3c,0x68,0x65,0x61,0x64,0x3e,0x0d,
0x0a,0x3c,0x74,0x69,0x74,0x6c,0x65,0x3e,0x53,0x54,0x4d,0x33,0x32,0x46,0x34,0x78,
0x37,0x20,0x45,0x74,0x68,0x65,0x72,0x6e,0x65,0x74,0x3c,0x2f,0x74,0x69,0x74,0x6c,
0x65,0x3e,0x0d,0x0a,0x3c,0x2f,0x68,0x65,0x61,0x64,0x3e,0x0d,0x0a,0x3c,0x62,0x6f,
0x64,0x79,0x20,0x74,0x65,0x78,0x74,0x3d,0x22,0x23,0x30,0x30,0x30,0x30,0x30,0x30,
0x22,0x20,0x62,0x67,0x63,0x6f,0x6c,0x6f,0x72,0x3d,0x22,0x23,0x66,0x66,0x66,0x66,
0x66,0x66,0x22,0x3e,0x3c,0x63,0x65,0x6e,0x74,0x65,0x72,0x3e,0x0d,0x0a,0x3c,0x66,
0x6f,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0x3d,0x22,0x2b,0x33,0x22,0x63,0x6f,0x6c,
0x6f,0x72,0x3d,0x22,0x23,0x33,0x33,0x33,0x33,0x46,0x46,0x22,0x3e,0x3c,0x62,0x3e,
0x3c,0x69,0x3e,0x20,0x57,0x65,0x62,0x73,0x65,0x72,0x76,0x65,0x72,0x20,0x44,0x65,
0x6d,0x6f,0x20,0xed,0xe0,0x20,0xe1,0xe0,0xe7,0xe5,0x20,0x6c,0x77,0x49,0x50,0x20,
0x54,0x43,0x50,0x2f,0x49,0x50,0x20,0xf1,0xf2,0xe5,0xea,0xe0,0x3c,0x2f,0x69,0x3e,
0x3c,0x2f,0x62,0x3e,0x3c,0x2f,0x66,0x6f,0x6e,0x74,0x3e,0x3c,0x62,0x72,0x3e,0x0d,
0x0a,0x3c,0x68,0x72,0x20,0x6e,0x6f,0x73,0x68,0x61,0x64,0x65,0x20,0x77,0x69,0x64,
0x74,0x68,0x3d,0x22,0x31,0x30,0x30,0x25,0x22,0x20,0x61,0x6c,0x69,0x67,0x6e,0x3d,
0x22,0x6c,0x65,0x66,0x74,0x22,0x3e,0x0d,0x0a,0x3c,0x62,0x6f,0x64,0x79,0x20,0x74,
0x65,0x78,0x74,0x3d,0x22,0x23,0x33,0x33,0x33,0x33,0x46,0x46,0x22,0x20,0x62,0x67,
0x63,0x6f,0x6c,0x6f,0x72,0x3d,0x22,0x23,0x30,0x30,0x30,0x30,0x30,0x30,0x22,0x20,
0x6c,0x69,0x6e,0x6b,0x3d,0x22,0x23,0x33,0x33,0x33,0x33,0x46,0x46,0x22,0x20,0x61,
0x6c,0x69,0x6e,0x6b,0x3d,0x22,0x23,0x33,0x33,0x33,0x33,0x46,0x46,0x22,0x20,0x76,
0x6c,0x69,0x6e,0x6b,0x3d,0x22,0x23,0x33,0x33,0x33,0x33,0x46,0x46,0x22,0x3e,0x0d,
0x0a,0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x20,0x3d,0x20,0x22,0x69,0x6e,0x64,0x65,
0x78,0x2e,0x68,0x74,0x6d,0x6c,0x22,0x20,0x74,0x69,0x74,0x6c,0x65,0x20,0x3d,0x20,
0x22,0xd1,0xf1,0xfb,0xeb,0xea,0xe0,0x22,0x3e,0x3c,0x65,0x6d,0x3e,0xd2,0xe5,0xea,
0xf3,0xf9,0xe0,0xff,0x20,0xf1,0xf2,0xf0,0xe0,0xed,0xe8,0xf6,0xe0,0x3c,0x2f,0x65,
0x6d,0x3e,0x3c,0x2f,0x61,0x3e,0x26,0x6e,0x62,0x73,0x70,0x3b,0x26,0x6e,0x62,0x73,
0x70,0x3b,0x26,0x6e,0x62,0x73,0x70,0x3b,0x0d,0x0a,0x3c,0x61,0x20,0x68,0x72,0x65,
0x66,0x20,0x3d,0x20,0x22,0x53,0x54,0x4d,0x33,0x32,0x46,0x34,0x78,0x37,0x54,0x78,
0x2e,0x68,0x74,0x6d,0x6c,0x22,0x20,0x74,0x69,0x74,0x6c,0x65,0x20,0x3d,0x20,0x22,
0xd1,0xf1,0xfb,0xeb,0xea,0xe0,0x22,0x3e,0x3c,0x65,0x6d,0x3e,0xcf,0xe5,0xf0,0xe5,
0xe4,0xe0,0xf7,0xe0,0x20,0xe4,0xe0,0xed,0xed,0xfb,0xf5,0x3c,0x2f,0x65,0x6d,0x3e,
0x3c,0x2f,0x61,0x3e,0x26,0x6e,0x62,0x73,0x70,0x3b,0x26,0x6e,0x62,0x73,0x70,0x3b,
0x26,0x6e,0x62,0x73,0x70,0x3b,0x0d,0x0a,0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x20,
0x3d,0x20,0x22,0x53,0x54,0x4d,0x33,0x32,0x46,0x34,0x78,0x37,0x52,0x78,0x2e,0x73,
0x68,0x74,0x6d,0x6c,0x22,0x20,0x74,0x69,0x74,0x6c,0x65,0x20,0x3d,0x20,0x22,0xd1,
0xf1,0xfb,0xeb,0xea,0xe0,0x22,0x3e,0x3c,0x65,0x6d,0x3e,0xcf,0xf0,0xe8,0xe5,0xec,
0x20,0xe4,0xe0,0xed,0xed,0xfb,0xf5,0x3c,0x2f,0x65,0x6d,0x3e,0x3c,0x2f,0x61,0x3e,
0x3c,0x42,0x52,0x3e,0x0d,0x0a,0x3c,0x70,0x20,0x61,0x6c,0x69,0x67,0x6e,0x3d,0x22,
0x6a,0x75,0x73,0x74,0x69,0x66,0x79,0x22,0x3e,0x0d,0x0a,0x26,0x6e,0x62,0x73,0x70,
0x3b,0x26,0x6e,0x62,0x73,0x70,0x3b,0x26,0x6e,0x62,0x73,0x70,0x3b,0x26,0x6e,0x62,
0x73,0x70,0x3b,0x26,0x6e,0x62,0x73,0x70,0x3b,0xdd,0xf2,0xee,0xf2,0x20,0xe2,0xe5,
0xe1,0x2d,0xf1,0xe5,0xf0,0xe2,0xe5,0xf0,0x20,0xef,0xf0,0xe5,0xe4,0xed,0xe0,0xe7,
0xed,0xe0,0xf7,0xe5,0xed,0x20,0xe4,0xeb,0xff,0x20,0xe4,0xe5,0xec,0xee,0xed,0xf1,
0xf2,0xf0,0xe0,0xf6,0xe8,0xe8,0x20,0xef,0xf0,0xe8,0xec,0xe5,0xf0,0xe0,0x20,0xee,
0xe1,0xec,0xe5,0xed,0xe0,0x20,0xe4,0xe0,0xed,0xed,0xfb,0xec,0xe8,0x20,0xef,0xeb,
0xe0,0xf2,0xfb,0x20,0x53,0x54,0x4d,0x33,0x32,0x46,0x34,0x2d,0x44,0x49,0x53,0x43,
0x4f,0x56,0x45,0x52,0x59,0x20,0xf1,0x20,0xea,0xee,0xec,0xef,0xfc,0xfe,0xf2,0xe5,
0xf0,0xee,0xec,0x20,0xed,0xe0,0x20,0xe1,0xe0,0xe7,0xe5,0x20,0xf1,0xf2,0xe5,0xea,
0xe0,0x0d,0x0a,0x6c,0x77,0x49,0x50,0x20,0x54,0x43,0x50,0x2f,0x49,0x50,0x2e,0x20,
0xc2,0x20,0xea,0xe0,0xf7,0xe5,0xf1,0xf2,0xe2,0xe5,0x20,0xea,0xee,0xed,0xf2,0xf0,
0xee,0xeb,0xeb,0xe5,0xf0,0xe0,0x20,0xf4,0xe8,0xe7,0xe8,0xf7,0xe5,0xf1,0xea,0xee,
0xe3,0xee,0x20,0xf3,0xf0,0xee,0xe2,0xed,0xff,0x20,0xf1,0xe5,0xf2,0xe8,0x20,0xe8,
0xf1,0xef,0xee,0xeb,0xfc,0xe7,0xee,0xe2,0xe0,0xed,0xe0,0x20,0xef,0xeb,0xe0,0xf2,
0xe0,0x20,0x44,0x50,0x38,0x33,0x38,0x34,0x38,0x20,0x28,0x50,0x48,0x59,0x29,0x2e,
0x3c,0x42,0x52,0x3e,0x26,0x6e,0x62,0x73,0x70,0x3b,0x26,0x6e,0x62,0x73,0x70,0x3b,
0x26,0x6e,0x62,0x73,0x70,0x3b,0x26,0x6e,0x62,0x73,0x70,0x3b,0x26,0x6e,0x62,0x73,
0x70,0x3b,0xcf,0xee,0xef,0xf3,0xeb,0xff,0xf0,0xed,0xee,0xf1,0xf2,0xfc,0x20,0xe8,
0xed,0xf2,0xe5,0xf0,0xf4,0xe5,0xe9,0xf1,0xe0,0x20,0x45,0x74,0x68,0x65,0x72,0x6e,
0x65,0x74,0x20,0x0d,0x0a,0xf1,0xe2,0xff,0xe7,0xe0,0xed,0xe0,0x2c,0x20,0xef,0xf0,
0xe5,0xe6,0xe4,0xe5,0x20,0xe2,0xf1,0xe5,0xe3,0xee,0x2c,0x20,0xf1,0x20,0xe2,0xee,
0xe7,0xec,0xee,0xe6,0xed,0xee,0xf1,0xf2,0xfc,0xfe,0x20,0xef,0xe5,0xf0,0xe5,0xe4,
0xe0,0xe2,0xe0,0xf2,0xfc,0x20,0xe4,0xe0,0xed,0xed,0xfb,0xe5,0x20,0xed,0xe0,0x20,
0xe1,0xee,0xeb,0xfc,0xf8,0xe8,0xe5,0x20,0xf0,0xe0,0xf1,0xf1,0xf2,0xee,0xff,0xed,
0xe8,0xff,0x20,0xef,0xf0,0xe8,0x20,0xe2,0xfb,0xf1,0xee,0xea,0xee,0xe9,0x20,0xef,
0xee,0xec,0xe5,0xf5,0xee,0xf3,0xf1,0xf2,0xee,0xe9,0xf7,0xe8,0xe2,0xee,0xf1,0xf2,
0xe8,0x2c,0x20,0xf7,0xf2,0xee,0x0d,0x0a,0xef,0xee,0xe4,0xf2,0xee,0xeb,0xea,0xed,
0xf3,0xeb,0xee,0x20,0xf0,0xe0,0xe7,0xf0,0xe0,0xe1,0xee,0xf2,0xf7,0xe8,0xea,0xee,
0xe2,0x20,0xee,0xe1,0xee,0xf0,0xf3,0xe4,0xee,0xe2,0xe0,0xed,0xe8,0xff,0x20,0xea,
0x20,0xef,0xf0,0xee,0xe8,0xe7,0xe2,0xee,0xe4,0xf1,0xf2,0xe2,0xf3,0x20,0xe1,0xee,
0xeb,0xfc,0xf8,0xee,0xe3,0xee,0x20,0xea,0xee,0xeb,0xe8,0xf7,0xe5,0xf1,0xf2,0xe2,
0xe0,0x20,0xf0,0xe0,0xe7,0xeb,0xe8,0xf7,0xed,0xfb,0xf5,0x20,0xf2,0xe5,0xf5,0xed,
0xe8,0xf7,0xe5,0xf1,0xea,0xe8,0xf5,0x20,0xe8,0x20,0xef,0xf0,0xee,0xe3,0xf0,0xe0,
0xec,0xec,0xed,0xfb,0xf5,0x20,0xf1,0xf0,0xe5,0xe4,0xf1,0xf2,0xe2,0x20,0xe4,0xeb,
0xff,0x20,0xf0,0xe0,0xf1,0xf8,0xe8,0xf0,0xe5,0xed,0xe8,0xff,0x20,0xe2,0xee,0xe7,
0xec,0xee,0xe6,0xed,0xee,0xf1,0xf2,0xe5,0xe9,0x0d,0x0a,0x45,0x74,0x68,0x65,0x72,
0x6e,0x65,0x74,0x2e,0x20,0xc5,0xf1,0xeb,0xe8,0x20,0xea,0xe0,0xea,0xee,0xe5,0x2d,
0xeb,0xe8,0xe1,0xee,0x20,0xf3,0xf1,0xf2,0xf0,0xee,0xe9,0xf1,0xf2,0xe2,0xee,0x20,
0xec,0xee,0xe6,0xe5,0xf2,0x20,0xee,0xe1,0xec,0xe5,0xed,0xe8,0xe2,0xe0,0xf2,0xfc,
0xf1,0xff,0x20,0xe4,0xe0,0xed,0xed,0xfb,0xec,0xe8,0x20,0xef,0xee,0x20,0x45,0x74,
0x68,0x65,0x72,0x6e,0x65,0x74,0x2c,0x20,0xf2,0xee,0x2c,0x20,0xf1,0xeb,0xe5,0xe4,
0xee,0xe2,0xe0,0xf2,0xe5,0xeb,0xfc,0xed,0xee,0x2c,0x20,0xec,0xee,0xe6,0xed,0xee,
0x20,0xf0,0xe5,0xe0,0xeb,0xe8,0xe7,0xee,0xe2,0xe0,0xf2,0xfc,0x20,0xf3,0xe4,0xe0,
0xeb,0xe5,0xed,0xed,0xfb,0xe9,0x0d,0x0a,0xf1,0xe1,0xee,0xf0,0x20,0xe8,0xed,0xf4,
0xee,0xf0,0xec,0xe0,0xf6,0xe8,0xe8,0x20,0xe8,0x20,0xf3,0xef,0xf0,0xe0,0xe2,0xeb,
0xe5,0xed,0xe8,0xff,0x2e,0x20,0xc4,0xe0,0xed,0xed,0xfb,0xe9,0x20,0xef,0xf0,0xe8,
0xec,0xe5,0xf0,0x20,0xef,0xf0,0xe5,0xe4,0xed,0xe0,0xe7,0xed,0xe0,0xf7,0xe5,0xed,
0x2c,0x20,0xef,0xf0,0xe5,0xe6,0xe4,0xe5,0x20,0xe2,0xf1,0xe5,0xe3,0xee,0x2c,0x20,
0xe4,0xeb,0xff,0x20,0xe4,0xe5,0xec,0xee,0xed,0xf1,0xf2,0xf0,0xe0,0xf6,0xe8,0xe8,
0x20,0xe2,0xee,0xe7,0xec,0xee,0xe6,0xed,0xee,0xe9,0x20,0xf0,0xe5,0xe0,0xeb,0xe8,
0xe7,0xe0,0xf6,0xe8,0xe8,0x2e,0x0d,0x0a,0xc2,0x20,0xef,0xf0,0xe8,0xec,0xe5,0xf0,
0xe5,0x20,0xe8,0xf1,0xef,0xee,0xeb,0xfc,0xe7,0xee,0xe2,0xe0,0xed,0xfb,0x20,0xec,
0xe0,0xf2,0xe5,0xf0,0xe8,0xe0,0xeb,0xfb,0x20,0xf1,0x20,0xf1,0xe0,0xe9,0xf2,0xe0,
0x20,0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x3d,0x22,0x68,0x74,0x74,0x70,0x3a,0x2f,
0x2f,0x77,0x77,0x77,0x2e,0x73,0x74,0x2e,0x63,0x6f,0x6d,0x2f,0x69,0x6e,0x74,0x65,
0x72,0x6e,0x65,0x74,0x2f,0x6d,0x63,0x75,0x2f,0x63,0x6c,0x61,0x73,0x73,0x2f,0x31,
0x37,0x33,0x34,0x2e,0x6a,0x73,0x70,0x22,0x3e,0x53,0x54,0x4d,0x69,0x63,0x72,0x6f,
0x65,0x6c,0x65,0x63,0x74,0x72,0x6f,0x6e,0x69,0x63,0x73,0x2e,0x3c,0x2f,0x61,0x3e,
0x20,0x20,0x0d,0x0a,0x3c,0x2f,0x70,0x3e,0x0d,0x0a,0x3c,0x21,0x2d,0x2d,0x52,0x61,
0x64,0x69,0x6f,0x4b,0x4f,0x54,0x20,0x62,0x75,0x74,0x74,0x6f,0x6e,0x2d,0x2d,0x3e,
0x0d,0x0a,0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x3d,0x22,0x68,0x74,0x74,0x70,0x3a,
0x2f,0x2f,0x77,0x77,0x77,0x2e,0x72,0x61,0x64,0x69,0x6f,0x6b,0x6f,0x74,0x2e,0x72,
0x75,0x2f,0x22,0x3e,0x0d,0x0a,0x3c,0x69,0x6d,0x67,0x20,0x73,0x72,0x63,0x3d,0x22,
0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x72,0x61,0x64,0x69,0x6f,
0x6b,0x6f,0x74,0x2e,0x72,0x75,0x2f,0x66,0x69,0x6c,0x65,0x73,0x2f,0x62,0x75,0x74,
0x74,0x6f,0x6e,0x2e,0x67,0x69,0x66,0x22,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,
0x38,0x38,0x22,0x0d,0x0a,0x68,0x65,0x69,0x67,0x68,0x74,0x3d,0x22,0x33,0x31,0x22,
0x20,0x62,0x6f,0x72,0x64,0x65,0x72,0x3d,0x22,0x30,0x22,0x20,0x68,0x73,0x70,0x61,
0x63,0x65,0x3d,0x22,0x30,0x22,0x20,0x76,0x73,0x70,0x61,0x63,0x65,0x3d,0x22,0x30,
0x22,0x20,0x61,0x6c,0x74,0x3d,0x22,0xd0,0xe0,0xe4,0xe8,0xee,0xca,0xce,0xd2,0x20,
0x2d,0x20,0xef,0xee,0xef,0xf3,0xeb,0xff,0xf0,0xed,0xee,0x20,0xee,0xe1,0x20,0xfd,
0xeb,0xe5,0xea,0xf2,0xf0,0xee,0xed,0xe8,0xea,0xe5,0x2e,0x20,0xc0,0xe2,0xf2,0xee,
0xf0,0xf1,0xea,0xe8,0xe5,0x20,0xf1,0xf5,0xe5,0xec,0xfb,0x2c,0x20,0xed,0xee,0xe2,
0xfb,0xe5,0x20,0xf0,0xe0,0xe7,0xf0,0xe0,0xe1,0xee,0xf2,0xea,0xe8,0x2e,0x20,0xce,
0xe1,0xf3,0xf7,0xe5,0xed,0xe8,0xe5,0x20,0xef,0xee,0x20,0xfd,0xeb,0xe5,0xea,0xf2,
0xf0,0xee,0xed,0xe8,0xea,0xe5,0x2c,0x20,0xec,0xe8,0xea,0xf0,0xee,0xea,0xee,0xed,
0xf2,0xf0,0xee,0xeb,0xeb,0xe5,0xf0,0xe0,0xec,0x2c,0x20,0xcf,0xcb,0xc8,0xd1,0x2e,
0x20,0xd4,0xee,0xf0,0xf3,0xec,0x22,0x3e,0x0d,0x0a,0x3c,0x2f,0x61,0x3e,0x0d,0x0a,
0x3c,0x68,0x72,0x20,0x6e,0x6f,0x73,0x68,0x61,0x64,0x65,0x20,0x77,0x69,0x64,0x74,
0x68,0x3d,0x22,0x31,0x30,0x30,0x25,0x22,0x20,0x61,0x6c,0x69,0x67,0x6e,0x3d,0x22,
0x6c,0x65,0x66,0x74,0x22,0x3e,0x0d,0x0a,0x3c,0x66,0x6f,0x6e,0x74,0x20,0x63,0x6f,
0x6c,0x6f,0x72,0x3d,0x22,0x23,0x33,0x33,0x36,0x36,0x39,0x39,0x22,0x3e,0x32,0x30,
0x31,0x34,0x96,0x32,0x30,0x31,0x35,0x20,0xd5,0xe0,0xf0,0xfc,0xea,0xee,0xe2,0x20,
0x34,0x62,0x67,0x40,0x6d,0x61,0x69,0x6c,0x2e,0x72,0x75,0x3c,0x2f,0x66,0x6f,0x6e,
0x74,0x3e,0x3c,0x2f,0x50,0x3e,0x0d,0x0a,0x3c,0x2f,0x42,0x4f,0x44,0x59,0x3e,0x0d,
0x0a,0x3c,0x2f,0x48,0x54,0x4d,0x4c,0x3e,0x20,0x20,0x20,0x0d,0x0a,};

static const unsigned int dummy_align__STM32F4x7Rx_shtml = 2;
static const unsigned char data__STM32F4x7Rx_shtml[] = {
/* /STM32F4x7Rx.shtml (19 chars) */
0x2f,0x53,0x54,0x4d,0x33,0x32,0x46,0x34,0x78,0x37,0x52,0x78,0x2e,0x73,0x68,0x74,
0x6d,0x6c,0x00,0x00,

/* HTTP header */
/* "HTTP/1.0 200 OK
" (17 bytes) */
0x48,0x54,0x54,0x50,0x2f,0x31,0x2e,0x30,0x20,0x32,0x30,0x30,0x20,0x4f,0x4b,0x0d,
0x0a,
/* "Server: lwIP/1.3.1 (http://savannah.nongnu.org/projects/lwip)
" (63 bytes) */
0x53,0x65,0x72,0x76,0x65,0x72,0x3a,0x20,0x6c,0x77,0x49,0x50,0x2f,0x31,0x2e,0x33,
0x2e,0x31,0x20,0x28,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x73,0x61,0x76,0x61,0x6e,
0x6e,0x61,0x68,0x2e,0x6e,0x6f,0x6e,0x67,0x6e,0x75,0x2e,0x6f,0x72,0x67,0x2f,0x70,
0x72,0x6f,0x6a,0x65,0x63,0x74,0x73,0x2f,0x6c,0x77,0x69,0x70,0x29,0x0d,0x0a,
/* "Content-type: text/html
Expires: Fri, 10 Apr 2008 14:00:00 GMT
Pragma: no-cache

" (85 bytes) */
0x43,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x2d,0x74,0x79,0x70,0x65,0x3a,0x20,0x74,0x65,
0x78,0x74,0x2f,0x68,0x74,0x6d,0x6c,0x0d,0x0a,0x45,0x78,0x70,0x69,0x72,0x65,0x73,
0x3a,0x20,0x46,0x72,0x69,0x2c,0x20,0x31,0x30,0x20,0x41,0x70,0x72,0x20,0x32,0x30,
0x30,0x38,0x20,0x31,0x34,0x3a,0x30,0x30,0x3a,0x30,0x30,0x20,0x47,0x4d,0x54,0x0d,
0x0a,0x50,0x72,0x61,0x67,0x6d,0x61,0x3a,0x20,0x6e,0x6f,0x2d,0x63,0x61,0x63,0x68,
0x65,0x0d,0x0a,0x0d,0x0a,
/* raw file data (869 bytes) */
0x3c,0x21,0x44,0x4f,0x43,0x54,0x59,0x50,0x45,0x20,0x68,0x74,0x6d,0x6c,0x3e,0x0d,
0x0a,0x3c,0x68,0x74,0x6d,0x6c,0x3e,0x0d,0x0a,0x3c,0x68,0x65,0x61,0x64,0x3e,0x0d,
0x0a,0x3c,0x74,0x69,0x74,0x6c,0x65,0x3e,0x44,0x65,0x6d,0x6f,0x20,0x53,0x54,0x4d,
0x33,0x32,0x46,0x34,0x78,0x37,0x20,0x45,0x74,0x68,0x65,0x72,0x6e,0x65,0x74,0x3c,
0x2f,0x74,0x69,0x74,0x6c,0x65,0x3e,0x20,0x20,0x0d,0x0a,0x3c,0x2f,0x68,0x65,0x61,
0x64,0x3e,0x0d,0x0a,0x3c,0x6d,0x65,0x74,0x61,0x20,0x68,0x74,0x74,0x70,0x2d,0x65,
0x71,0x75,0x69,0x76,0x3d,0x22,0x72,0x65,0x66,0x72,0x65,0x73,0x68,0x22,0x20,0x63,
0x6f,0x6e,0x74,0x65,0x6e,0x74,0x3d,0x22,0x31,0x22,0x3e,0x0d,0x0a,0x3c,0x62,0x6f,
0x64,0x79,0x20,0x74,0x65,0x78,0x74,0x3d,0x22,0x23,0x30,0x30,0x30,0x30,0x30,0x30,
0x22,0x20,0x62,0x67,0x63,0x6f,0x6c,0x6f,0x72,0x3d,0x22,0x23,0x66,0x66,0x66,0x66,
0x66,0x66,0x22,0x3e,0x3c,0x63,0x65,0x6e,0x74,0x65,0x72,0x3e,0x0d,0x0a,0x3c,0x62,
0x6f,0x64,0x79,0x20,0x74,0x65,0x78,0x74,0x3d,0x22,0x23,0x33,0x33,0x33,0x33,0x46,
0x46,0x22,0x20,0x62,0x67,0x63,0x6f,0x6c,0x6f,0x72,0x3d,0x22,0x23,0x30,0x30,0x30,
0x30,0x30,0x30,0x22,0x20,0x6c,0x69,0x6e,0x6b,0x3d,0x22,0x23,0x33,0x33,0x33,0x33,
0x46,0x46,0x22,0x20,0x61,0x6c,0x69,0x6e,0x6b,0x3d,0x22,0x23,0x33,0x33,0x33,0x33,
0x46,0x46,0x22,0x20,0x76,0x6c,0x69,0x6e,0x6b,0x3d,0x22,0x23,0x33,0x33,0x33,0x33,
0x46,0x46,0x22,0x3e,0x0d,0x0a,0x3c,0x66,0x6f,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,
0x3d,0x22,0x2b,0x33,0x22,0x63,0x6f,0x6c,0x6f,0x72,0x3d,0x22,0x23,0x33,0x33,0x33,
0x33,0x46,0x46,0x22,0x3e,0x3c,0x62,0x3e,0x3c,0x69,0x3e,0x53,0x54,0x4d,0x33,0x32,
0x46,0x34,0x78,0x37,0x20,0x57,0x65,0x62,0x73,0x65,0x72,0x76,0x65,0x72,0x20,0x44,
0x65,0x6d,0x6f,0x3c,0x2f,0x69,0x3e,0x3c,0x2f,0x62,0x3e,0x3c,0x2f,0x66,0x6f,0x6e,
0x74,0x3e,0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x3c,0x66,0x6f,0x6e,0x74,0x20,0x73,0x69,
0x7a,0x65,0x3d,0x22,0x2b,0x32,0x22,0x63,0x6f,0x6c,0x6f,0x72,0x3d,0x22,0x23,0x33,
0x33,0x33,0x33,0x46,0x46,0x22,0x3e,0x3c,0x62,0x3e,0x3c,0x69,0x3e,0xcf,0xf0,0xe8,
0xe5,0xec,0x20,0xe4,0xe0,0xed,0xed,0xfb,0xf5,0x3c,0x2f,0x69,0x3e,0x3c,0x2f,0x62,
0x3e,0x3c,0x2f,0x66,0x6f,0x6e,0x74,0x3e,0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x3c,0x68,
0x72,0x20,0x6e,0x6f,0x73,0x68,0x61,0x64,0x65,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,
0x22,0x31,0x30,0x30,0x25,0x22,0x20,0x61,0x6c,0x69,0x67,0x6e,0x3d,0x22,0x6c,0x65,
0x66,0x74,0x22,0x3e,0x20,0x0d,0x0a,0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x20,0x3d,
0x20,0x22,0x69,0x6e,0x64,0x65,0x78,0x2e,0x68,0x74,0x6d,0x6c,0x22,0x20,0x74,0x69,
0x74,0x6c,0x65,0x20,0x3d,0x20,0x22,0xd1,0xf1,0xfb,0xeb,0xea,0xe0,0x22,0x3e,0x3c,
0x65,0x6d,0x3e,0xc3,0xeb,0xe0,0xe2,0xed,0xe0,0xff,0x3c,0x2f,0x65,0x6d,0x3e,0x3c,
0x2f,0x61,0x3e,0x26,0x6e,0x62,0x73,0x70,0x3b,0x26,0x6e,0x62,0x73,0x70,0x3b,0x26,
0x6e,0x62,0x73,0x70,0x3b,0x0d,0x0a,0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x20,0x3d,
0x20,0x22,0x53,0x54,0x4d,0x33,0x32,0x46,0x34,0x78,0x37,0x54,0x78,0x2e,0x68,0x74,
0x6d,0x6c,0x22,0x20,0x74,0x69,0x74,0x6c,0x65,0x20,0x3d,0x20,0x22,0xd1,0xf1,0xfb,
0xeb,0xea,0xe0,0x22,0x3e,0x3c,0x65,0x6d,0x3e,0xcf,0xe5,0xf0,0xe5,0xe4,0xe0,0xf7,
0xe0,0x20,0xe4,0xe0,0xed,0xed,0xfb,0xf5,0x3c,0x2f,0x65,0x6d,0x3e,0x3c,0x2f,0x61,
0x3e,0x26,0x6e,0x62,0x73,0x70,0x3b,0x26,0x6e,0x62,0x73,0x70,0x3b,0x26,0x6e,0x62,
0x73,0x70,0x3b,0x0d,0x0a,0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x20,0x3d,0x20,0x22,
0x53,0x54,0x4d,0x33,0x32,0x46,0x34,0x78,0x37,0x52,0x78,0x2e,0x73,0x68,0x74,0x6d,
0x6c,0x22,0x20,0x74,0x69,0x74,0x6c,0x65,0x20,0x3d,0x20,0x22,0xd1,0xf1,0xfb,0xeb,
0xea,0xe0,0x22,0x3e,0x3c,0x65,0x6d,0x3e,0xd2,0xe5,0xea,0xf3,0xf9,0xe0,0xff,0x20,
0xf1,0xf2,0xf0,0xe0,0xed,0xe8,0xf6,0xe0,0x3c,0x2f,0x65,0x6d,0x3e,0x3c,0x2f,0x61,
0x3e,0x3c,0x42,0x52,0x3e,0x0d,0x0a,0x3c,0x68,0x72,0x20,0x6e,0x6f,0x73,0x68,0x61,
0x64,0x65,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x31,0x30,0x30,0x25,0x22,0x20,
0x61,0x6c,0x69,0x67,0x6e,0x3d,0x22,0x6c,0x65,0x66,0x74,0x22,0x3e,0x0d,0x0a,0x3c,
0x2f,0x63,0x65,0x6e,0x74,0x65,0x72,0x3e,0x0d,0x0a,0x3c,0x68,0x35,0x3e,0xc4,0xe0,
0xed,0xed,0xfb,0xe5,0x3c,0x2f,0x68,0x35,0x3e,0x3c,0x50,0x3e,0x0d,0x0a,0x3c,0x70,
0x72,0x65,0x3e,0x0d,0x0a,0x3c,0x21,0x2d,0x2d,0x23,0x74,0x2d,0x2d,0x3e,0x0d,0x0a,
0x3c,0x2f,0x70,0x72,0x65,0x3e,0x0d,0x0a,0x3c,0x2f,0x42,0x4f,0x44,0x59,0x3e,0x0d,
0x0a,0x3c,0x68,0x72,0x20,0x6e,0x6f,0x73,0x68,0x61,0x64,0x65,0x20,0x77,0x69,0x64,
0x74,0x68,0x3d,0x22,0x31,0x30,0x30,0x25,0x22,0x20,0x61,0x6c,0x69,0x67,0x6e,0x3d,
0x22,0x6c,0x65,0x66,0x74,0x22,0x3e,0x0d,0x0a,0x3c,0x2f,0x48,0x54,0x4d,0x4c,0x3e,
0x20,0x20,0x20,0x0d,0x0a,};

static const unsigned int dummy_align__STM32F4x7Tx_html = 3;
static const unsigned char data__STM32F4x7Tx_html[] = {
/* /STM32F4x7Tx.html (18 chars) */
0x2f,0x53,0x54,0x4d,0x33,0x32,0x46,0x34,0x78,0x37,0x54,0x78,0x2e,0x68,0x74,0x6d,
0x6c,0x00,0x00,0x00,

/* HTTP header */
/* "HTTP/1.0 200 OK
" (17 bytes) */
0x48,0x54,0x54,0x50,0x2f,0x31,0x2e,0x30,0x20,0x32,0x30,0x30,0x20,0x4f,0x4b,0x0d,
0x0a,
/* "Server: lwIP/1.3.1 (http://savannah.nongnu.org/projects/lwip)
" (63 bytes) */
0x53,0x65,0x72,0x76,0x65,0x72,0x3a,0x20,0x6c,0x77,0x49,0x50,0x2f,0x31,0x2e,0x33,
0x2e,0x31,0x20,0x28,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x73,0x61,0x76,0x61,0x6e,
0x6e,0x61,0x68,0x2e,0x6e,0x6f,0x6e,0x67,0x6e,0x75,0x2e,0x6f,0x72,0x67,0x2f,0x70,
0x72,0x6f,0x6a,0x65,0x63,0x74,0x73,0x2f,0x6c,0x77,0x69,0x70,0x29,0x0d,0x0a,
/* "Content-type: text/html

" (27 bytes) */
0x43,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x2d,0x74,0x79,0x70,0x65,0x3a,0x20,0x74,0x65,
0x78,0x74,0x2f,0x68,0x74,0x6d,0x6c,0x0d,0x0a,0x0d,0x0a,
/* raw file data (1851 bytes) */
0x3c,0x21,0x44,0x4f,0x43,0x54,0x59,0x50,0x45,0x20,0x68,0x74,0x6d,0x6c,0x3e,0x0d,
0x0a,0x3c,0x68,0x74,0x6d,0x6c,0x3e,0x0d,0x0a,0x3c,0x68,0x65,0x61,0x64,0x3e,0x0d,
0x0a,0x3c,0x74,0x69,0x74,0x6c,0x65,0x3e,0x44,0x65,0x6d,0x6f,0x20,0x53,0x54,0x4d,
0x33,0x32,0x46,0x34,0x78,0x37,0x20,0x45,0x74,0x68,0x65,0x72,0x6e,0x65,0x74,0x3c,
0x2f,0x74,0x69,0x74,0x6c,0x65,0x3e,0x20,0x20,0x0d,0x0a,0x3c,0x2f,0x68,0x65,0x61,
0x64,0x3e,0x0d,0x0a,0x3c,0x62,0x6f,0x64,0x79,0x20,0x74,0x65,0x78,0x74,0x3d,0x22,
0x23,0x30,0x30,0x30,0x30,0x30,0x30,0x22,0x20,0x62,0x67,0x63,0x6f,0x6c,0x6f,0x72,
0x3d,0x22,0x23,0x66,0x66,0x66,0x66,0x66,0x66,0x22,0x3e,0x3c,0x63,0x65,0x6e,0x74,
0x65,0x72,0x3e,0x0d,0x0a,0x3c,0x62,0x6f,0x64,0x79,0x20,0x74,0x65,0x78,0x74,0x3d,
0x22,0x23,0x33,0x33,0x33,0x33,0x46,0x46,0x22,0x20,0x62,0x67,0x63,0x6f,0x6c,0x6f,
0x72,0x3d,0x22,0x23,0x30,0x30,0x30,0x30,0x30,0x30,0x22,0x20,0x6c,0x69,0x6e,0x6b,
0x3d,0x22,0x23,0x33,0x33,0x33,0x33,0x46,0x46,0x22,0x20,0x61,0x6c,0x69,0x6e,0x6b,
0x3d,0x22,0x23,0x33,0x33,0x33,0x33,0x46,0x46,0x22,0x20,0x76,0x6c,0x69,0x6e,0x6b,
0x3d,0x22,0x23,0x33,0x33,0x33,0x33,0x46,0x46,0x22,0x3e,0x0d,0x0a,0x3c,0x66,0x6f,
0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0x3d,0x22,0x2b,0x33,0x22,0x63,0x6f,0x6c,0x6f,
0x72,0x3d,0x22,0x23,0x33,0x33,0x33,0x33,0x46,0x46,0x22,0x3e,0x3c,0x62,0x3e,0x3c,
0x69,0x3e,0x53,0x54,0x4d,0x33,0x32,0x46,0x34,0x78,0x37,0x20,0x57,0x65,0x62,0x73,
0x65,0x72,0x76,0x65,0x72,0x20,0x44,0x65,0x6d,0x6f,0x3c,0x2f,0x69,0x3e,0x3c,0x2f,
0x62,0x3e,0x3c,0x2f,0x66,0x6f,0x6e,0x74,0x3e,0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x3c,
0x66,0x6f,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0x3d,0x22,0x2b,0x32,0x22,0x63,0x6f,
0x6c,0x6f,0x72,0x3d,0x22,0x23,0x33,0x33,0x33,0x33,0x46,0x46,0x22,0x3e,0x3c,0x62,
0x3e,0x3c,0x69,0x3e,0xcf,0xe5,0xf0,0xe5,0xe4,0xe0,0xf7,0xe0,0x20,0xe4,0xe0,0xed,
0xed,0xfb,0xf5,0x3c,0x2f,0x69,0x3e,0x3c,0x2f,0x62,0x3e,0x3c,0x2f,0x66,0x6f,0x6e,
0x74,0x3e,0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x3c,0x68,0x72,0x20,0x6e,0x6f,0x73,0x68,
0x61,0x64,0x65,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x31,0x30,0x30,0x25,0x22,
0x20,0x61,0x6c,0x69,0x67,0x6e,0x3d,0x22,0x6c,0x65,0x66,0x74,0x22,0x3e,0x20,0x0d,
0x0a,0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x20,0x3d,0x20,0x22,0x69,0x6e,0x64,0x65,
0x78,0x2e,0x68,0x74,0x6d,0x6c,0x22,0x20,0x74,0x69,0x74,0x6c,0x65,0x20,0x3d,0x20,
0x22,0xd1,0xf1,0xfb,0xeb,0xea,0xe0,0x22,0x3e,0x3c,0x65,0x6d,0x3e,0xc3,0xeb,0xe0,
0xe2,0xed,0xe0,0xff,0x3c,0x2f,0x65,0x6d,0x3e,0x3c,0x2f,0x61,0x3e,0x26,0x6e,0x62,
0x73,0x70,0x3b,0x26,0x6e,0x62,0x73,0x70,0x3b,0x26,0x6e,0x62,0x73,0x70,0x3b,0x0d,
0x0a,0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x20,0x3d,0x20,0x22,0x53,0x54,0x4d,0x33,
0x32,0x46,0x34,0x78,0x37,0x54,0x78,0x2e,0x68,0x74,0x6d,0x6c,0x22,0x20,0x74,0x69,
0x74,0x6c,0x65,0x20,0x3d,0x20,0x22,0xd1,0xf1,0xfb,0xeb,0xea,0xe0,0x22,0x3e,0x3c,
0x65,0x6d,0x3e,0xd2,0xe5,0xea,0xf3,0xf9,0xe0,0xff,0x20,0xf1,0xf2,0xf0,0xe0,0xed,
0xe8,0xf6,0xe0,0x3c,0x2f,0x65,0x6d,0x3e,0x3c,0x2f,0x61,0x3e,0x26,0x6e,0x62,0x73,
0x70,0x3b,0x26,0x6e,0x62,0x73,0x70,0x3b,0x26,0x6e,0x62,0x73,0x70,0x3b,0x0d,0x0a,
0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x20,0x3d,0x20,0x22,0x53,0x54,0x4d,0x33,0x32,
0x46,0x34,0x78,0x37,0x52,0x78,0x2e,0x73,0x68,0x74,0x6d,0x6c,0x22,0x20,0x74,0x69,
0x74,0x6c,0x65,0x20,0x3d,0x20,0x22,0xd1,0xf1,0xfb,0xeb,0xea,0xe0,0x22,0x3e,0x3c,
0x65,0x6d,0x3e,0xcf,0xf0,0xe8,0xe5,0xec,0x20,0xe4,0xe0,0xed,0xed,0xfb,0xf5,0x3c,
0x2f,0x65,0x6d,0x3e,0x3c,0x2f,0x61,0x3e,0x3c,0x42,0x52,0x3e,0x0d,0x0a,0x3c,0x68,
0x72,0x20,0x6e,0x6f,0x73,0x68,0x61,0x64,0x65,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,
0x22,0x31,0x30,0x30,0x25,0x22,0x20,0x61,0x6c,0x69,0x67,0x6e,0x3d,0x22,0x6c,0x65,
0x66,0x74,0x22,0x3e,0x0d,0x0a,0x3c,0x2f,0x63,0x65,0x6e,0x74,0x65,0x72,0x3e,0x0d,
0x0a,0x3c,0x74,0x61,0x62,0x6c,0x65,0x20,0x73,0x74,0x79,0x6c,0x65,0x3d,0x22,0x77,
0x69,0x64,0x74,0x68,0x3a,0x20,0x31,0x30,0x30,0x25,0x3b,0x20,0x63,0x6f,0x6c,0x6f,
0x72,0x3a,0x20,0x77,0x68,0x69,0x74,0x65,0x3b,0x20,0x68,0x65,0x69,0x67,0x68,0x74,
0x3a,0x20,0x33,0x31,0x70,0x78,0x3b,0x22,0x20,0x77,0x68,0x69,0x74,0x65,0x3d,0x22,
0x22,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3d,0x22,0x22,0x20,0x3b,0x3d,0x22,0x22,0x20,
0x31,0x30,0x30,0x3d,0x22,0x22,0x20,0x62,0x6f,0x72,0x64,0x65,0x72,0x3d,0x22,0x30,
0x22,0x20,0x63,0x65,0x6c,0x6c,0x70,0x61,0x64,0x64,0x69,0x6e,0x67,0x3d,0x22,0x33,
0x22,0x20,0x63,0x65,0x6c,0x6c,0x73,0x70,0x61,0x63,0x69,0x6e,0x67,0x3d,0x22,0x30,
0x22,0x3e,0x3c,0x74,0x62,0x6f,0x64,0x79,0x3e,0x0d,0x0a,0x3c,0x74,0x72,0x3e,0x3c,
0x74,0x64,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x74,0x61,0x62,0x74,0x69,0x74,
0x6c,0x65,0x22,0x20,0x73,0x74,0x79,0x6c,0x65,0x3d,0x22,0x68,0x65,0x69,0x67,0x68,
0x74,0x3a,0x20,0x31,0x35,0x70,0x78,0x3b,0x20,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,
0x75,0x6e,0x64,0x2d,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x20,0x72,0x67,0x62,0x28,0x35,
0x31,0x2c,0x20,0x35,0x31,0x2c,0x20,0x32,0x35,0x35,0x29,0x3b,0x22,0x3e,0x3c,0x62,
0x69,0x67,0x3e,0x3c,0x62,0x69,0x67,0x3e,0x3c,0x66,0x6f,0x6e,0x74,0x20,0x73,0x69,
0x7a,0x65,0x3d,0x22,0x2d,0x31,0x22,0x3e,0x3c,0x62,0x69,0x67,0x3e,0x3c,0x62,0x69,
0x67,0x3e,0x3c,0x73,0x74,0x72,0x6f,0x6e,0x67,0x3e,0x0d,0x0a,0x26,0x6e,0x62,0x73,
0x70,0x3b,0x26,0x6e,0x62,0x73,0x70,0x3b,0xc2,0xe2,0xee,0xe4,0x20,0xe4,0xe0,0xed,
0xed,0xfb,0xf5,0x3c,0x2f,0x73,0x74,0x72,0x6f,0x6e,0x67,0x3e,0x3c,0x2f,0x62,0x69,
0x67,0x3e,0x3c,0x2f,0x62,0x69,0x67,0x3e,0x3c,0x2f,0x66,0x6f,0x6e,0x74,0x3e,0x3c,
0x2f,0x62,0x69,0x67,0x3e,0x3c,0x2f,0x62,0x69,0x67,0x3e,0x3c,0x2f,0x74,0x64,0x3e,
0x3c,0x2f,0x74,0x72,0x3e,0x0d,0x0a,0x3c,0x2f,0x74,0x62,0x6f,0x64,0x79,0x3e,0x0d,
0x0a,0x3c,0x2f,0x74,0x61,0x62,0x6c,0x65,0x3e,0x0d,0x0a,0x3c,0x62,0x72,0x3e,0x0d,
0x0a,0x3c,0x66,0x6f,0x72,0x6d,0x20,0x6d,0x65,0x74,0x68,0x6f,0x64,0x3d,0x22,0x67,
0x65,0x74,0x22,0x20,0x61,0x63,0x74,0x69,0x6f,0x6e,0x3d,0x22,0x2f,0x6c,0x65,0x64,
0x73,0x2e,0x63,0x67,0x69,0x22,0x3e,0x0d,0x0a,0x3c,0x69,0x6e,0x70,0x75,0x74,0x20,
0x76,0x61,0x6c,0x75,0x65,0x3d,0x22,0x31,0x22,0x20,0x6e,0x61,0x6d,0x65,0x3d,0x22,
0x6c,0x65,0x64,0x22,0x20,0x74,0x79,0x70,0x65,0x3d,0x22,0x63,0x68,0x65,0x63,0x6b,
0x62,0x6f,0x78,0x22,0x3e,0x4c,0x45,0x44,0x31,0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x3c,
0x69,0x6e,0x70,0x75,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x3d,0x22,0x32,0x22,0x20,
0x6e,0x61,0x6d,0x65,0x3d,0x22,0x6c,0x65,0x64,0x22,0x20,0x74,0x79,0x70,0x65,0x3d,
0x22,0x63,0x68,0x65,0x63,0x6b,0x62,0x6f,0x78,0x22,0x3e,0x4c,0x45,0x44,0x32,0x3c,
0x62,0x72,0x3e,0x0d,0x0a,0x3c,0x69,0x6e,0x70,0x75,0x74,0x20,0x76,0x61,0x6c,0x75,
0x65,0x3d,0x22,0x33,0x22,0x20,0x6e,0x61,0x6d,0x65,0x3d,0x22,0x6c,0x65,0x64,0x22,
0x20,0x74,0x79,0x70,0x65,0x3d,0x22,0x63,0x68,0x65,0x63,0x6b,0x62,0x6f,0x78,0x22,
0x3e,0x4c,0x45,0x44,0x33,0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x3c,0x69,0x6e,0x70,0x75,
0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x3d,0x22,0x34,0x22,0x20,0x6e,0x61,0x6d,0x65,
0x3d,0x22,0x6c,0x65,0x64,0x22,0x20,0x74,0x79,0x70,0x65,0x3d,0x22,0x63,0x68,0x65,
0x63,0x6b,0x62,0x6f,0x78,0x22,0x3e,0x4c,0x45,0x44,0x34,0x3c,0x62,0x72,0x3e,0x3c,
0x62,0x72,0x3e,0x0d,0x0a,0x3c,0x69,0x6e,0x70,0x75,0x74,0x20,0x76,0x61,0x6c,0x75,
0x65,0x3d,0x22,0x35,0x22,0x20,0x6e,0x61,0x6d,0x65,0x3d,0x22,0x6c,0x65,0x64,0x22,
0x20,0x74,0x79,0x70,0x65,0x3d,0x22,0x63,0x68,0x65,0x63,0x6b,0x62,0x6f,0x78,0x22,
0x3e,0x4c,0x45,0x44,0x35,0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x3c,0x69,0x6e,0x70,0x75,
0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x3d,0x22,0x36,0x22,0x20,0x6e,0x61,0x6d,0x65,
0x3d,0x22,0x6c,0x65,0x64,0x22,0x20,0x74,0x79,0x70,0x65,0x3d,0x22,0x63,0x68,0x65,
0x63,0x6b,0x62,0x6f,0x78,0x22,0x3e,0x4c,0x45,0x44,0x36,0x3c,0x62,0x72,0x3e,0x0d,
0x0a,0x3c,0x69,0x6e,0x70,0x75,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x3d,0x22,0x37,
0x22,0x20,0x6e,0x61,0x6d,0x65,0x3d,0x22,0x6c,0x65,0x64,0x22,0x20,0x74,0x79,0x70,
0x65,0x3d,0x22,0x63,0x68,0x65,0x63,0x6b,0x62,0x6f,0x78,0x22,0x3e,0x4c,0x45,0x44,
0x37,0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x3c,0x69,0x6e,0x70,0x75,0x74,0x20,0x76,0x61,
0x6c,0x75,0x65,0x3d,0x22,0x38,0x22,0x20,0x6e,0x61,0x6d,0x65,0x3d,0x22,0x6c,0x65,
0x64,0x22,0x20,0x74,0x79,0x70,0x65,0x3d,0x22,0x63,0x68,0x65,0x63,0x6b,0x62,0x6f,
0x78,0x22,0x3e,0x4c,0x45,0x44,0x38,0x3c,0x62,0x72,0x3e,0x3c,0x62,0x72,0x3e,0x0d,
0x0a,0x3c,0x69,0x6e,0x70,0x75,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x3d,0x22,0x30,
0x30,0x30,0x30,0x22,0x20,0x6e,0x61,0x6d,0x65,0x3d,0x22,0x56,0x61,0x72,0x31,0x22,
0x20,0x74,0x79,0x70,0x65,0x3d,0x22,0x74,0x65,0x78,0x74,0x22,0x20,0x73,0x69,0x7a,
0x65,0x3d,0x34,0x20,0x6d,0x61,0x78,0x6c,0x65,0x6e,0x67,0x74,0x68,0x3d,0x34,0x3e,
0x26,0x6e,0x62,0x73,0x70,0x3b,0x26,0x6e,0x62,0x73,0x70,0x3b,0x56,0x61,0x72,0x31,
0x3c,0x62,0x72,0x3e,0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x3c,0x69,0x6e,0x70,0x75,0x74,
0x20,0x76,0x61,0x6c,0x75,0x65,0x3d,0x22,0x30,0x30,0x30,0x30,0x22,0x20,0x6e,0x61,
0x6d,0x65,0x3d,0x22,0x56,0x61,0x72,0x32,0x22,0x20,0x74,0x79,0x70,0x65,0x3d,0x22,
0x74,0x65,0x78,0x74,0x22,0x20,0x73,0x69,0x7a,0x65,0x3d,0x34,0x20,0x6d,0x61,0x78,
0x6c,0x65,0x6e,0x67,0x74,0x68,0x3d,0x34,0x3e,0x26,0x6e,0x62,0x73,0x70,0x3b,0x26,
0x6e,0x62,0x73,0x70,0x3b,0x56,0x61,0x72,0x32,0x3c,0x62,0x72,0x3e,0x3c,0x62,0x72,
0x3e,0x0d,0x0a,0x3c,0x69,0x6e,0x70,0x75,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x3d,
0x22,0x53,0x65,0x6e,0x64,0x22,0x20,0x74,0x79,0x70,0x65,0x3d,0x22,0x73,0x75,0x62,
0x6d,0x69,0x74,0x22,0x3e,0x20,0x3c,0x2f,0x66,0x6f,0x72,0x6d,0x3e,0x3c,0x62,0x72,
0x3e,0x0d,0x0a,0x0d,0x0a,0x3c,0x68,0x72,0x20,0x6e,0x6f,0x73,0x68,0x61,0x64,0x65,
0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x31,0x30,0x30,0x25,0x22,0x20,0x61,0x6c,
0x69,0x67,0x6e,0x3d,0x22,0x6c,0x65,0x66,0x74,0x22,0x3e,0x0d,0x0a,0x3c,0x2f,0x62,
0x6f,0x64,0x79,0x3e,0x3c,0x2f,0x68,0x74,0x6d,0x6c,0x3e,};



const struct fsdata_file file__404_html[] = { {
file_NULL,
data__404_html,
data__404_html + 12,
sizeof(data__404_html) - 12,
1,
}};

const struct fsdata_file file__index_html[] = { {
file__404_html,
data__index_html,
data__index_html + 12,
sizeof(data__index_html) - 12,
1,
}};

const struct fsdata_file file__STM32F4x7Rx_shtml[] = { {
file__index_html,
data__STM32F4x7Rx_shtml,
data__STM32F4x7Rx_shtml + 20,
sizeof(data__STM32F4x7Rx_shtml) - 20,
1,
}};

const struct fsdata_file file__STM32F4x7Tx_html[] = { {
file__STM32F4x7Rx_shtml,
data__STM32F4x7Tx_html,
data__STM32F4x7Tx_html + 20,
sizeof(data__STM32F4x7Tx_html) - 20,
1,
}};

#define FS_ROOT file__STM32F4x7Tx_html
#define FS_NUMFILES 4

