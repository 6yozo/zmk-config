#pragma once

// Naming convention
// ---
// First letter:
//   w -> windows
//   l -> linux
//   m -> mac
// 2nd and 3rd letter:
//   en -> US International
//   hu -> Hungarian
//
// dacute -> double acute
// cap -> capital

// LAYERS FOR WIN-ENGLISH-QUERTY HOST (WEN)
//
#define SYSTEM    0
// Colemak-DOX
#define WEN_BASE  1
#define WEN_NAV   2
#define WEN_NUM   3
#define WEN_SYM   4
// Acute
#define WEN_AL    5
// Double acute
#define WEN_DAL   6
// Diaresis
#define WEN_DL    7
#define WEN_TAIPO 8

#define WEN_LAYER_SET WEN_BASE WEN_NAV WEN_NUM WEN_SYM WEN_AL WEN_DAL WEN_DL

// LAYERS FOR WIN-HUNGARIAN-QUERTZ HOST (WHU)

#define WHU_BASE  9
#define WHU_NAV   10
#define WHU_NUM   11
#define WHU_SYM   12
// Acute
#define WHU_AL    13
// Double acute
#define WHU_DAL   14
// Diaresis
#define WHU_DL    15
#define WHU_TAIPO 16

#define WHU_LAYER_SET WHU_BASE WHU_NAV WHU_NUM WHU_SYM WHU_AL WHU_DAL WHU_DL

// LAYERS FOR MAC-HUNGARIAN-QUERTZ HOST (MHU)

#define MHU_BASE  17
#define MHU_NAV   18
#define MHU_NUM   19
#define MHU_SYM   20
// Acute
#define MHU_AL    21
// Double acute
#define MHU_DAL   22
// Diaresis
#define MHU_DL    23
#define MHU_TAIPO 24

#define MHU_LAYER_SET MHU_BASE MHU_NAV MHU_NUM MHU_SYM MHU_AL MHU_DAL MHU_DL
