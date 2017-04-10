/* ----------------------------------------------------------------------------
 * Copyright (c) 2013, 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * A layout with the home layer adapted from the default Kinesis layout
 * (staying as close the original as possible).  The position of the symbol
 * keys on the function layer was (roughly) taken from the Arensito layout.
 *
 * Implements the "layout" section of '.../firmware/keyboard.h'
 *
 * The template key prefix is `T_`, with the rest of the name indicating the
 * key's position in the QWERTY layout.
 */


#include "../fragments/includes.part.h"
#include "../fragments/macros.part.h"
#include "../fragments/types.part.h"
#include "../fragments/variables.part.h"


// ----------------------------------------------------------------------------
// keys
// ----------------------------------------------------------------------------

#include "../fragments/keys.part.h"


// ----------------------------------------------------------------------------
// LED control
// ----------------------------------------------------------------------------

#include "../fragments/led-control.part.h"


// ----------------------------------------------------------------------------
// matrix control
// ----------------------------------------------------------------------------

#include "../fragments/matrix-control.part.h"


// ----------------------------------------------------------------------------
// Eigene Macros
// ----------------------------------------------------------------------------

void keys__press__curlyL(void) {
 usb__kb__set_key(true, KEYBOARD__RightAlt);
 usb__kb__set_key(true, KEYBOARD__7_Ampersand);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__RightAlt);
 usb__kb__set_key(false, KEYBOARD__7_Ampersand);
}
void R(curlyL)(void) {}

void keys__press__curlyR(void) {
 usb__kb__set_key(true, KEYBOARD__RightAlt);
 usb__kb__set_key(true, KEYBOARD__0_RightParenthesis);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__RightAlt);
 usb__kb__set_key(false, KEYBOARD__0_RightParenthesis);
}
void R(curlyR)(void) {}

void keys__press__sbrackL(void) {
 usb__kb__set_key(true, KEYBOARD__RightAlt);
 usb__kb__set_key(true, KEYBOARD__8_Asterisk);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__RightAlt);
 usb__kb__set_key(false, KEYBOARD__8_Asterisk);
}
void R(sbrackL)(void) {}

void keys__press__sbrackR(void) {
 usb__kb__set_key(true, KEYBOARD__RightAlt);
 usb__kb__set_key(true, KEYBOARD__9_LeftParenthesis);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__RightAlt);
 usb__kb__set_key(false, KEYBOARD__9_LeftParenthesis);
}
void R(sbrackR)(void) {}

void keys__press__leftSlash(void) {
 usb__kb__set_key(true, KEYBOARD__LeftShift);
 usb__kb__set_key(true, KEYBOARD__7_Ampersand);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__LeftShift);
 usb__kb__set_key(false, KEYBOARD__7_Ampersand);
}
void R(leftSlash)(void) {}

void keys__press__rightSlash(void) {
 usb__kb__set_key(true, KEYBOARD__RightAlt);
 usb__kb__set_key(true, KEYBOARD__Dash_Underscore);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__RightAlt);
 usb__kb__set_key(false, KEYBOARD__Dash_Underscore);
}
void R(rightSlash)(void) {}

void keys__press__leftBrack(void) {
 usb__kb__set_key(true, KEYBOARD__RightShift);
 usb__kb__set_key(true, KEYBOARD__8_Asterisk);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__RightShift);
 usb__kb__set_key(false, KEYBOARD__8_Asterisk);
}
void R(leftBrack)(void) {}

void keys__press__rightBrack(void) {
 usb__kb__set_key(true, KEYBOARD__RightShift);
 usb__kb__set_key(true, KEYBOARD__9_LeftParenthesis);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__RightShift);
 usb__kb__set_key(false, KEYBOARD__9_LeftParenthesis);
}
void R(rightBrack)(void) {}

void keys__press__leftEck(void) {
 usb__kb__set_key(true, KEYBOARD__NonUS_Backslash_Pipe);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__NonUS_Backslash_Pipe);
}
void R(leftEck)(void) {}

void keys__press__rightEck(void) {
 usb__kb__set_key(true, KEYBOARD__RightShift);
 usb__kb__set_key(true, KEYBOARD__NonUS_Backslash_Pipe);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__RightShift);
 usb__kb__set_key(false, KEYBOARD__NonUS_Backslash_Pipe);
}
void R(rightEck)(void) {}

void keys__press__pipes(void) {
 usb__kb__set_key(true, KEYBOARD__RightAlt);
 usb__kb__set_key(true, KEYBOARD__NonUS_Backslash_Pipe);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__RightAlt);
 usb__kb__set_key(false, KEYBOARD__NonUS_Backslash_Pipe);
}
void R(pipes)(void) {}

void keys__press__tildeEx(void) {
 usb__kb__set_key(true, KEYBOARD__RightAlt);
 usb__kb__set_key(true, KEYBOARD__RightBracket_RightBrace);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__RightAlt);
 usb__kb__set_key(false, KEYBOARD__RightBracket_RightBrace);
}
void R(tildeEx)(void) {}

void keys__press__stern(void) {
 usb__kb__set_key(true, KEYBOARD__RightShift);
 usb__kb__set_key(true, KEYBOARD__RightBracket_RightBrace);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__RightShift);
 usb__kb__set_key(false, KEYBOARD__RightBracket_RightBrace);
}
void R(stern)(void) {}

void keys__press__leftQuote(void) {
 usb__kb__set_key(true, KEYBOARD__Equal_Plus);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__Equal_Plus);
}
void R(leftQuote)(void) {}

void keys__press__gleich(void) {
 usb__kb__set_key(true, KEYBOARD__Equal_Plus);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__Equal_Plus);
}
void R(gleich)(void) {}

void keys__press__rightQuote(void) {
 usb__kb__set_key(true, KEYBOARD__RightShift);
 usb__kb__set_key(true, KEYBOARD__Equal_Plus);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__RightShift);
 usb__kb__set_key(false, KEYBOARD__Equal_Plus);
}
void R(rightQuote)(void) {}

void keys__press__straightQuote(void) {
 usb__kb__set_key(true, KEYBOARD__RightShift);
 usb__kb__set_key(true, KEYBOARD__Backslash_Pipe);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__RightShift);
 usb__kb__set_key(false, KEYBOARD__Backslash_Pipe);
}
void R(straightQuote)(void) {}

void keys__press__qmark(void) {
 usb__kb__set_key(true, KEYBOARD__RightShift);
 usb__kb__set_key(true, KEYBOARD__Dash_Underscore);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__RightShift);
 usb__kb__set_key(false, KEYBOARD__Dash_Underscore);
}
void R(qmark)(void) {}

void keys__press__atsign(void) {
 usb__kb__set_key(true, KEYBOARD__RightAlt);
 usb__kb__set_key(true, KEYBOARD__q_Q);
 usb__kb__send_report();
 usb__kb__set_key(false, KEYBOARD__RightAlt);
 usb__kb__set_key(false, KEYBOARD__q_Q);
}
void R(atsign)(void) {}

 
// ----------------------------------------------------------------------------
// layout
// ----------------------------------------------------------------------------

static layout_t layout PROGMEM = {
// ............................................................................

    MATRIX_LAYER(  // layer 0 : default
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   grave,        1,        2,        3,        4,        5,      esc,
    caps,      T_q,      T_w,      T_e,      T_r,      T_t,   lpu2l2,
     tab,      T_a,      T_s,      T_d,      T_f,      T_g,
shL2kcap,      T_z,      T_x,      T_c,      T_v,      T_b,    pipes,
 leftEck, rightEck,   arrowL,   arrowR, lpupo1l1,
                                                                 end,     home,
                                                       nop,      nop,     altL,
                                                        bs,      del,     ctrlL,
// right hand ..... ......... ......... ......... ......... ......... .........
                F5,        6,        7,        8,        9,        0,     dash,
            lpu2l2,      T_y,      T_u,      T_i,      T_o,      T_p,    brktL,
                         T_h,      T_j,      T_k,      T_l,T_semicol,  T_quote,
             stern,      T_n,      T_m,  T_comma, T_period,  T_slash, shR2kcap,
                              lpupo1l1,   arrowU,   arrowD,  tildeEx,    brktR,
   pageU,    pageD,
    altR,      nop,      nop,
   ctrlR,    enter,    space  ),

// ............................................................................


    MATRIX_LAYER(  // layer 1 : symbols and function keys
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,       F1,       F2,       F3,       F4,       F5,      F11,
  transp,        1,        2,        3,        4,        5,   transp,
  transp,  sbrackL,  sbrackR,   curlyL,   curlyR,  bkslash,
  transp,straightQuote, leftQuote,rightQuote,home,   pageD,   transp,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,      ins,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               F12,       F6,       F7,       F8,       F9,       F10,     power,
            transp,        6,        7,         8,        9,        0,  volumeU,
                      parenR,leftSlash,rightSlash,leftBrack,rightBrack, volumeD,
            transp,    pageU,      end,    atsign,   transp,    transp,     mute,
                                transp,    transp,   transp,    transp,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................


    MATRIX_LAYER(  // layer 2 : number pad
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   btldr,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,   lpo2l2,
     nop,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,      ins,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
            transp,      nop,      nop,      nop,    kpMul,    kpDiv,   transp,
            lpo2l2,      nop,        7,        8,        9,    kpSub,   transp,
                         nop,        4,        5,        6,    kpAdd,   transp,
            transp,      nop,        1,        2,        3,    enter,   transp,
                                   nop,      nop,   period,    enter,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,        0  ),

// ............................................................................



    MATRIX_LAYER(  // layer 3 : keyboard functions
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   btldr,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       nop,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop, dmp_sram,
               nop,      nop,      nop,      nop,      nop,      nop, dmp_prog,
                         nop,      nop,      nop,      nop,      nop, dmp_eepr,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),

// ............................................................................
};
