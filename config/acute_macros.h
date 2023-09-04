// Unicode Sequences
// ---
//
// Emacs uses the alt-num combination as a prefix argument, so unicode
// sequences do not work in emacs
//
// Num lock state interferes with Unicode Sequences. You must have a num lock
// key to make unicode sequences work.
//
// Unicode Sequences do not handle shift states automatically for capital
// letters
//
// Standard ALT kecodes do not always work. Windows 10 do not output a
// double acute O when ALT 336 is used, but on windows 11 it works fine.
// Hexadecimal numpad entry works fine on both versions of windows though.
// In order to use hexadecimal numpad entry the registry has to be modified.
// Add REG_SZ type value "1" under
// HKEY_CURRENT_USER/Control Panel/Input Method/EnableHexNumpad

#pragma once

#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/rgb.h>
#include <dt-bindings/zmk/outputs.h>
#include <dt-bindings/zmk/ext_power.h>


/ {
    macros {

       ZMK_MACRO(m_e_acute_wen,
           wait-ms = <13>;
           tap-ms = <13>;
           bindings
                 = <&macro_press   &kp LALT>
                 , <&macro_tap     &kp KP_PLUS &kp E &kp KP_N9>
                 , <&macro_release &kp LALT>
                 ;
        )

        ZMK_MACRO(m_cap_e_acute_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp C &kp KP_N9>
                , <&macro_release &kp LALT>
                ;
        )

        ZMK_MACRO(m_o_acute_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp F &kp KP_N3>
                , <&macro_release &kp LALT>
                ;
        )

        ZMK_MACRO(m_cap_o_acute_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp D &kp KP_N3>
                , <&macro_release &kp LALT>
                ;
        )

        ZMK_MACRO(m_i_acute_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp E &kp D>
                , <&macro_release &kp LALT>
                ;
        )

        ZMK_MACRO(m_cap_i_acute_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp C &kp D>
                , <&macro_release &kp LALT>
                ;
        )

        ZMK_MACRO(m_u_acute_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp F &kp A>
                , <&macro_release &kp LALT>
                ;
        )

        ZMK_MACRO(m_cap_u_acute_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp D &kp A>
                , <&macro_release &kp LALT>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_a_acute_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp E &kp KP_N1>
                , <&macro_release &kp LALT>
                ;
        )

        ZMK_MACRO(m_cap_a_acute_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp C &kp KP_N1>
                , <&macro_release &kp LALT>
                ;
        )

        ZMK_MACRO(m_o_dacute_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp KP_N1 &kp KP_N5 &kp KP_N1>
                , <&macro_release &kp LALT>
                ;
        )

        ZMK_MACRO(m_cap_o_dacute_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp KP_N1 &kp KP_N5 &kp KP_N0>
                , <&macro_release &kp LALT>
                ;
        )

        ZMK_MACRO(m_u_dacute_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp KP_N1 &kp KP_N7 &kp KP_N1>
                , <&macro_release &kp LALT>
                ;
        )

        ZMK_MACRO(m_cap_u_dacute_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp KP_N1 &kp KP_N7 &kp KP_N0>
                , <&macro_release &kp LALT>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_o_diaresis_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp F &kp KP_N6>
                , <&macro_release &kp LALT>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_cap_o_diaresis_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp D &kp KP_N6>
                , <&macro_release &kp LALT>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_u_diaresis_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp F &kp C>
                , <&macro_release &kp LALT>
                , <&macro_tap     &to WEN_BASE>
                ;
        )

        ZMK_MACRO(m_cap_u_diaresis_wen,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LALT>
                , <&macro_tap     &kp KP_PLUS &kp D &kp C>
                , <&macro_release &kp LALT>
                ;
        )
          };
};
