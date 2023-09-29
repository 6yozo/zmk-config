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

#include "macros_whu.h"

/ {
    behaviors {
      comma_lpar_whu: comma_lpar_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "COMMA_LPAR_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&kp COMMA>, <&m_lpar_whu>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
        keep-mods = <(MOD_LSFT)>;
      };

      dot_rpar_whu: dot_rpar_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "DOT_RPAR_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&kp DOT>, <&m_rpar_whu>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
        keep-mods = <(MOD_LSFT)>;
      };

      star_excl_whu: star_excl_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "STAR_EXCL_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&m_star_whu>, <&m_excl_whu>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
        keep-mods = <(MOD_LSFT)>;
      };

      semi_colon_whu: semi_colon_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "SEMI_COLON_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&m_semi_whu>, <&m_colon_whu>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
        keep-mods = <(MOD_LSFT)>;
      };

      minus_under_whu: minus_under_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "MINUS_UNDER_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&m_minus_whu>, <&m_under_whu>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
        keep-mods = <(MOD_LSFT)>;
      };

      fslh_qmark_whu: fslh_qmark_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "FSLH_QMARK_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&m_fslh_whu>, <&m_qmark_whu>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
        keep-mods = <(MOD_LSFT)>;
      };

      sqt_dqt_whu: sqt_dqt_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "SQT_DQT_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&m_sqt_whu>, <&m_dqt_whu>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
        keep-mods = <(MOD_LSFT)>;
      };

      carethulc_caret_whu: carethulc_caret_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "CARETHULC_CARET_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&m_carethulc_whu>, <&m_caret_whu>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
      };

    };
};
