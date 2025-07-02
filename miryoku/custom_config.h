// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Typeractive Corne – Mac – QWERTY
#pragma once

/* ---------- Helper macros ---------- */
// True Hyper = Ctrl+Alt+Shift+Gui all at once
#define U_MT_HYPR(key) &mt HYPR key
// § on a US Mac is Option+6  (LA = Left Alt)
#define U_SECT &kp LA(N6)

/* ---------- Override base (typing) layer ---------- */
// Copy of MIRYOKU_ALTERNATIVES_BASE_QWERTY with G/H turned into Hyper
#define MIRYOKU_LAYER_BASE \
/* row 0 */ \
&kp Q  &kp W  &kp E  &kp R  &kp T            &kp Y  &kp U  &kp I  &kp O  &kp P \
/* row 1 – home row mods */ \
&mt LGUI A  &mt LALT S  &mt LCTL D  &mt LSFT F  U_MT_HYPR(G)     U_MT_HYPR(H)  &mt LSFT J  &mt LCTL K  &mt LALT L  &mt LGUI SQT \
/* row 2 */ \
&kp Z  &kp X  &kp C  &kp V  &kp B            &kp N  &kp M  &kp COMMA  &kp DOT  &kp SLASH \
/* thumbs (unchanged) */ \
U_NU  &kp SPACE  &kp TAB  &kp ESC  U_NU

/* ---------- Override Num layer ---------- */
// Replace the / key with § for text-expander triggers
#define MIRYOKU_LAYER_NUM \
/* row 0 */ \
&kp N1  &kp N2  &kp N3  &kp N4  &kp N5            &kp N6  &kp N7  &kp N8  &kp N9  &kp N0 \
/* row 1 */ \
&kp EXCLAMATION  &kp AT_SIGN  &kp HASH  &kp DOLLAR  &kp PERCENT     &kp CARET  &kp AMPERSAND  &kp ASTERISK  &kp LPAREN  &kp RPAREN \
/* row 2 – slash position is last key on the right */ \
U_NA  U_NA  U_NA  U_NA  U_NA                     U_NA  U_NA  U_NA  U_NA  U_SECT \
/* thumbs (unchanged) */ \
U_NU  &kp SPACE  &kp TAB  &kp ESC  U_NU
