// clang-format off

#include "stdint.h"
#include QMK_KEYBOARD_H

// Keychron has switch and official firmware supports switching between mac and win OS.
// But with this keymap it will be possible to switch between colemak and qwerty
enum layers{
    C_BASE, // Colemak-DH (formely know as Colemak-DHm) base, switch it to mac in order to access
    Q_BASE, // querty base
    C_FN1,  // common function 1
    C_FN2,  // common function 2
};

// some key combination used for combos
#define KC_COPY LCTL(KC_C)
#define KC_PASTE LCTL(KC_V)

enum combos {
  WF_ESC,
  FP_ENTER,
  RS_TAB,
  ST_REPEAT,
  XC_COPY,
  CD_PASTE,
  WR_AT,
  FS_HASH,
  PT_DOLLAR,
  BG_PERCENT,
  RX_GRAVE,
  SC_SLASH,
  TD_EQUAL,
  GV_TIDLE,
  LU_BSPC,
  UY_DELETE,
  NE_BRACKETS, // on tap ( -- on hold <
  EI_BRACKETS, // on tap ) -- on hold >
  HC_BRACKETS, // H+, tap [ -- on hold {
  CD_BRACKETS, // ,+. tap ] -- on hold }
  JM_CARET,
  LN_PLUS,
  UE_ASTERISK,
  YI_AMPERSAND,
  MN_UNDERSCORE,
  NH_MINUS,
  EC_SLASH,
  ID_PIPE,

  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

const uint16_t PROGMEM wf_combo[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM fp_combo[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM rs_combo[] = {KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM st_combo[] = {KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM xc_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM cd_combo[] = {KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM wr_combo[] = {KC_W, KC_R, COMBO_END};
const uint16_t PROGMEM fs_combo[] = {KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM pt_combo[] = {KC_P, KC_T, COMBO_END};
const uint16_t PROGMEM bg_combo[] = {KC_B, KC_G, COMBO_END};
const uint16_t PROGMEM rx_combo[] = {KC_R, KC_X, COMBO_END};
const uint16_t PROGMEM sc_combo[] = {KC_S, KC_C, COMBO_END};
const uint16_t PROGMEM td_combo[] = {KC_T, KC_D, COMBO_END};
const uint16_t PROGMEM gv_combo[] = {KC_G, KC_V, COMBO_END};

const uint16_t PROGMEM lu_combo[] = {KC_L,    KC_U,    COMBO_END};
const uint16_t PROGMEM uy_combo[] = {KC_U,    KC_Y,    COMBO_END};
const uint16_t PROGMEM ne_combo[] = {KC_N,    KC_E,    COMBO_END};
const uint16_t PROGMEM ei_combo[] = {KC_E,    KC_I,    COMBO_END};
const uint16_t PROGMEM hC_combo[] = {KC_H,    KC_COMM, COMBO_END};
const uint16_t PROGMEM CD_combo[] = {KC_COMM, KC_DOT,  COMBO_END};
const uint16_t PROGMEM jm_combo[] = {KC_J,    KC_M,    COMBO_END};
const uint16_t PROGMEM ln_combo[] = {KC_L,    KC_N,    COMBO_END};
const uint16_t PROGMEM ue_combo[] = {KC_U,    KC_E,    COMBO_END};
const uint16_t PROGMEM yi_combo[] = {KC_Y,    KC_I,    COMBO_END};
const uint16_t PROGMEM mn_combo[] = {KC_M,    KC_N,    COMBO_END};
const uint16_t PROGMEM nh_combo[] = {KC_N,    KC_H,    COMBO_END};
const uint16_t PROGMEM eC_combo[] = {KC_E,    KC_COMM, COMBO_END};
const uint16_t PROGMEM iD_combo[] = {KC_I,    KC_DOT,  COMBO_END};

combo_t key_combos[] = {
  [WF_ESC]     = COMBO(wf_combo, KC_ESC),
  [FP_ENTER]   = COMBO(fp_combo, KC_ENT),
  [RS_TAB]     = COMBO(rs_combo, KC_TAB),
  [ST_REPEAT]  = COMBO(st_combo, KC_ESC),
  [XC_COPY]    = COMBO(xc_combo, KC_COPY),
  [CD_PASTE]   = COMBO(cd_combo, KC_PASTE),
  [WR_AT]      = COMBO(wr_combo, KC_AT),
  [FS_HASH]    = COMBO(fs_combo, KC_HASH),
  [PT_DOLLAR]  = COMBO(pt_combo, KC_DOLLAR),
  [BG_PERCENT] = COMBO(bg_combo, KC_PERCENT),
  [RX_GRAVE]   = COMBO(rx_combo, KC_GRV),
  [SC_SLASH]   = COMBO(sc_combo, KC_SLASH),
  [TD_EQUAL]   = COMBO(td_combo, KC_EQL),
  [GV_TIDLE]   = COMBO(gv_combo, KC_TILD),
  [LU_BSPC]       = COMBO(lu_combo, KC_BSPC),
  [UY_DELETE]     = COMBO(uy_combo, KC_DEL),
  [NE_BRACKETS]   = COMBO(ne_combo, KC_LPRN),
  [EI_BRACKETS]   = COMBO(ei_combo, KC_RPRN),
  [HC_BRACKETS]   = COMBO(hC_combo, KC_LBRC),
  [CD_BRACKETS]   = COMBO(CD_combo, KC_RBRC),
  [JM_CARET]      = COMBO(jm_combo, KC_CIRC),
  [LN_PLUS]       = COMBO(ln_combo, KC_PLUS),
  [UE_ASTERISK]   = COMBO(ue_combo, KC_ASTR),
  [YI_AMPERSAND]  = COMBO(yi_combo, KC_AMPR),
  [MN_UNDERSCORE] = COMBO(mn_combo, KC_UNDS),
  [NH_MINUS]      = COMBO(nh_combo, KC_MINUS),
  [EC_SLASH]      = COMBO(eC_combo, KC_SLASH),
  [ID_PIPE]       = COMBO(iD_combo, KC_PIPE),
};


// some custom key-combo
#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [C_BASE] = LAYOUT_ansi_69(
        KC_NO,   KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,          KC_MUTE,
        KC_NO,   KC_Q,     KC_W,     KC_F,    KC_P,    KC_B,    KC_J,     KC_L,    KC_U,    KC_Y,    KC_SCLN,  KC_NO,    KC_NO,    KC_NO,          KC_NO,
        KC_NO,   KC_A,     KC_R,     KC_S,    KC_T,    KC_G,              KC_M,    KC_N,    KC_E,    KC_I,     KC_O,     KC_NO,    KC_NO,          KC_NO,
        KC_NO,   KC_Z,     KC_X,     KC_C,    KC_D,    KC_V,    KC_NO,    KC_K,    KC_H,    KC_COMM,  KC_DOT,   KC_SLSH, KC_NO,    KC_UP,
        KC_NO,   KC_NO,    KC_NO,           KC_SPC,    MO(C_FN1),         MO(C_FN2),         KC_SPC,           KC_NO,    KC_NO,    KC_NO,    KC_NO
    ),

    [Q_BASE] = LAYOUT_ansi_69(
        KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
        KC_CAPS, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,           KC_HOME,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
        KC_LCTL, KC_LWIN,  KC_LALT,           KC_SPC,           MO(C_FN1), MO(C_FN2),         KC_SPC,            KC_RALT,            KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [C_FN1] = LAYOUT_ansi_69(
        KC_GRV,  KC_BRID,  KC_BRIU,  KC_TASK, KC_FLXP, RGB_VAD, RGB_VAI,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,          RGB_TOG,
        RGB_TOG, RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, RGB_RMOD, RGB_VAD,  RGB_HUD, RGB_SAD, RGB_SPD,           _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______,           _______,  _______, _______, _______, _______,  _______, NK_TOGG, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______
    ),

    [C_FN2] = LAYOUT_ansi_69(
        KC_TILD, KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,          _______,
        RGB_TOG, RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI, QK_BOOT,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, RGB_RMOD, RGB_VAD,  RGB_HUD, RGB_SAD, RGB_SPD,           _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______,           _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [C_BASE]  = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [Q_BASE]  = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [C_FN1]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [C_FN2]   = {ENCODER_CCW_CW(_______, _______)}
};
#endif // ENCODER_MAP_ENABLE
