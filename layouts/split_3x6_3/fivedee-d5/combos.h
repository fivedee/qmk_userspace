#include "layers.h"

enum combos { 
  C_K_DEL,
  K_W_BSPC,
  C_W_Z,
  E_T_O,
  T_R_A,
  E_R_X,
  S_D_ENT,
  D_M_TAB,
  S_M_Q,
  U_I_UI,
  B_F_BSPC,
  F_G_ESC,
  B_G_Z,
  L_N_I,
  N_E_U,
  L_E_X,
  H_P_TAB,
  P_S_ENT,
  H_S_Q,
  A_O_OA,
  E_C_EC,
  E_S_ES,
  E_S_ES_R,
  K_T_KT,
  D_T_DT,
  W_R_WR,
  R_M_RM,
  Y_V_RV,
  Y_J_BJ,
  B_L_BL,
  H_L_HL,
  N_F_NF,
  N_P_NP,
  E_G_EG,
  U_O_NAV,
  I_A_PUN

  
};

const uint16_t PROGMEM c_k_del[] = { KC_C, KC_K, COMBO_END};
const uint16_t PROGMEM k_w_bspc[] = { KC_K, KC_W, COMBO_END};
const uint16_t PROGMEM c_w_z[] = { KC_C, KC_W, COMBO_END};
const uint16_t PROGMEM e_t_o[] = { LALT_T(KC_E), LCTL_T(KC_T), COMBO_END};
const uint16_t PROGMEM t_r_a[] = { LCTL_T(KC_T), LGUI_T(KC_R), COMBO_END};
const uint16_t PROGMEM e_r_x[] = { LALT_T(KC_E), LGUI_T(KC_R), COMBO_END};
const uint16_t PROGMEM s_d_ent[] = { KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM d_m_tab[] = { KC_D, KC_M, COMBO_END};
const uint16_t PROGMEM s_m_q[] = { KC_S, KC_M, COMBO_END};
const uint16_t PROGMEM u_i_ui[] = { LSFT_T(KC_U), LT(_NUM, KC_I), COMBO_END};
const uint16_t PROGMEM b_f_bspc[] = { KC_B, KC_F, COMBO_END};
const uint16_t PROGMEM f_g_esc[] = { KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM b_g_z[] = { KC_B, KC_G, COMBO_END};
const uint16_t PROGMEM l_n_i[] = { RGUI_T(KC_L), RCTL_T(KC_N), COMBO_END};
const uint16_t PROGMEM n_e_u[] = { RCTL_T(KC_N), RALT_T(KC_E), COMBO_END};
const uint16_t PROGMEM l_e_x[] = { RGUI_T(KC_L), RALT_T(KC_E), COMBO_END};
const uint16_t PROGMEM h_p_tab[] = { KC_H, KC_P, COMBO_END};
const uint16_t PROGMEM p_s_ent[] = { KC_P, KC_S, COMBO_END};
const uint16_t PROGMEM h_s_q[] = { KC_H, KC_S, COMBO_END};
const uint16_t PROGMEM a_o_oa[] = { LT(_SYM, KC_A), RSFT_T(KC_O), COMBO_END};
const uint16_t PROGMEM e_c_ec[] = { LALT_T(KC_E), KC_C, COMBO_END};
const uint16_t PROGMEM e_s_es[] = { LALT_T(KC_E), KC_S, COMBO_END};
const uint16_t PROGMEM e_s_es_r[] = { RALT_T(KC_E), KC_S, COMBO_END};
const uint16_t PROGMEM k_t_kt[] = { KC_K, LCTL_T(KC_T), COMBO_END};
const uint16_t PROGMEM d_t_dt[] = { KC_D, LCTL_T(KC_T), COMBO_END};
const uint16_t PROGMEM w_r_wr[] = { KC_W, LGUI_T(KC_R), COMBO_END};
const uint16_t PROGMEM r_m_rm[] = { LGUI_T(KC_R), KC_M, COMBO_END};
const uint16_t PROGMEM y_v_rv[] = { KC_Y, KC_V, COMBO_END};
const uint16_t PROGMEM y_j_bj[] = { KC_Y, KC_J, COMBO_END};
const uint16_t PROGMEM b_l_bl[] = { KC_B, RGUI_T(KC_L), COMBO_END};
const uint16_t PROGMEM h_l_hl[] = { KC_H, RGUI_T(KC_L), COMBO_END};
const uint16_t PROGMEM n_f_nf[] = { RCTL_T(KC_N), KC_F, COMBO_END};
const uint16_t PROGMEM n_p_np[] = { RCTL_T(KC_N), KC_P, COMBO_END};
const uint16_t PROGMEM e_g_eg[] = { RALT_T(KC_E), KC_G, COMBO_END};
const uint16_t PROGMEM u_o_nav[] = { LSFT_T(KC_U), RSFT_T(KC_O), COMBO_END};
const uint16_t PROGMEM i_a_pun[] = { LT(_NUM, KC_I), LT(_SYM, KC_A), COMBO_END};

combo_t key_combos[] = {
  [C_K_DEL] = COMBO(c_k_del, KC_DEL),
  [K_W_BSPC] = COMBO(k_w_bspc, KC_BSPC),
  [C_W_Z] = COMBO(c_w_z, KC_Z),
  [E_T_O] = COMBO(e_t_o, KC_O),
  [T_R_A] = COMBO(t_r_a, KC_A),
  [E_R_X] = COMBO(e_r_x, KC_X),
  [S_D_ENT] = COMBO(s_d_ent, KC_ENT),
  [D_M_TAB] = COMBO(d_m_tab, KC_TAB),
  [S_M_Q] = COMBO(s_m_q, KC_Q),
  [U_I_UI] = COMBO_ACTION(u_i_ui),
  [B_F_BSPC] = COMBO(b_f_bspc, KC_BSPC),
  [F_G_ESC] = COMBO(f_g_esc, KC_ESC),
  [B_G_Z] = COMBO(b_g_z, KC_Z),
  [L_N_I] = COMBO(l_n_i, KC_I),
  [N_E_U] = COMBO(n_e_u, KC_U),
  [L_E_X] = COMBO(l_e_x, KC_X),
  [H_P_TAB] = COMBO(h_p_tab, KC_TAB),
  [P_S_ENT] = COMBO(p_s_ent, KC_ENT),
  [H_S_Q] = COMBO(h_s_q, KC_Q),
  [A_O_OA] = COMBO_ACTION(a_o_oa),
  [E_C_EC] = COMBO_ACTION(e_c_ec),
  [E_S_ES] = COMBO_ACTION(e_s_es),
  [E_S_ES_R] = COMBO_ACTION(e_s_es_r),
  [K_T_KT] = COMBO_ACTION(k_t_kt),
  [D_T_DT] = COMBO_ACTION(d_t_dt),
  [W_R_WR] = COMBO_ACTION(w_r_wr),
  [R_M_RM] = COMBO_ACTION(r_m_rm),
  [Y_V_RV] = COMBO_ACTION(y_v_rv),
  [Y_J_BJ] = COMBO_ACTION(y_j_bj),
  [B_L_BL] = COMBO_ACTION(b_l_bl),
  [H_L_HL] = COMBO_ACTION(h_l_hl),
  [N_F_NF] = COMBO_ACTION(n_f_nf),
  [N_P_NP] = COMBO_ACTION(n_p_np),
  [E_G_EG] = COMBO_ACTION(e_g_eg),
  [U_O_NAV] = COMBO(u_o_nav, MO(_NAV)),
  [I_A_PUN] = COMBO(i_a_pun, MO(_PUN)),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case U_I_UI:
      if (pressed) {
        tap_code(KC_U);
        tap_code(KC_I);
      }
      break;
    case A_O_OA:
      if (pressed) {
        tap_code(KC_O);
        tap_code(KC_A);
      }
      break;
    case E_C_EC:
      if (pressed) {
        tap_code(KC_E);
        tap_code(KC_C);
      }
      break;
    case E_S_ES:
      if (pressed) {
        tap_code(KC_E);
        tap_code(KC_S);
      }
    case E_S_ES_R:
      if (pressed) {
        tap_code(KC_E);
        tap_code(KC_S);
      }
      break;
    case K_T_KT:
      if (pressed) {
        tap_code(KC_K);
        tap_code(KC_T);
      }
      break;
    case D_T_DT:
      if (pressed) {
        tap_code(KC_D);
        tap_code(KC_T);
      }
      break;
    case W_R_WR:
      if (pressed) {
        tap_code(KC_W);
        tap_code(KC_R);
      }
      break;
    case R_M_RM:
      if (pressed) {
        tap_code(KC_R);
        tap_code(KC_M);
      }
      break;
    case Y_V_RV:
      if (pressed) {
        tap_code(KC_R);
        tap_code(KC_V);
      }
      break;
    case Y_J_BJ:
      if (pressed) {
        tap_code(KC_B);
        tap_code(KC_J);
      }
      break;
    case B_L_BL:
      if (pressed) {
        tap_code(KC_B);
        tap_code(KC_L);
      }
      break;
    case H_L_HL:
      if (pressed) {
        tap_code(KC_H);
        tap_code(KC_L);
      }
      break;
    case N_F_NF:
      if (pressed) {
        tap_code(KC_N);
        tap_code(KC_F);
      }
      break;
    case N_P_NP:
      if (pressed) {
        tap_code(KC_N);
        tap_code(KC_P);
      }
      break;
    case E_G_EG:
      if (pressed) {
        tap_code(KC_E);
        tap_code(KC_G);
      }
      break;
    }
  }