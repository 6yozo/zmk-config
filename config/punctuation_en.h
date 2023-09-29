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

/ {
    behaviors {
      comma_lpar: comma_lpar_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "COMMA_LPAR_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&kp COMMA>, <&kp LPAR>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
      };

      dot_rpar: dot_rpar_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "DOT_RPAR_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&kp DOT>, <&kp RPAR>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
      };

      star_excl: star_excl_with_shift {
        compatible = "zmk,behavior-mod-morph";
        label = "STAR_EXCL_WITH_SHIFT";
        #binding-cells = <0>;
        bindings = <&kp STAR>, <&kp EXCL>;
        mods = <(MOD_RSFT|MOD_LSFT)>;
      };

    };
};
