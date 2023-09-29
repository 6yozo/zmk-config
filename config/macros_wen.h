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
#include "accent_macros.h"

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

        ZMK_MACRO(m_under_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp UNDER>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_grave_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp GRAVE>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_at_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp AT>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_again_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LCTRL>
                , <&macro_tap     &kp Y>
                , <&macro_release &kp LCTRL>
                ;
        )

        ZMK_MACRO(m_paste_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LCTRL>
                , <&macro_tap     &kp V>
                , <&macro_release &kp LCTRL>
                ;
        )

        ZMK_MACRO(m_copy_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LCTRL>
                , <&macro_tap     &kp C>
                , <&macro_release &kp LCTRL>
                ;
        )

        ZMK_MACRO(m_cut_wen,
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
                , <&macro_tap     &kp Z>
                , <&macro_release &kp LCTRL>
                ;
        )

        ZMK_MACRO(m_e_acute_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_e_acute_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_cap_e_acute_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_cap_e_acute_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_o_acute_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_o_acute_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_cap_o_acute_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_cap_o_acute_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_i_acute_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_i_acute_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_cap_i_acute_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_cap_i_acute_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_u_acute_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_u_acute_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_cap_u_acute_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_cap_u_acute_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_a_acute_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_a_acute_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_cap_a_acute_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_cap_a_acute_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_o_dacute_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_o_dacute_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_cap_o_dacute_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_cap_o_dacute_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_u_dacute_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_u_dacute_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_cap_u_dacute_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_cap_u_dacute_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_o_diaresis_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_o_diaresis_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_cap_o_diaresis_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_cap_o_diaresis_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_u_diaresis_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_u_diaresis_wen>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_cap_u_diaresis_to_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &m_cap_u_diaresis_wen>
                , <&macro_tap     &to WEN_BASE>
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
    };
};
