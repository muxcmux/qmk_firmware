#include QMK_KEYBOARD_H

// Define some short aliases for modifier keys
#define GUI_SPC LGUI_T(KC_SPC)
#define CTL_Z LCTL_T(KC_Z)
#define CTL_SLS RCTL_T(KC_SLSH)
#define S_EMOJI C(G(KC_SPC))
#define S_SPOTL G(KC_SPC)
#define S_SWWIN G(KC_GRV)
#define S_SCRSH LSG(KC_4)
#define LCA_S LCA(KC_S)
#define LCA_D LCA(KC_D)
#define LCA_F LCA(KC_F)
#define LCA_G LCA(KC_G)
#define LCA_X LCA(KC_X)
#define LCA_C LCA(KC_C)
#define LCA_V LCA(KC_V)
#define LCA_B LCA(KC_B)
#define MEH_S MEH(KC_S)
#define MEH_D MEH(KC_D)
#define MEH_F MEH(KC_F)
#define MEH_G MEH(KC_G)
#define MEH_X MEH(KC_X)
#define MEH_C MEH(KC_C)
#define MEH_V MEH(KC_V)
#define MEH_B MEH(KC_B)
#define MEH_ESC MEH(KC_ESC)
#define MEH_BSP MEH(KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  CW_TOGG,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        MO(2),    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,   MO(1),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      SC_LSPO,   CTL_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, CTL_SLS, SC_RSPC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT, GUI_SPC, KC_BSPC,     KC_ENT,   MO(3),   MO(4)
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, XXXXXXX, S_EMOJI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, S_SPOTL,   LCA_S,   LCA_D,   LCA_F,   LCA_G,                      KC_MRWD, KC_VOLD, KC_VOLU, KC_MFFD, S_SCRSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, S_SWWIN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MPLY, KC_BRID, KC_BRIU, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_PLUS, KC_LBRC, KC_RBRC, KC_MINS, XXXXXXX, CW_TOGG,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       KC_EQL, KC_LCBR, KC_RCBR, KC_UNDS, KC_PIPE, KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       KC_GRV, KC_QUOT, KC_DQUO, KC_AMPR, KC_TILD, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,    KC_6,    KC_7,    KC_8,    KC_9,  KC_TAB,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, RGB_TOG, RGB_VAD, RGB_VAI, RGB_MOD, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX,   MEH_D,   MEH_F,   MEH_G,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
  )                                    //`--------------------------'  `--------------------------'
};

// Key combos
const uint16_t PROGMEM jk_escape_combo[] = { KC_J, KC_K, COMBO_END };
combo_t key_combos[COMBO_COUNT] = {
  COMBO(jk_escape_combo, KC_ESC)
};

