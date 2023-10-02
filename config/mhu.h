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

#include "timing.h"
#include "layers.h"

#define MHU_A A
#define MHU_B B
#define MHU_C C
#define MHU_D D
#define MHU_E E
#define MHU_F F
#define MHU_G G
#define MHU_H H
#define MHU_I I
#define MHU_J J
#define MHU_K K
#define MHU_L L
#define MHU_M M
#define MHU_N N
#define MHU_O O
#define MHU_P P
#define MHU_Q Q
#define MHU_R R
#define MHU_S S
#define MHU_T T
#define MHU_U U
#define MHU_V V
#define MHU_W W
#define MHU_X X
#define MHU_Y Z
#define MHU_Z Y

/ {
    combos {
        compatible = "zmk,combos";

        combo_to_mhu_base_left {
            timeout-ms = <TIMEOUT_MS>;
            key-positions = <31 13>;
            bindings = <&to MHU_BASE>;
            layers = <MHU_LAYER_SET>;
        };
        combo_to_mhu_base_right {
            timeout-ms = <TIMEOUT_MS>;
            key-positions = <38 16>;
            bindings = <&to MHU_BASE>;
            layers = <MHU_LAYER_SET>;
        };
        combo_to_mhu_nav_left {
            timeout-ms = <TIMEOUT_MS>;
            key-positions = <31 12>;
            bindings = <&to MHU_NAV>;
            layers = <MHU_LAYER_SET>;
        };
        combo_to_mhu_nav_right {
            timeout-ms = <TIMEOUT_MS>;
            key-positions = <38 17>;
            bindings = <&to MHU_NAV>;
            layers = <MHU_LAYER_SET>;
        };
        combo_to_mhu_num_left {
            timeout-ms = <TIMEOUT_MS>;
            key-positions = <31 11>;
            bindings = <&to MHU_NUM>;
            layers = <MHU_LAYER_SET>;
        };
        combo_to_mhu_num_right {
            timeout-ms = <TIMEOUT_MS>;
            key-positions = <38 18>;
            bindings = <&to MHU_NUM>;
            layers = <MHU_LAYER_SET>;
        };
        combo_to_mhu_sym_left {
            timeout-ms = <TIMEOUT_MS>;
            key-positions = <31 10>;
            bindings = <&to MHU_SYM>;
            layers = <MHU_LAYER_SET>;
        };
        combo_to_mhu_sym_right {
            timeout-ms = <TIMEOUT_MS>;
            key-positions = <38 19>;
            bindings = <&to MHU_SYM>;
            layers = <MHU_LAYER_SET>;
        };

        combo_to_mhu_diaresis_left {
            timeout-ms = <TIMEOUT_MS>;
            key-positions = <31 23>;
            bindings = <&to MHU_DL>;
            layers = <MHU_LAYER_SET>;
        };
        combo_to_mhu_diaresis_right {
            timeout-ms = <TIMEOUT_MS>;
            key-positions = <38 26>;
            bindings = <&to MHU_DL>;
            layers = <MHU_LAYER_SET>;
        };
        combo_to_mhu_acute_left {
            timeout-ms = <TIMEOUT_MS>;
            key-positions = <31 22>;
            bindings = <&to MHU_AL>;
            layers = <MHU_LAYER_SET>;
        };
        combo_to_mhu_acute_right {
            timeout-ms = <TIMEOUT_MS>;
            key-positions = <38 27>;
            bindings = <&to MHU_AL>;
            layers = <MHU_LAYER_SET>;
        };
        combo_to_mhu_dacute_left {
            timeout-ms = <TIMEOUT_MS>;
            key-positions = <31 21>;
            bindings = <&to MHU_DAL>;
            layers = <MHU_LAYER_SET>;
        };
        combo_to_mhu_dacute_right {
            timeout-ms = <TIMEOUT_MS>;
            key-positions = <38 28>;
            bindings = <&to MHU_DAL>;
            layers = <MHU_LAYER_SET>;
        };
    };

    macros {
        ZMK_MACRO(home_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LGUI>
            , <&macro_tap     &kp LEFT>
            , <&macro_release &kp LGUI>
            ;
            )

        ZMK_MACRO(end_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LGUI>
            , <&macro_tap     &kp RIGHT>
            , <&macro_release &kp LGUI>
            ;
            )

        ZMK_MACRO(pg_up_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LGUI>
            , <&macro_tap     &kp UP>
            , <&macro_release &kp LGUI>
            ;
            )

       ZMK_MACRO(pg_dn_mhu,
           wait-ms = <13>;
           tap-ms = <13>;
           bindings
           = <&macro_press   &kp LGUI>
           , <&macro_tap     &kp DOWN>
           , <&macro_release &kp LGUI>
           ;
           )
    };

    macros {
        ZMK_MACRO(m_lpar_mhu,
                  wait-ms = <13>;
                  tap-ms = <13>;
                  bindings
                  = <&macro_press   &kp LSHFT>
                  , <&macro_tap     &kp N8>
                  , <&macro_release &kp LSHFT>
                  ;
                  )
    };

    behaviors {
        comma_lpar_mhu: comma_lpar_with_shift_mhu {
            compatible = "zmk,behavior-mod-morph";
            label = "COMMA_LPAR_WITH_SHIFT_MHU";
            #binding-cells = <0>;
            bindings = <&kp COMMA>, <&m_lpar_mhu>;
            mods = <(MOD_RSFT|MOD_LSFT)>;
            keep-mods = <(MOD_LSFT)>;
        };
    };

    macros {
        ZMK_MACRO(m_rpar_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LSHFT>
            , <&macro_tap     &kp N9>
            , <&macro_release &kp LSHFT>
            ;
            )
    };

    behaviors {
        dot_rpar_mhu: dot_rpar_with_shift_mhu {
            compatible = "zmk,behavior-mod-morph";
            label = "DOT_RPAR_WITH_SHIFT_MHU";
            #binding-cells = <0>;
            bindings = <&kp DOT>, <&m_rpar_mhu>;
            mods = <(MOD_RSFT|MOD_LSFT)>;
            keep-mods = <(MOD_LSFT)>;
           };
    };

    macros {
        ZMK_MACRO(m_fslh_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LSHFT>
            , <&macro_tap     &kp N6>
            , <&macro_release &kp LSHFT>
            ;
            )

        ZMK_MACRO(m_qmark_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LSHFT>
            , <&macro_tap     &kp COMMA>
            , <&macro_release &kp LSHFT>
            ;
            )
    };

    behaviors {
        fslh_qmark_mhu: fslh_qmark_with_shift_mhu {
            compatible = "zmk,behavior-mod-morph";
            label = "FSLH_QMARK_WITH_SHIFT_MHU";
            #binding-cells = <0>;
            bindings = <&m_fslh_mhu>, <&m_qmark_mhu>;
            mods = <(MOD_RSFT|MOD_LSFT)>;
            keep-mods = <(MOD_LSFT)>;
            };
    };

    macros {
        ZMK_MACRO(m_semi_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp RALT>
            , <&macro_tap     &kp DOT>
            , <&macro_release &kp RALT>
            ;
            )

        ZMK_MACRO(m_colon_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LSHFT>
            , <&macro_tap     &kp DOT>
            , <&macro_release &kp LSHFT>
            ;
            )
    };

    behaviors {
        semi_colon_mhu: semi_colon_with_shift_mhu {
            compatible = "zmk,behavior-mod-morph";
            label = "SEMI_COLON_WITH_SHIFT_MHU";
            #binding-cells = <0>;
            bindings = <&m_semi_mhu>, <&m_colon_mhu>;
            mods = <(MOD_RSFT|MOD_LSFT)>;
            keep-mods = <(MOD_LSFT)>;
        };
    };

    macros {
        ZMK_MACRO(m_sqt_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LSHFT>
            , <&macro_tap     &kp N1>
            , <&macro_release &kp LSHFT>
            ;
            )

        ZMK_MACRO(m_dqt_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LSHFT>
            , <&macro_tap     &kp N2>
            , <&macro_release &kp LSHFT>
            ;
            )
    };

    behaviors {
        sqt_dqt_mhu: sqt_dqt_with_shift_mhu {
            compatible = "zmk,behavior-mod-morph";
            label = "SQT_DQT_WITH_SHIFT_MHU";
            #binding-cells = <0>;
            bindings = <&m_sqt_mhu>, <&m_dqt_mhu>;
            mods = <(MOD_RSFT|MOD_LSFT)>;
            keep-mods = <(MOD_LSFT)>;
            };
    };

    macros {
        ZMK_MACRO(m_star_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LSHFT>
            , <&macro_press   &kp RALT>
            , <&macro_tap     &kp COMMA>
            , <&macro_release &kp RALT>
            , <&macro_release &kp LSHFT>
            ;
            )

        ZMK_MACRO(m_excl_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LSHFT>
            , <&macro_tap     &kp N4>
            , <&macro_release &kp LSHFT>
            ;
            )
    };

    behaviors {
        star_excl_mhu: star_excl_with_shift_mhu {
            compatible = "zmk,behavior-mod-morph";
            label = "STAR_EXCL_WITH_SHIFT_MHU";
            #binding-cells = <0>;
            bindings = <&m_star_mhu>, <&m_excl_mhu>;
            mods = <(MOD_RSFT|MOD_LSFT)>;
            keep-mods = <(MOD_LSFT)>;
            };
    };

    macros {
        ZMK_MACRO(m_minus_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_tap     &kp FSLH>
            ;
            )

        ZMK_MACRO(m_under_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LSHFT>
            , <&macro_tap     &kp QMARK>
            , <&macro_release &kp LSHFT>
            ;
            )
    };

    behaviors {
        minus_under_mhu: minus_under_with_shift {
            compatible = "zmk,behavior-mod-morph";
            label = "MINUS_UNDER_WITH_SHIFT_MHU";
            #binding-cells = <0>;
            bindings = <&m_minus_mhu>, <&m_under_mhu>;
            mods = <(MOD_RSFT|MOD_LSFT)>;
            keep-mods = <(MOD_LSFT)>;
            };
    };

    macros {
        ZMK_MACRO(m_undo_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LGUI>
            , <&macro_tap     &kp Y>
            , <&macro_release &kp LGUI>
            ;
            )

        ZMK_MACRO(m_cut_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LGUI>
            , <&macro_tap     &kp X>
            , <&macro_release &kp LGUI>
            ;
            )

        ZMK_MACRO(m_copy_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LGUI>
            , <&macro_tap     &kp C>
            , <&macro_release &kp LGUI>
            ;
            )

        ZMK_MACRO(m_paste_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LGUI>
            , <&macro_tap     &kp V>
            , <&macro_release &kp LGUI>
            ;
            )

        ZMK_MACRO(m_again_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
            = <&macro_press   &kp LSHFT>
            , <&macro_press   &kp LGUI>
            , <&macro_tap     &kp Z>
            , <&macro_release &kp LGUI>
            , <&macro_release &kp LSHFT>
            ;
            )
    };

    macros {
        ZMK_MACRO(m_e_acute_to_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp SEMI>
                , <&macro_tap     &to MHU_BASE>
                ;
        )

        ZMK_MACRO(m_o_acute_to_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp EQUAL>
                , <&macro_tap     &to MHU_BASE>
                ;
        )

        ZMK_MACRO(m_i_acute_to_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp NUBS>
                , <&macro_tap     &to MHU_BASE>
                ;
        )

        ZMK_MACRO(m_u_acute_to_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp RBKT>
                , <&macro_tap     &to MHU_BASE>
                ;
        )

        ZMK_MACRO(m_a_acute_to_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp SQT>
                , <&macro_tap     &to MHU_BASE>
                ;
        )

        ZMK_MACRO(m_o_dacute_to_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp LBKT>
                , <&macro_tap     &to MHU_BASE>
                ;
        )

        ZMK_MACRO(m_u_dacute_to_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp BSLH>
                , <&macro_tap     &to MHU_BASE>
                ;
        )

        ZMK_MACRO(m_o_diaresis_to_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp N0>
                , <&macro_tap     &to MHU_BASE>
                ;
        )

        ZMK_MACRO(m_u_diaresis_to_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp MINUS>
                , <&macro_tap     &to MHU_BASE>
                ;
        )

        ZMK_MACRO(m_grave_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp BSLH>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_caret_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp SQT>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_lt_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp Z>
                , <&macro_release &kp RALT>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_gt_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp X>
                , <&macro_release &kp RALT>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_plus_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N3>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_equal_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N7>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_bslh_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp MINUS>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_hash_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp N3>
                , <&macro_release &kp RALT>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_par_dir_mhu,
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

        ZMK_MACRO(m_amps_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp N1>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_pipe_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp NUBS>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_tilde_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp RBKT>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_scope_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHIFT>
                , <&macro_tap     &kp DOT>
                , <&macro_tap     &kp DOT>
                , <&macro_release &kp LSHIFT>
                ;
        )

        ZMK_MACRO(m_dllr_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp N4>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_lbkt_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp N8>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_lbrc_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp N7>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_rbkt_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp N9>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_rbrc_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp N0>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_prcnt_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N5>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_at_mhu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp Q>
                , <&macro_release &kp RALT>
                ;
        )

    };
};
