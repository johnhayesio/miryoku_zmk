// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// miryoku/custom_config.h – Corne, QWERTY, Hyper on G/H, § on Num-/
// ------------------------------
#include <dt-bindings/zmk/modifiers.h>      /* gives us MOD_LCTL etc.   */
#define LHYPER (MOD_LCTL|MOD_LALT|MOD_LSFT|MOD_LGUI)

#pragma once

/* helpers */
#define U_MT_HYPR(key) &mt LHYPR key          /* true Hyper tap-hold */
#define U_SECT         &kp LA(N6)            /* Alt+6 = § on macOS */

/* Base layer (40 tokens, commas matter) */
#define MIRYOKU_LAYER_BASE \
&kp Q, &kp W, &kp E, &kp R, &kp T, &kp Y, &kp U, &kp I, &kp O, &kp P, \
&mt LGUI A, &mt LALT S, &mt LCTL D, &mt LSFT F, U_MT_HYPR(G), U_MT_HYPR(H), &mt LSFT J, &mt LCTL K, &mt LALT L, &mt LGUI SQT, \
&kp Z, &kp X, &kp C, &kp V, &kp B, &kp N, &kp M, &kp COMMA, &kp DOT, &kp SLASH, \
U_NU, U_NU, U_NU, &kp SPACE, &kp TAB, &kp ESC, U_NU, U_NU, U_NU, U_NU

/* Num layer – slash swapped for § */
#define MIRYOKU_LAYER_NUM \
&kp N1, &kp N2, &kp N3, &kp N4, &kp N5, &kp N6, &kp N7, &kp N8, &kp N9, &kp N0, \
&kp EXCLAMATION, &kp AT_SIGN, &kp HASH, &kp DOLLAR, &kp PERCENT, &kp CARET, &kp AMPERSAND, &kp ASTERISK, &kp LPAREN, &kp RPAREN, \
U_NA, U_NA, U_NA, U_NA, U_NA, U_NA, U_NA, U_NA, U_NA, U_SECT, \
U_NU, U_NU, U_NU, &kp SPACE, &kp TAB, &kp ESC, U_NU, U_NU, U_NU, U_NU
// ------------------------------
