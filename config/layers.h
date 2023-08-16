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
// Colemak-DOX
#define WEN_BASE  0
#define WEN_NAV   1
#define WEN_NUM   2
#define WEN_SYM   3
#define WEN_FUNC  4
// Acute
#define WEN_AL    5
// Double acute
#define WEN_DAL   6
// Diaresis
#define WEN_DL    7
#define WEN_TAIPO 8

#define WHU_BASE  0
#define MHU_BASE  0

#define WEN_LAYER_SET WEN_BASE WEN_NAV WEN_NUM WEN_SYM WEN_FUNC WEN_AL WEN_DAL WEN_DL
