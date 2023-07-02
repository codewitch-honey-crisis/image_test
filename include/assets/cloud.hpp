
// Generated by https://honeythecodewitch.com/gfx/converter
// --------------------------------------------------------
// Add #define CLOUD_IMPLEMENTATION
// to exactly one CPP file before including this file.
// --------------------------------------------------------

#pragma once
#include <Arduino.h>
#ifndef ESP32
    #include <avr/pgmspace.h>
#else
    #include <pgmspace.h>
#endif
#include <gfx.hpp>

extern const uint8_t cloud_data[] PROGMEM;

#ifdef CLOUD_IMPLEMENTATION

const uint8_t cloud_data[] PROGMEM = {
	0xff,0xd8,0xff,0xe0,0x00,0x10,0x4a,0x46,0x49,0x46,0x00,0x01,0x01,0x01,0x00,0x90,
	0x00,0x90,0x00,0x00,0xff,0xe1,0x00,0x3a,0x45,0x78,0x69,0x66,0x00,0x00,0x4d,0x4d,
	0x00,0x2a,0x00,0x00,0x00,0x08,0x00,0x03,0x51,0x10,0x00,0x01,0x00,0x00,0x00,0x01,
	0x01,0x00,0x00,0x00,0x51,0x11,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x0b,0x13,
	0x51,0x12,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x0b,0x13,0x00,0x00,0x00,0x00,
	0xff,0xdb,0x00,0x43,0x00,0x02,0x01,0x01,0x02,0x01,0x01,0x02,0x02,0x02,0x02,0x02,
	0x02,0x02,0x02,0x03,0x05,0x03,0x03,0x03,0x03,0x03,0x06,0x04,0x04,0x03,0x05,0x07,
	0x06,0x07,0x07,0x07,0x06,0x07,0x07,0x08,0x09,0x0b,0x09,0x08,0x08,0x0a,0x08,0x07,
	0x07,0x0a,0x0d,0x0a,0x0a,0x0b,0x0c,0x0c,0x0c,0x0c,0x07,0x09,0x0e,0x0f,0x0d,0x0c,
	0x0e,0x0b,0x0c,0x0c,0x0c,0xff,0xdb,0x00,0x43,0x01,0x02,0x02,0x02,0x03,0x03,0x03,
	0x06,0x03,0x03,0x06,0x0c,0x08,0x07,0x08,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,
	0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,
	0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,
	0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0xff,0xc0,0x00,0x11,0x08,0x00,
	0x30,0x00,0x30,0x03,0x01,0x22,0x00,0x02,0x11,0x01,0x03,0x11,0x01,0xff,0xc4,0x00,
	0x1f,0x00,0x00,0x01,0x05,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0a,0x0b,0xff,0xc4,
	0x00,0xb5,0x10,0x00,0x02,0x01,0x03,0x03,0x02,0x04,0x03,0x05,0x05,0x04,0x04,0x00,
	0x00,0x01,0x7d,0x01,0x02,0x03,0x00,0x04,0x11,0x05,0x12,0x21,0x31,0x41,0x06,0x13,
	0x51,0x61,0x07,0x22,0x71,0x14,0x32,0x81,0x91,0xa1,0x08,0x23,0x42,0xb1,0xc1,0x15,
	0x52,0xd1,0xf0,0x24,0x33,0x62,0x72,0x82,0x09,0x0a,0x16,0x17,0x18,0x19,0x1a,0x25,
	0x26,0x27,0x28,0x29,0x2a,0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x43,0x44,0x45,0x46,
	0x47,0x48,0x49,0x4a,0x53,0x54,0x55,0x56,0x57,0x58,0x59,0x5a,0x63,0x64,0x65,0x66,
	0x67,0x68,0x69,0x6a,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x7a,0x83,0x84,0x85,0x86,
	0x87,0x88,0x89,0x8a,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x9a,0xa2,0xa3,0xa4,
	0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xb2,0xb3,0xb4,0xb5,0xb6,0xb7,0xb8,0xb9,0xba,0xc2,
	0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xd2,0xd3,0xd4,0xd5,0xd6,0xd7,0xd8,0xd9,
	0xda,0xe1,0xe2,0xe3,0xe4,0xe5,0xe6,0xe7,0xe8,0xe9,0xea,0xf1,0xf2,0xf3,0xf4,0xf5,
	0xf6,0xf7,0xf8,0xf9,0xfa,0xff,0xc4,0x00,0x1f,0x01,0x00,0x03,0x01,0x01,0x01,0x01,
	0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x03,0x04,0x05,
	0x06,0x07,0x08,0x09,0x0a,0x0b,0xff,0xc4,0x00,0xb5,0x11,0x00,0x02,0x01,0x02,0x04,
	0x04,0x03,0x04,0x07,0x05,0x04,0x04,0x00,0x01,0x02,0x77,0x00,0x01,0x02,0x03,0x11,
	0x04,0x05,0x21,0x31,0x06,0x12,0x41,0x51,0x07,0x61,0x71,0x13,0x22,0x32,0x81,0x08,
	0x14,0x42,0x91,0xa1,0xb1,0xc1,0x09,0x23,0x33,0x52,0xf0,0x15,0x62,0x72,0xd1,0x0a,
	0x16,0x24,0x34,0xe1,0x25,0xf1,0x17,0x18,0x19,0x1a,0x26,0x27,0x28,0x29,0x2a,0x35,
	0x36,0x37,0x38,0x39,0x3a,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4a,0x53,0x54,0x55,
	0x56,0x57,0x58,0x59,0x5a,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x6a,0x73,0x74,0x75,
	0x76,0x77,0x78,0x79,0x7a,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x92,0x93,
	0x94,0x95,0x96,0x97,0x98,0x99,0x9a,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,
	0xb2,0xb3,0xb4,0xb5,0xb6,0xb7,0xb8,0xb9,0xba,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,
	0xc9,0xca,0xd2,0xd3,0xd4,0xd5,0xd6,0xd7,0xd8,0xd9,0xda,0xe2,0xe3,0xe4,0xe5,0xe6,
	0xe7,0xe8,0xe9,0xea,0xf2,0xf3,0xf4,0xf5,0xf6,0xf7,0xf8,0xf9,0xfa,0xff,0xda,0x00,
	0x0c,0x03,0x01,0x00,0x02,0x11,0x03,0x11,0x00,0x3f,0x00,0xfd,0xfc,0xa2,0x8a,0x47,
	0x71,0x1a,0x96,0x62,0x15,0x54,0x64,0x93,0xda,0x80,0x16,0x8a,0xf8,0xbf,0xe2,0x0f,
	0xfc,0x17,0x5b,0xe0,0xee,0x95,0xe3,0xed,0x53,0xc3,0x3f,0x0e,0xfc,0x3d,0xf1,0x6b,
	0xe3,0xfe,0xaf,0xa1,0x4a,0x6d,0xf5,0x45,0xf8,0x5b,0xe1,0x09,0xfc,0x43,0x6d,0xa7,
	0xc8,0x3a,0xab,0xdc,0x82,0x90,0x31,0xf7,0x8e,0x46,0x1d,0xb3,0x9e,0x2b,0xbc,0xfd,
	0x91,0x3f,0xe0,0xac,0x1f,0x08,0x3f,0x6c,0x6f,0x1f,0x5d,0x78,0x27,0x49,0xbd,0xf1,
	0x07,0x83,0x7e,0x24,0x58,0xc6,0x66,0xb8,0xf0,0x57,0x8d,0x34,0x89,0x74,0x1d,0x7d,
	0x23,0x00,0x92,0xeb,0x6f,0x37,0x12,0x80,0x01,0x27,0xca,0x67,0xda,0x06,0x5b,0x02,
	0xbd,0x0a,0x99,0x4e,0x36,0x14,0xfd,0xac,0xe9,0x49,0x24,0xae,0xf4,0xd9,0x77,0x6b,
	0x74,0xbc,0xde,0x84,0xf3,0xc6,0xf6,0xb9,0xf4,0xa5,0x14,0x51,0x5e,0x79,0x41,0x5f,
	0x25,0xff,0x00,0xc1,0x51,0x3c,0x6b,0xa1,0xfc,0x4f,0xb1,0xf0,0x5f,0xec,0xeb,0x71,
	0xe2,0xe8,0x7c,0x3d,0x79,0xf1,0xd2,0xfe,0xe7,0x4f,0xd5,0x85,0x96,0xa9,0x35,0x8e,
	0xb0,0x9a,0x25,0x9d,0xa4,0x97,0xba,0x81,0xb5,0x92,0x3b,0x79,0xe3,0x59,0x1a,0x38,
	0x96,0x32,0xb3,0xf9,0x6b,0x24,0x52,0xcc,0xaa,0xdb,0x88,0x23,0x73,0xfe,0x0b,0x1f,
	0xfb,0x40,0xf8,0xc3,0xf6,0x5a,0xff,0x00,0x82,0x63,0xfc,0x62,0xf1,0xe7,0x80,0xbc,
	0xc8,0xfc,0x59,0xa1,0x68,0x83,0xec,0x17,0x11,0xa6,0xf7,0xb1,0x32,0xcf,0x14,0x12,
	0x5d,0x28,0xe7,0xe6,0x86,0x39,0x5e,0x50,0x48,0x20,0x18,0xf2,0x41,0x19,0xaf,0x90,
	0xbe,0x0a,0xfe,0xc0,0x9f,0x01,0xfe,0x02,0xf8,0x9b,0xc3,0x7e,0x2e,0xf0,0x47,0x87,
	0xe0,0xf1,0x3f,0x8c,0xb4,0x9b,0x59,0xa5,0x1f,0x11,0x6f,0xf5,0x6b,0xcb,0xdd,0x57,
	0xc4,0x93,0xde,0x5a,0xc9,0x05,0xd5,0xf4,0x8e,0x66,0x31,0xb8,0x9e,0x39,0xe5,0x2a,
	0xa5,0x4a,0x80,0xe0,0x8e,0x70,0x47,0xbd,0x95,0xe1,0x69,0xc6,0x9f,0xd7,0x6a,0xb7,
	0xa3,0x6a,0x29,0x2b,0xfb,0xc9,0x26,0x9b,0x6d,0xab,0x24,0xdc,0x5f,0x56,0xf5,0xd3,
	0x43,0x9e,0xbd,0x65,0x05,0x63,0xd9,0x74,0x68,0x74,0x7f,0x87,0x7e,0x05,0xd3,0x7c,
	0x17,0xe0,0x7d,0x1e,0xcf,0xc1,0xfe,0x03,0xd0,0x62,0x16,0xda,0x5e,0x87,0xa7,0x27,
	0x93,0x6f,0x0c,0x63,0xf8,0x9f,0x1c,0xc9,0x2b,0x7d,0xe7,0x91,0xc9,0x66,0x62,0x49,
	0x24,0x93,0x5e,0x1b,0xfb,0x71,0x7e,0xcb,0x91,0x7e,0xd1,0x5f,0x0b,0x5a,0xfb,0x46,
	0x9a,0x6d,0x13,0xe2,0x5f,0x83,0x73,0xac,0x78,0x2f,0xc4,0x56,0x47,0xcb,0xbf,0xd1,
	0xf5,0x18,0xbf,0x79,0x16,0xc9,0x07,0x3e,0x5b,0xb2,0x85,0x74,0x39,0x04,0x1c,0xe3,
	0x70,0x52,0x3d,0xaa,0x8a,0xe8,0xa3,0x88,0xa9,0x4a,0xaa,0xad,0x07,0xef,0x5e,0xf7,
	0xef,0xde,0xfd,0xef,0xd6,0xfb,0xf5,0x3c,0x97,0x26,0xdd,0xd9,0xcd,0xfe,0xcd,0xff,
	0x00,0xf0,0x70,0x7e,0x86,0xff,0x00,0x0a,0xbc,0x0b,0xa8,0x7c,0x76,0xf8,0x47,0xf1,
	0xab,0xe1,0x0a,0xeb,0x36,0x96,0x96,0x7a,0x9f,0x8c,0xb5,0x9f,0x09,0xb4,0x3e,0x13,
	0x5d,0x49,0x95,0x52,0x4f,0xdf,0xac,0x8d,0x24,0x30,0xbc,0xd9,0xd8,0xd2,0xc6,0x00,
	0x53,0x96,0x20,0x02,0x6b,0xf4,0x5e,0xc6,0xfe,0x1d,0x52,0xc6,0x1b,0xab,0x59,0xa2,
	0xb8,0xb6,0xb8,0x45,0x96,0x29,0x62,0x70,0xf1,0xca,0x8c,0x32,0xac,0xac,0x38,0x20,
	0x82,0x08,0x23,0x82,0x2b,0xf3,0x6b,0xf6,0x86,0xb9,0xf0,0x85,0xa7,0xc0,0xbf,0x17,
	0x49,0xe3,0xf9,0x2c,0x62,0xf0,0x50,0xd2,0xae,0x06,0xb4,0xd7,0x63,0x30,0x8b,0x52,
	0x84,0x3e,0x47,0x72,0x41,0xc0,0x00,0x12,0x5b,0x00,0x73,0x8a,0xfa,0x3b,0xfe,0x08,
	0xc5,0xe1,0x0d,0x77,0xc0,0x9f,0xf0,0x4b,0x0f,0x81,0xba,0x5f,0x88,0xb5,0xb8,0x7c,
	0x45,0x7d,0x0f,0x85,0xed,0xe4,0x82,0xfe,0x18,0xe7,0x8d,0x25,0xb2,0x90,0xb4,0x96,
	0x4a,0x16,0x74,0x8e,0x55,0xd9,0x6a,0xf0,0x21,0x0c,0x83,0x05,0x0e,0x32,0x30,0x4e,
	0x19,0x9e,0x1f,0x0c,0xe8,0x7d,0x6a,0x84,0x5c,0x3d,0xeb,0x5a,0xed,0xa7,0x74,0xde,
	0x8d,0xed,0x6b,0x59,0xab,0xf5,0x56,0xb1,0xe9,0xe1,0xab,0xca,0x7a,0x33,0xe8,0xdf,
	0x14,0xf8,0x5f,0x4d,0xf1,0xc7,0x86,0x75,0x1d,0x17,0x59,0xb0,0xb4,0xd5,0x34,0x8d,
	0x5e,0xda,0x4b,0x2b,0xeb,0x2b,0xa8,0x84,0xb0,0x5d,0xc1,0x22,0x94,0x92,0x29,0x11,
	0xb2,0x19,0x19,0x49,0x04,0x11,0x82,0x09,0x15,0xf0,0x7d,0xd7,0xfc,0x1b,0xa1,0xf0,
	0x97,0x49,0xbc,0x9a,0x3f,0x06,0xfc,0x53,0xfd,0xa4,0xfe,0x1a,0xe8,0x0d,0x23,0x49,
	0x6f,0xe1,0xff,0x00,0x0b,0x7c,0x43,0x9a,0xd7,0x4b,0xb1,0xdc,0x49,0x22,0x28,0xe4,
	0x8e,0x46,0x55,0xe7,0xa1,0x73,0x5f,0x7f,0xd1,0x5e,0x66,0x17,0x30,0xc4,0xe1,0xae,
	0xa8,0x4d,0xc5,0x3d,0xd7,0x47,0xf2,0xd8,0xe9,0x94,0x23,0x2f,0x89,0x1f,0x9f,0xbf,
	0xf1,0x0f,0x27,0x83,0x7f,0xe8,0xe4,0x3f,0x6c,0x4f,0xfc,0x39,0xad,0xff,0x00,0xc8,
	0xf4,0x7f,0xc4,0x3c,0x9e,0x0d,0xff,0x00,0xa3,0x90,0xfd,0xb1,0x3f,0xf0,0xe6,0xb7,
	0xff,0x00,0x23,0xd7,0xe8,0x15,0x15,0xd9,0xfd,0xbd,0x8f,0xff,0x00,0x9f,0x8f,0xee,
	0x5f,0xe4,0x47,0xb1,0xa7,0xd8,0xf8,0x9f,0xe0,0xc7,0xfc,0x10,0x87,0xe1,0x4f,0xc3,
	0x2f,0x1c,0x47,0xac,0x78,0x9b,0xc6,0xdf,0x1a,0x3e,0x32,0x59,0xc7,0x04,0x90,0x0d,
	0x0b,0xe2,0x3f,0x8b,0x0e,0xbf,0xa2,0x38,0x91,0x76,0x96,0x92,0xcd,0xa2,0x58,0xe5,
	0x23,0x86,0x5f,0x30,0x30,0x56,0x55,0x60,0x03,0x2a,0x91,0xf6,0xb4,0x10,0x47,0x6b,
	0x02,0x47,0x1a,0x2c,0x71,0xc6,0xa1,0x51,0x14,0x6d,0x55,0x03,0x80,0x00,0xec,0x05,
	0x3a,0x8a,0xe1,0xc5,0x63,0x6b,0xe2,0x5a,0x95,0x79,0x39,0x58,0xb8,0xc5,0x47,0x48,
	0x9f,0xff,0xd9
};
gfx::const_buffer_stream cloud(cloud_data,sizeof(cloud_data));
#endif