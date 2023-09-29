// Copyright 2023 Gyozo Gaspar
//
// This file is part of Lottie layout. The Lottie layout is free
// software: you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation, either version 3 of the License, or (at your option)
// any later version.  The Lottie layout is distributed in the hope
// that it will be useful, but WITHOUT ANY WARRANTY; without even the
// implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
// PURPOSE. See the GNU General Public License for more details.  You
// should have received a copy of the GNU General Public License along
// with Lottie layout. If not, see <https://www.gnu.org/licenses/>.

#pragma once

#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/rgb.h>
#include <dt-bindings/zmk/outputs.h>
#include <dt-bindings/zmk/ext_power.h>

#include "layers.h"

/ {
    macros {
 // wait-ms and tap-ms value
 // ---
 //
 // Executing an accented macro should not take longer than tapping a dedicated
 // key at maximum speed(300 WPM).
 //
 // 38 WPM -> 188 CPM, so 300 WPM -> (* 188 (/ 300 38)) = 1316 CPM =
 // (/ 1316 60) CPS = 21 CPS
 //
 // Hitting keys close to 50 ms / keypress is humanly possible.

        ZMK_MACRO(m_again_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LCTRL>
                , <&macro_tap     &kp Y>
                , <&macro_release &kp LCTRL>
                ;
        )

        ZMK_MACRO(m_paste_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LCTRL>
                , <&macro_tap     &kp V>
                , <&macro_release &kp LCTRL>
                ;
        )

        ZMK_MACRO(m_copy_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LCTRL>
                , <&macro_tap     &kp C>
                , <&macro_release &kp LCTRL>
                ;
        )

        ZMK_MACRO(m_cut_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LCTRL>
                , <&macro_tap     &kp X>
                , <&macro_release &kp LCTRL>
                ;
        )

        ZMK_MACRO(m_undo,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LCTRL>
                , <&macro_tap     &kp Y>
                , <&macro_release &kp LCTRL>
                ;
        )

        ZMK_MACRO(m_e_acute_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp SEMI>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_o_acute_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp EQUAL>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_i_acute_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp NUBS>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_u_acute_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp RBKT>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_a_acute_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp SQT>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_o_dacute_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp LBKT>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_u_dacute_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp BSLH>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_o_diaresis_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp N0>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_u_diaresis_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp MINUS>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_par_dir,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap  &kp DOT &kp DOT &kp FSLH>
                ;
        )

        ZMK_MACRO(m_scope,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap  &kp COLON &kp COLON>
                ;
        )

        ZMK_MACRO(m_lpar_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N8>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_rpar_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N9>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_star_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp FSLH>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_excl_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N4>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_semi_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp COMMA>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_colon_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp DOT>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_minus_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp FSLH>
                ;
        )

        ZMK_MACRO(m_under_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp QMARK>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_grave_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp N7>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_caret_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp N3>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_carethulc_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp GRAVE>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_lt_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp M>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_gt_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp DOT>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_plus_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N3>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_equal_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N7>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_bslh_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp Q>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_hash_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp X>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_par_dir_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp DOT>
                , <&macro_tap     &kp DOT>
                , <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N6>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_amps_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp C>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_pipe_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp W>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_tilde_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp N1>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_scope_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHIFT>
                , <&macro_tap     &kp DOT>
                , <&macro_tap     &kp DOT>
                , <&macro_release &kp LSHIFT>
                ;
        )

        ZMK_MACRO(m_dllr_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp SEMI>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_lbkt_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp F>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_lbrc_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp B>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_rbkt_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp G>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_rbrc_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp N>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_prcnt_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N5>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_fslh_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N6>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_qmark_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp COMMA>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_sqt_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N1>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_dqt_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N2>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_at_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp V>
                , <&macro_release &kp RALT>
                ;
        )

    };
};
