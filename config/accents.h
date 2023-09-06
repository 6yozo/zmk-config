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

#include "macros_wen.h"

/ {
    behaviors {
      o_acute_to_wen: o_acute_wen_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "O_ACUTE_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&m_o_acute_to_wen>, <&m_cap_o_acute_to_wen>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
      };

      e_acute_to_wen: e_acute_wen_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "E_ACUTE_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&m_e_acute_to_wen>, <&m_cap_e_acute_to_wen>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
      };

      a_acute_to_wen: a_acute_wen_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "A_ACUTE_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&m_a_acute_to_wen>, <&m_cap_a_acute_to_wen>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
      };

      u_acute_to_wen: u_acute_wen_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "U_ACUTE_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&m_u_acute_to_wen>, <&m_cap_u_acute_to_wen>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
      };

      i_acute_to_wen: i_acute_wen_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "I_ACUTE_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&m_i_acute_to_wen>, <&m_cap_i_acute_to_wen>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
      };

      o_dacute_to_wen: o_dacute_wen_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "O_DACUTE_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&m_o_dacute_to_wen>, <&m_cap_o_dacute_to_wen>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
      };

      u_dacute_to_wen: u_dacute_wen_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "U_DACUTE_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&m_u_dacute_to_wen>, <&m_cap_u_dacute_to_wen>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
      };

      o_diaresis_to_wen: o_diaresis_wen_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "O_DIARESIS_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&m_o_diaresis_to_wen>, <&m_cap_o_diaresis_to_wen>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
      };

      u_diaresis_to_wen: u_diaresis_wen_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "U_DIARESIS_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&m_u_diaresis_to_wen>, <&m_cap_u_diaresis_to_wen>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
      };

    };
};
