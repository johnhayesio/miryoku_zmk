// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

/* === My 5-col Corne overrides ===================================== */

/* 1. QWERTY everywhere */
#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_EXTRA_QWERTY

/* A tiny helper – Hyper = Cmd+Ctrl+Opt+Shift */
#define HYPR  LC(LA(LG(LSHFT)))

/* 2. Hyper (⌘⌃⌥⇧) on A (left pinky home) and ' (right pinky home)  */
#define MIRYOKU_MAPPING_LEFTPINKY_HOME    &mt HYPR A
#define MIRYOKU_MAPPING_RIGHTPINKY_HOME   &mt HYPR QUOT

/* 3. Pure Cmd on G and H (index home keys) */
#define MIRYOKU_MAPPING_LEFTINDEX_HOME    &mt LGUI G
#define MIRYOKU_MAPPING_RIGHTINDEX_HOME   &mt RGUI H

/* 4. Add § to the empty right-bottom pinky on Num layer              */
#define MIRYOKU_MAPPING_NUM_RIGHTPINKY_BOTTOM   &kp NONUS_HASH
