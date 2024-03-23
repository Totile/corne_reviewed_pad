#include QMK_KEYBOARD_H
#include "features/custom_shift_keys.h"

#define LALT_KQU LALT_T(KC_QUOT)
#define LCTL_KK LCTL_T(KC_K)
#define U_EACU XP(EACUMI, EACUMA)
#define U_EACG XP(EACGMI, EACGMA)
#define U_CEDIL XP(CEDILMI, CEDILMA)
#define U_AACU XP(AACMI, AACMA)
#define U_AACCIR XP(AACCIRMI, AACCIRMA)
#define U_ATREM XP(ATREMI, ATREMA)
#define U_EACCIR XP(EACCIRMI, EACCIRMA)
#define U_ETREM XP(ETREMI, ETREMA)
#define U_OACCIR XP(OACCIRMI, OACCIRMA)
#define U_OTREM XP(OTREMI, OTREMA)
#define U_OE XP(OEMI, OEMA)
#define U_UACCIR XP(UACCIRMI, UACCIRMA)
#define U_UTREM XP(UTREMI, UTREMA)
#define U_UACU XP(UACUMI, UACUMA)
#define U_ITREM XP(ITREMI, ITREMA)
#define U_IACCIR XP(IACCIRMI, IACCIRMA)
#define U_SMCOLA XP(SMCOSW, SMLAUGH)
#define U_SMAROK XP(SMFEARM, SMOK)
#define U_SMFAUNO XP(SMFAPALM, SMUNKNO)
#define U_DOLABK X(DOLABK)
#define U_DORABK X(DORABK)

enum custom_keycodes {
  M_LABK,
  M_RABK,
  M_SLSH,
  M_SPCUND,
};

const custom_shift_key_t custom_shift_keys[] = {
  {KC_LPRN , KC_LCBR}, // Shift ( is {
  {KC_RPRN , KC_RCBR}, // Shift ) is }
  {KC_LBRC , KC_LCBR}, // Shift [ is }
  {KC_RBRC , KC_RCBR}, // Shift ] is {
  {KC_DOT  , KC_COLN}, // Shift . is :
  {KC_COMM , KC_SCLN}, // Shift , is ;
  {KC_QUES , KC_EXLM}, // Shift . is :
  {KC_1    , KC_F1}, // Shift 1 is F1
  {KC_2    , KC_F2}, // Shift 2 is F2
  {KC_3    , KC_F3}, // Shift 3 is F3
  {KC_4    , KC_F4}, // Shift 4 is F4
  {KC_5    , KC_F5}, // Shift 5 is F5
  {KC_6    , KC_F6}, // Shift 6 is F6
  {KC_7    , KC_F7}, // Shift 7 is F7
  {KC_8    , KC_F8}, // Shift 8 is F8
  {KC_9    , KC_F9}, // Shift 9 is F9
  {KC_0    , KC_F10}, // Shift 0 is F10
  {KC_PLUS , KC_F11}, // Shift + is F11
  {KC_EQL  , KC_F12}, // Shift = is F12
  {KC_VOLU , KC_VOLD}, // Shift volume up is volume down
  {KC_BRIU , KC_BRID}, // Shift brightness up is brightness down
};

uint8_t NUM_CUSTOM_SHIFT_KEYS =
    sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);

enum unicode_names {
    EACUMI,
    EACUMA,
    EACGMI,
	  EACGMA,
    CEDILMI,
    CEDILMA,
    AACMI,
    AACMA,
    AACCIRMI,
    AACCIRMA,
    ATREMI,
    ATREMA,
    EACCIRMI,
    EACCIRMA,
    ETREMI,
    ETREMA,
    EUR,
    OACCIRMI,
    OACCIRMA,
    OTREMI,
    OTREMA,
    OEMI,
    OEMA,
    IACCIRMI,
    IACCIRMA,
    ITREMI,
    ITREMA,
    UACCIRMI,
    UACCIRMA,
    UTREMI,
    UTREMA,
    UACUMI,
    UACUMA,
    ESZETT,
    SMCOSW,
    SMLAUGH,
    SMFEARM,
    SMOK,
    SMFAPALM,
    SMUNKNO,
    DOLABK,
    DORABK,
};

const uint32_t unicode_map[] PROGMEM = {
    [EACUMI]  = 0x00E9,  // é
    [EACUMA] = 0x00C9,  // É
    [EACGMI]  = 0x00E8, // è
    [EACGMA]  = 0x00C8, // È
    [CEDILMI]  = 0x00E7, // ç
    [CEDILMA]  = 0x00C7, // Ç
    [AACMI]  = 0x00E0, // à
    [AACMA]  = 0x00C0, // À
    [AACCIRMI]  = 0x00E2, // â
    [AACCIRMA]  = 0x00C2, // Â
    [ATREMI]  = 0x00E4, // ä
    [ATREMA]  = 0x00C4, // Ä
    [EACCIRMI]  = 0x00EA, // ê
    [EACCIRMA]  = 0x00CA, // Ê
    [ETREMI]  = 0x00EB, // ë
    [ETREMA]  = 0x00CB, // Ë
    [EUR]  = 0x20AC, // €
    [OACCIRMI]  = 0x00F4, // ô
    [OACCIRMA]  = 0x00D4, // Ô
    [OTREMI]  = 0x00F6, // ö
    [OTREMA]  = 0x00D6, // Ö
    [OEMI]  = 0x0153, // œ
    [OEMA] = 0x0152, // Œ
    [IACCIRMI]  = 0x00EE, // î
    [IACCIRMA]  = 0x00CE, // Î
    [ITREMI]  = 0x00EF, // ï
    [ITREMA]  = 0x00CF, // Ï
    [UACCIRMI]  = 0x00FB, // û
    [UACCIRMA]  = 0x00DB, // Û
    [UTREMI]  = 0x00FC, // ü
    [UTREMA]  = 0x00DC, // Ü
    [UACUMI]  = 0x00F9, // ù
    [UACUMA]  = 0x00D9, // Ù
    [ESZETT]  = 0x00DF, // Ù
    [SMCOSW] = 0x1F605, // 😅
    [SMLAUGH] = 0x1F602, // 😅
    [SMFEARM] = 0x1F646, // 🙆🏼‍♀️
    [SMOK] = 0x1F44C, // 👌
    [SMFAPALM] = 0x1F926, // 🤦‍♀️
    [SMUNKNO] = 0x1F937, // 🤷‍♀️
    [DOLABK] = 0x00AB, // «
    [DORABK] = 0x00BB, // »
};

enum layers {
  _BASE,
  _DEAD,
  _SYM,
  _FUNC,
  _NAV,
  _MOUSE,
  _NUMPAD,
  _LETPAD,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_split_3x6_3(
  //-----------------------------------------------------------------|------------------------------------------------------------------
		KC_TAB,    KC_B,      U_EACU,    KC_P,      KC_O,      U_EACG,    OSL(_DEAD),KC_V,      KC_D,      KC_L,      KC_J,      KC_DEL,
  //-------------------------------------------------------S(KC_SCLN)|------------------------------------------------------------------
	  KC_ESC,    KC_A,      KC_U,      KC_I,      KC_E,      KC_COMM,   KC_C,      KC_T,      KC_S,      KC_R,      KC_N,      KC_ENT,
  //--------------------------------------------S(KC_CLN)------------|S(")--------------------------------------------------------------
		KC_Z,      KC_W,      KC_Y,      KC_X,      KC_DOT,    LCTL_KK,   LALT_KQU,  KC_Q,      KC_G,      KC_H,      KC_F,      KC_M,
  //-------------------------------                                  |                                 -----------S(KC_UNDS)------------
    TO(_SYM),  KC_BSPC,   KC_LSFT,                                                                     KC_LGUI,   M_SPCUND,  TO(_NAV)
		),

  [_DEAD] = LAYOUT_split_3x6_3(
		KC_ESC,    U_ATREM,   U_UTREM,   U_ITREM,   U_ETREM,   U_OTREM,   OSL(_DEAD),_______,   _______,   U_SMFAUNO, _______,   _______,
		KC_TAB,    U_AACCIR,  U_UACCIR,  U_IACCIR,  U_EACCIR,  U_OACCIR,  U_CEDIL,   _______,   X(ESZETT), U_SMAROK,  _______,   _______,
		KC_ENT,    U_AACU,    U_UACU,    _______,   X(EUR),    U_OE,      _______,   _______,   _______,   U_SMCOLA,  _______,   KC_DEL,
    TO(_SYM),  KC_DEL,    KC_LSFT,                                                                     KC_LCTL,   TO(_BASE), TO(_NAV)
		),

  [_NAV] = LAYOUT_split_3x6_3(
  //s(../)-----S(KC_F7)---S(KC_F8)----S(KC_F9)--S(KC_UNDS)-S(KC_F10)|-------------------------------------------------------------------
		M_SLSH,    KC_7,      KC_8,       KC_9,     KC_MINS,   KC_PLUS,  OSL(_DEAD),TO(_MOUSE),KC_HOME,   KC_END,    TO(_FUNC),   _______,
  //-----------S(KC_F4)---S(KC_F5)----S(KC_F6)--S(KC_F10)--S(KC_CLN)|-------------------------------------------------------------------
		KC_ASTR,   KC_4,      KC_5,       KC_6,     KC_0,      KC_COMM,  KC_UP,     KC_DOWN,   KC_LEFT,   KC_RIGHT,  KC_LGUI,   _______,
  //-----------S(KC_F1)---S(KC_F2)----S(KC_F3)-S(KC_SCLN)--S(KC_F12)|-------------------------------------------------------------------
		KC_PERC,   KC_1,      KC_2,       KC_3,     KC_DOT,    KC_EQL,   KC_LALT,   LGUI(KC_1),LGUI(KC_2),LGUI(KC_3),LGUI(KC_4),KC_DEL,
    TO(_SYM),  KC_BSPC,   KC_LSFT,                                                                    KC_LCTL,   TO(_BASE), TO(_NAV)
		),

  [_FUNC] = LAYOUT_split_3x6_3(
  //s(../)-----S(KC_F7)---S(KC_F8)----S(KC_F9)--S(KC_UNDS)-S(KC_F10)|-------------------------------------------------------------------
		M_SLSH,    KC_F7,     KC_F8,      KC_F9,    KC_MINS,   KC_PLUS,  OSL(_DEAD),TO(_MOUSE),KC_HOME,   KC_END,    TO(_FUNC),  _______,
  //-----------S(KC_F4)---S(KC_F5)----S(KC_F6)--S(KC_F10)--S(KC_CLN)|-------------------------------------------------------------------
		KC_ASTR,   KC_F4,     KC_F5,      KC_F6,    KC_0,      KC_COMM,  KC_UP,     KC_DOWN,   KC_LEFT,   KC_RIGHT,  KC_LGUI,   _______,
  //-----------S(KC_F1)---S(KC_F2)----S(KC_F3)-S(KC_SCLN)--S(KC_F12)|-------------------------------------------------------------------
		KC_PERC,   KC_F1,     KC_F2,      KC_F3,     KC_DOT,    KC_EQL,   KC_LALT,   LGUI(KC_1),LGUI(KC_2),LGUI(KC_3),LGUI(KC_4),KC_DEL,
    TO(_SYM),  KC_BSPC,   KC_LSFT,                                                                    KC_LCTL,   TO(_BASE), TO(_NAV)
		),

  [_SYM] = LAYOUT_split_3x6_3(
  //s(../)--------------------------------------S(KC_UNDS)-----------|-----------S(«)-------S(»)-----------------------------------------
		M_SLSH,    _______,   _______,   KC_CIRC,   KC_MINS,   KC_PLUS,   OSL(_DEAD),KC_LT,     KC_GT,     U_DOLABK,   U_DORABK, _______,
  //-----------S(KC_EXCL)--------------------------------------------|-----------S({)-------S(})-----------------------------------------
		KC_ASTR,   KC_QUES,   KC_TILD,   KC_UNDS,   KC_AT,     KC_AMPR,   KC_HASH,   KC_LPRN,   KC_RPRN,   KC_DLR,    _______,   _______,
  //----------------------S(KC_PIPE)------------S(KC_SCLN)-----------|S(KC_TILD)-S({)-------S(})é------------------------------------------
		_______,   _______,   KC_BSLS,   KC_PIPE,   KC_DOT,    KC_EQL,    KC_GRV,    KC_LBRC,   KC_RBRC,   _______,   _______,   _______,
    TO(_SYM),  KC_BSPC,   KC_LSFT,                                                                     KC_LCTL,   TO(_BASE), TO(_NAV)
		),
    
  [_MOUSE] = LAYOUT_split_3x6_3(
		UC_NEXT,   _______,   KC_MUTE,   KC_ACL2,   KC_ACL1,   KC_ACL2,   KC_WH_U,   KC_WH_D,   KC_WH_L,   KC_WH_R,   _______,   _______,
	TO(_NUMPAD), KC_BRIU,   KC_VOLU,   KC_ACL1,   KC_BTN1,   KC_BTN2,   KC_MS_U,   KC_MS_D,   KC_MS_L,   KC_MS_R,   _______,   _______,
		_______,   _______,   _______,   KC_BTN3,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,

    TO(_SYM),  KC_BSPC,   KC_LSFT,                                                                     KC_LCTL,   TO(_BASE), TO(_NAV)
		),

  [_NUMPAD] = LAYOUT_split_3x6_3(
  //s(../)-----S(KC_F7)---S(KC_F8)----S(KC_F9)--S(KC_UNDS)-S(KC_F10)|-------------------------------------------------------------------
		M_SLSH,    KC_7,      KC_8,       KC_9,     KC_MINS,   KC_PLUS,  XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,
  //-----------S(KC_F4)---S(KC_F5)----S(KC_F6)--S(KC_F10)--S(KC_CLN)|-------------------------------------------------------------------
		KC_ASTR,   KC_4,      KC_5,       KC_6,     KC_0,      KC_COMM,  XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,
  //-----------S(KC_F1)---S(KC_F2)----S(KC_F3)-S(KC_SCLN)--S(KC_F12)|-------------------------------------------------------------------
		KC_PERC,   KC_1,      KC_2,       KC_3,     KC_DOT,    KC_EQL,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,
    TO(_LETPAD),KC_BSPC,  KC_LSFT,                                                                    TO(_BASE), TO(_BASE), TO(_BASE)
		),

  [_LETPAD] = LAYOUT_split_3x6_3(
 		KC_ESC,   KC_B,       KC_Z,       KC_N,     KC_M,      XXXXXXX,  XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,
		KC_TAB,   KC_E,       KC_T,       KC_S,     KC_LALT,   KC_SPC,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,
		KC_ENT,   XXXXXXX,    XXXXXXX,    XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,
    TO(_NUMPAD),  KC_LCTL,    KC_LSFT,                                                                    TO(_BASE), TO(_BASE), TO(_BASE)
		),
};



/*
  [_LOWER] = LAYOUT_split_3x6_3(
		_______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
		_______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
		_______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
    _______,   _______,   _______,                                                                     _______,   _______,   _______
		),
          case M_APOESC:
      if (record->event.pressed) {
        if ((mods | oneshot_mods) & MOD_MASK_SHIFT) {
          del_oneshot_mods(MOD_MASK_SHIFT);
          unregister_mods(MOD_MASK_SHIFT);  
          SEND_STRING(SS_TAP(X_ESC));
          register_mods(mods);
        } else {
          tap_code(KC_QUOT);
        }
      }
      return false;
*/

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_custom_shift_keys(keycode, record)) { return false; }
  const uint8_t mods = get_mods();
  const uint8_t oneshot_mods = get_oneshot_mods();

  switch (keycode) {
    case M_LABK:
      if (record->event.pressed) {
        if ((mods | oneshot_mods) & MOD_MASK_SHIFT) {
          del_oneshot_mods(MOD_MASK_SHIFT);
          unregister_mods(MOD_MASK_SHIFT);  
          send_unicode_string("«");
          register_mods(mods);
        } else {
          send_unicode_string("<");
        }
      }
      return false;

    case M_RABK:
      if (record->event.pressed) {
        if ((mods | oneshot_mods) & MOD_MASK_SHIFT) {
          del_oneshot_mods(MOD_MASK_SHIFT);
          unregister_mods(MOD_MASK_SHIFT);  
          send_unicode_string("»");
          register_mods(mods);
        } else {
          send_unicode_string(">");
        }
      }
      return false;

    case M_SLSH:
      if (record->event.pressed) {
        if ((mods | oneshot_mods) & MOD_MASK_SHIFT) {
          del_oneshot_mods(MOD_MASK_SHIFT);
          unregister_mods(MOD_MASK_SHIFT);  
          tap_code(KC_DOT);
          SEND_STRING(SS_DELAY(20));
          tap_code(KC_DOT);
          SEND_STRING(SS_DELAY(20));
          tap_code(KC_SLSH);
          register_mods(mods);
        } else {
          tap_code(KC_SLSH);
        }
      }
      return false;

    case M_SPCUND:
      if (record->event.pressed) {
        if ((mods | oneshot_mods) & MOD_MASK_SHIFT) {
          del_oneshot_mods(MOD_MASK_SHIFT);
          unregister_mods(MOD_MASK_SHIFT);  
          SEND_STRING("_");
          register_mods(mods);
        } else {
          SEND_STRING(SS_TAP(X_SPC));
        }
      }
      return false;

  }
  return true;
}

/*
LEADER_EXTERNS();
void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();
    SEQ_ONE_KEY(KC_SPC) {
      SEND_STRING("^");
    }

    SEQ_ONE_KEY(KC_A) {
      send_unicode_string("â");
    }
    SEQ_TWO_KEYS(KC_LSFT, KC_A) {
      send_unicode_string("Â");
    }
    SEQ_TWO_KEYS(KC_LCTL, KC_A) {
      send_unicode_string("ä");
    }
    SEQ_THREE_KEYS(KC_LCTL, KC_LSFT, KC_A) {
      send_unicode_string("Ä");
    }

    SEQ_ONE_KEY(KC_E) {
      send_unicode_string("ê");
    }
    SEQ_TWO_KEYS(KC_LSFT, KC_E) {
      send_unicode_string("Ê");
    }
    SEQ_TWO_KEYS(KC_LCTL, KC_E) {
      send_unicode_string("ë");
    }
    SEQ_THREE_KEYS(KC_LCTL, KC_LSFT, KC_E) {
      send_unicode_string("Ë");
    }
    SEQ_TWO_KEYS(KC_SPC, KC_E) {
      send_unicode_string("€");
    }

    SEQ_ONE_KEY(KC_I) {
      send_unicode_string("î");
    }
    SEQ_TWO_KEYS(KC_LSFT, KC_I) {
      send_unicode_string("Î");
    }
    SEQ_TWO_KEYS(KC_LCTL, KC_I) {
      send_unicode_string("ä");
    }
    SEQ_THREE_KEYS(KC_LCTL, KC_LSFT, KC_I) {
      send_unicode_string("ä");
    }

    SEQ_ONE_KEY(KC_O) {
      send_unicode_string("ô");
    }
    SEQ_TWO_KEYS(KC_LSFT, KC_O) {
      send_unicode_string("Ô");
    }
    SEQ_TWO_KEYS(KC_LCTL, KC_O) {
      send_unicode_string("ö");
    }
    SEQ_THREE_KEYS(KC_LCTL, KC_LSFT, KC_O) {
      send_unicode_string("Ö");
    }

    SEQ_ONE_KEY(KC_U) {
      send_unicode_string("û");
    }
    SEQ_TWO_KEYS(KC_LSFT, KC_U) {
      send_unicode_string("Û");
    }
    SEQ_TWO_KEYS(KC_LCTL, KC_U) {
      send_unicode_string("ü");
    }
    SEQ_THREE_KEYS(KC_LCTL, KC_LSFT, KC_U) {
      send_unicode_string("Ü");
    }
    SEQ_TWO_KEYS(KC_SPC, KC_U) {
      send_unicode_string("ù");
    }
    SEQ_THREE_KEYS(KC_SPC, KC_LSFT, KC_U) {
      send_unicode_string("Ù");
    }

    SEQ_ONE_KEY(KC_S) {
      send_unicode_string("ß");
    }
  }
}
*/

/*
// Don't allow for call of function inside the override
const key_override_t FR_EACU = ko_make_basic(MOD_MASK_SHIFT, UC(0x00E9), UC(0x00C9));

const key_override_t **key_overrides = (const key_override_t *[]){
    &FR_EACU,
    NULL
};
*/
