/*
 *  29 bits for 46 character classifications
 *  generated by char-mapper on 07/05/13 at 20:32:35
 *
 *  This file contains the character classifications
 *  used by AutoGen and AutoOpts for identifying tokens.
 *  The table is static scope, so %guard is empty.
 *
 *  This file is part of AutoOpts, a companion to AutoGen.
 *  AutoOpts is free software.
 *  AutoOpts is Copyright (C) 1992-2013 by Bruce Korb - all rights reserved
 *
 *  AutoOpts is available under any one of two licenses.  The license
 *  in use must be one of these two and the choice is under the control
 *  of the user of the license.
 *
 *  The GNU Lesser General Public License, version 3 or later
 *  See the files "COPYING.lgplv3" and "COPYING.gplv3"
 *
 *  The Modified Berkeley Software Distribution License
 *  See the file "COPYING.mbsd"
 *
 *  These files have the following sha256 sums:
 *
 *  8584710e9b04216a394078dc156b781d0b47e1729104d666658aecef8ee32e95  COPYING.gplv3
 *  4379e7444a0e2ce2b12dd6f5a52a27a4d02d39d247901d3285c88cf0d37f477b  COPYING.lgplv3
 *  13aa749a5b0a454917a944ed8fffc530b784f5ead522b1aacaf4ec8aa55a6239  COPYING.mbsd
 */
#ifndef AG_CHAR_MAP_H_GUARD
#define AG_CHAR_MAP_H_GUARD 1

#ifdef HAVE_CONFIG_H
# if defined(HAVE_INTTYPES_H)
#   include <inttypes.h>

# elif defined(HAVE_STDINT_H)
#   include <stdint.h>

# elif !defined(HAVE_UINT32_T)
#   if SIZEOF_INT == 4
      typedef unsigned int    uint32_t;
#   elif SIZEOF_LONG == 4
      typedef unsigned long   uint32_t;
#   endif
# endif /* HAVE_*INT*_H header */

#else /* not HAVE_CONFIG_H -- */
# include <inttypes.h>
#endif /* HAVE_CONFIG_H */

#if 0 /* mapping specification source (from autogen.map) */
// 
// %guard
// %file           ag-char-map.h
// %backup
// %optimize
// 
// %comment -- see above
// %
// 
// newline         "\n"
// nul-byte        "\x00"
// dir-sep         "/\\"
// percent         "%"
// comma           ","
// colon           ":"
// underscore      "_"
// plus            "+"
// dollar          "$"
// option-marker   "-"
// 
// horiz-white     "\t "
// alt-white       "\v\f\r\b"
// whitespace      +horiz-white  +newline +alt-white
// non-nl-white    +horiz-white  +alt-white
// quote           "'\""
// parentheses     "()"
// 
// graphic         "!-~"
// inversion       "~-"
// oct-digit       "0-7"
// dec-digit       "89"          +oct-digit
// hex-digit       "a-fA-F"      +dec-digit
// lower-case      "a-z"
// upper-case      "A-Z"
// alphabetic      +lower-case   +upper-case
// alphanumeric    +alphabetic   +dec-digit
// var-first       +underscore   +alphabetic
// variable-name   +var-first    +dec-digit
// option-name     "^-"          +variable-name
// value-name      +colon        +option-name
// name-sep        "[.]"
// compound-name   +value-name   +name-sep +horiz-white
// scheme-note     +parentheses  +quote
// 
// unquotable      "!-~"         -"#,;<=>[\\]`{}?*" -quote -parentheses
// end-xml-token   "/>"          +whitespace
// plus-n-space    +plus         +whitespace
// punctuation     "!-~"         -alphanumeric -"_"
// suffix          "-._"         +alphanumeric
// suffix-fmt      +percent      +suffix +dir-sep
// false-type      "nNfF0"       +nul-byte
// file-name       +dir-sep      +suffix
// end-token       +nul-byte     +whitespace
// end-list-entry  +comma        +end-token
// set-separator   "|+-!"        +end-list-entry
// signed-number   +inversion    +dec-digit
// make-script     +dollar       +newline
// load-line-skip  +horiz-white  +option-marker
//
#endif /* 0 -- mapping spec. source */


typedef uint32_t ag_char_map_mask_t;

#define  IS_NEWLINE_CHAR( _c)          is_ag_char_map_char((char)(_c), 0x00000001)
#define SPN_NEWLINE_CHARS(_s)         spn_ag_char_map_chars(_s, 0)
#define BRK_NEWLINE_CHARS(_s)         brk_ag_char_map_chars(_s, 0)
#define SPN_NEWLINE_BACK(s,e)         spn_ag_char_map_back(s, e, 0)
#define BRK_NEWLINE_BACK(s,e)         brk_ag_char_map_back(s, e, 0)
#define  IS_NUL_BYTE_CHAR( _c)         is_ag_char_map_char((char)(_c), 0x00000002)
#define SPN_NUL_BYTE_CHARS(_s)        spn_ag_char_map_chars(_s, 1)
#define BRK_NUL_BYTE_CHARS(_s)        brk_ag_char_map_chars(_s, 1)
#define SPN_NUL_BYTE_BACK(s,e)        spn_ag_char_map_back(s, e, 1)
#define BRK_NUL_BYTE_BACK(s,e)        brk_ag_char_map_back(s, e, 1)
#define  IS_DIR_SEP_CHAR( _c)          is_ag_char_map_char((char)(_c), 0x00000004)
#define SPN_DIR_SEP_CHARS(_s)         spn_ag_char_map_chars(_s, 2)
#define BRK_DIR_SEP_CHARS(_s)         brk_ag_char_map_chars(_s, 2)
#define SPN_DIR_SEP_BACK(s,e)         spn_ag_char_map_back(s, e, 2)
#define BRK_DIR_SEP_BACK(s,e)         brk_ag_char_map_back(s, e, 2)
#define  IS_PERCENT_CHAR( _c)          is_ag_char_map_char((char)(_c), 0x00000008)
#define SPN_PERCENT_CHARS(_s)         spn_ag_char_map_chars(_s, 3)
#define BRK_PERCENT_CHARS(_s)         brk_ag_char_map_chars(_s, 3)
#define SPN_PERCENT_BACK(s,e)         spn_ag_char_map_back(s, e, 3)
#define BRK_PERCENT_BACK(s,e)         brk_ag_char_map_back(s, e, 3)
#define  IS_COMMA_CHAR( _c)            is_ag_char_map_char((char)(_c), 0x00000010)
#define SPN_COMMA_CHARS(_s)           spn_ag_char_map_chars(_s, 4)
#define BRK_COMMA_CHARS(_s)           brk_ag_char_map_chars(_s, 4)
#define SPN_COMMA_BACK(s,e)           spn_ag_char_map_back(s, e, 4)
#define BRK_COMMA_BACK(s,e)           brk_ag_char_map_back(s, e, 4)
#define  IS_COLON_CHAR( _c)            is_ag_char_map_char((char)(_c), 0x00000020)
#define SPN_COLON_CHARS(_s)           spn_ag_char_map_chars(_s, 5)
#define BRK_COLON_CHARS(_s)           brk_ag_char_map_chars(_s, 5)
#define SPN_COLON_BACK(s,e)           spn_ag_char_map_back(s, e, 5)
#define BRK_COLON_BACK(s,e)           brk_ag_char_map_back(s, e, 5)
#define  IS_UNDERSCORE_CHAR( _c)       is_ag_char_map_char((char)(_c), 0x00000040)
#define SPN_UNDERSCORE_CHARS(_s)      spn_ag_char_map_chars(_s, 6)
#define BRK_UNDERSCORE_CHARS(_s)      brk_ag_char_map_chars(_s, 6)
#define SPN_UNDERSCORE_BACK(s,e)      spn_ag_char_map_back(s, e, 6)
#define BRK_UNDERSCORE_BACK(s,e)      brk_ag_char_map_back(s, e, 6)
#define  IS_PLUS_CHAR( _c)             is_ag_char_map_char((char)(_c), 0x00000080)
#define SPN_PLUS_CHARS(_s)            spn_ag_char_map_chars(_s, 7)
#define BRK_PLUS_CHARS(_s)            brk_ag_char_map_chars(_s, 7)
#define SPN_PLUS_BACK(s,e)            spn_ag_char_map_back(s, e, 7)
#define BRK_PLUS_BACK(s,e)            brk_ag_char_map_back(s, e, 7)
#define  IS_DOLLAR_CHAR( _c)           is_ag_char_map_char((char)(_c), 0x00000100)
#define SPN_DOLLAR_CHARS(_s)          spn_ag_char_map_chars(_s, 8)
#define BRK_DOLLAR_CHARS(_s)          brk_ag_char_map_chars(_s, 8)
#define SPN_DOLLAR_BACK(s,e)          spn_ag_char_map_back(s, e, 8)
#define BRK_DOLLAR_BACK(s,e)          brk_ag_char_map_back(s, e, 8)
#define  IS_OPTION_MARKER_CHAR( _c)    is_ag_char_map_char((char)(_c), 0x00000200)
#define SPN_OPTION_MARKER_CHARS(_s)   spn_ag_char_map_chars(_s, 9)
#define BRK_OPTION_MARKER_CHARS(_s)   brk_ag_char_map_chars(_s, 9)
#define SPN_OPTION_MARKER_BACK(s,e)   spn_ag_char_map_back(s, e, 9)
#define BRK_OPTION_MARKER_BACK(s,e)   brk_ag_char_map_back(s, e, 9)
#define  IS_HORIZ_WHITE_CHAR( _c)      is_ag_char_map_char((char)(_c), 0x00000400)
#define SPN_HORIZ_WHITE_CHARS(_s)     spn_ag_char_map_chars(_s, 10)
#define BRK_HORIZ_WHITE_CHARS(_s)     brk_ag_char_map_chars(_s, 10)
#define SPN_HORIZ_WHITE_BACK(s,e)     spn_ag_char_map_back(s, e, 10)
#define BRK_HORIZ_WHITE_BACK(s,e)     brk_ag_char_map_back(s, e, 10)
#define  IS_ALT_WHITE_CHAR( _c)        is_ag_char_map_char((char)(_c), 0x00000800)
#define SPN_ALT_WHITE_CHARS(_s)       spn_ag_char_map_chars(_s, 11)
#define BRK_ALT_WHITE_CHARS(_s)       brk_ag_char_map_chars(_s, 11)
#define SPN_ALT_WHITE_BACK(s,e)       spn_ag_char_map_back(s, e, 11)
#define BRK_ALT_WHITE_BACK(s,e)       brk_ag_char_map_back(s, e, 11)
#define  IS_WHITESPACE_CHAR( _c)       is_ag_char_map_char((char)(_c), 0x00000C01)
#define SPN_WHITESPACE_CHARS(_s)      spn_ag_char_map_chars(_s, 12)
#define BRK_WHITESPACE_CHARS(_s)      brk_ag_char_map_chars(_s, 12)
#define SPN_WHITESPACE_BACK(s,e)      spn_ag_char_map_back(s, e, 12)
#define BRK_WHITESPACE_BACK(s,e)      brk_ag_char_map_back(s, e, 12)
#define  IS_NON_NL_WHITE_CHAR( _c)     is_ag_char_map_char((char)(_c), 0x00000C00)
#define SPN_NON_NL_WHITE_CHARS(_s)    spn_ag_char_map_chars(_s, 13)
#define BRK_NON_NL_WHITE_CHARS(_s)    brk_ag_char_map_chars(_s, 13)
#define SPN_NON_NL_WHITE_BACK(s,e)    spn_ag_char_map_back(s, e, 13)
#define BRK_NON_NL_WHITE_BACK(s,e)    brk_ag_char_map_back(s, e, 13)
#define  IS_QUOTE_CHAR( _c)            is_ag_char_map_char((char)(_c), 0x00001000)
#define SPN_QUOTE_CHARS(_s)           spn_ag_char_map_chars(_s, 14)
#define BRK_QUOTE_CHARS(_s)           brk_ag_char_map_chars(_s, 14)
#define SPN_QUOTE_BACK(s,e)           spn_ag_char_map_back(s, e, 14)
#define BRK_QUOTE_BACK(s,e)           brk_ag_char_map_back(s, e, 14)
#define  IS_PARENTHESES_CHAR( _c)      is_ag_char_map_char((char)(_c), 0x00002000)
#define SPN_PARENTHESES_CHARS(_s)     spn_ag_char_map_chars(_s, 15)
#define BRK_PARENTHESES_CHARS(_s)     brk_ag_char_map_chars(_s, 15)
#define SPN_PARENTHESES_BACK(s,e)     spn_ag_char_map_back(s, e, 15)
#define BRK_PARENTHESES_BACK(s,e)     brk_ag_char_map_back(s, e, 15)
#define  IS_GRAPHIC_CHAR( _c)          is_ag_char_map_char((char)(_c), 0x00004000)
#define SPN_GRAPHIC_CHARS(_s)         spn_ag_char_map_chars(_s, 16)
#define BRK_GRAPHIC_CHARS(_s)         brk_ag_char_map_chars(_s, 16)
#define SPN_GRAPHIC_BACK(s,e)         spn_ag_char_map_back(s, e, 16)
#define BRK_GRAPHIC_BACK(s,e)         brk_ag_char_map_back(s, e, 16)
#define  IS_INVERSION_CHAR( _c)        is_ag_char_map_char((char)(_c), 0x00008000)
#define SPN_INVERSION_CHARS(_s)       spn_ag_char_map_chars(_s, 17)
#define BRK_INVERSION_CHARS(_s)       brk_ag_char_map_chars(_s, 17)
#define SPN_INVERSION_BACK(s,e)       spn_ag_char_map_back(s, e, 17)
#define BRK_INVERSION_BACK(s,e)       brk_ag_char_map_back(s, e, 17)
#define  IS_OCT_DIGIT_CHAR( _c)        is_ag_char_map_char((char)(_c), 0x00010000)
#define SPN_OCT_DIGIT_CHARS(_s)       spn_ag_char_map_chars(_s, 18)
#define BRK_OCT_DIGIT_CHARS(_s)       brk_ag_char_map_chars(_s, 18)
#define SPN_OCT_DIGIT_BACK(s,e)       spn_ag_char_map_back(s, e, 18)
#define BRK_OCT_DIGIT_BACK(s,e)       brk_ag_char_map_back(s, e, 18)
#define  IS_DEC_DIGIT_CHAR( _c)        is_ag_char_map_char((char)(_c), 0x00030000)
#define SPN_DEC_DIGIT_CHARS(_s)       spn_ag_char_map_chars(_s, 19)
#define BRK_DEC_DIGIT_CHARS(_s)       brk_ag_char_map_chars(_s, 19)
#define SPN_DEC_DIGIT_BACK(s,e)       spn_ag_char_map_back(s, e, 19)
#define BRK_DEC_DIGIT_BACK(s,e)       brk_ag_char_map_back(s, e, 19)
#define  IS_HEX_DIGIT_CHAR( _c)        is_ag_char_map_char((char)(_c), 0x00070000)
#define SPN_HEX_DIGIT_CHARS(_s)       spn_ag_char_map_chars(_s, 20)
#define BRK_HEX_DIGIT_CHARS(_s)       brk_ag_char_map_chars(_s, 20)
#define SPN_HEX_DIGIT_BACK(s,e)       spn_ag_char_map_back(s, e, 20)
#define BRK_HEX_DIGIT_BACK(s,e)       brk_ag_char_map_back(s, e, 20)
#define  IS_LOWER_CASE_CHAR( _c)       is_ag_char_map_char((char)(_c), 0x00080000)
#define SPN_LOWER_CASE_CHARS(_s)      spn_ag_char_map_chars(_s, 21)
#define BRK_LOWER_CASE_CHARS(_s)      brk_ag_char_map_chars(_s, 21)
#define SPN_LOWER_CASE_BACK(s,e)      spn_ag_char_map_back(s, e, 21)
#define BRK_LOWER_CASE_BACK(s,e)      brk_ag_char_map_back(s, e, 21)
#define  IS_UPPER_CASE_CHAR( _c)       is_ag_char_map_char((char)(_c), 0x00100000)
#define SPN_UPPER_CASE_CHARS(_s)      spn_ag_char_map_chars(_s, 22)
#define BRK_UPPER_CASE_CHARS(_s)      brk_ag_char_map_chars(_s, 22)
#define SPN_UPPER_CASE_BACK(s,e)      spn_ag_char_map_back(s, e, 22)
#define BRK_UPPER_CASE_BACK(s,e)      brk_ag_char_map_back(s, e, 22)
#define  IS_ALPHABETIC_CHAR( _c)       is_ag_char_map_char((char)(_c), 0x00180000)
#define SPN_ALPHABETIC_CHARS(_s)      spn_ag_char_map_chars(_s, 23)
#define BRK_ALPHABETIC_CHARS(_s)      brk_ag_char_map_chars(_s, 23)
#define SPN_ALPHABETIC_BACK(s,e)      spn_ag_char_map_back(s, e, 23)
#define BRK_ALPHABETIC_BACK(s,e)      brk_ag_char_map_back(s, e, 23)
#define  IS_ALPHANUMERIC_CHAR( _c)     is_ag_char_map_char((char)(_c), 0x001B0000)
#define SPN_ALPHANUMERIC_CHARS(_s)    spn_ag_char_map_chars(_s, 24)
#define BRK_ALPHANUMERIC_CHARS(_s)    brk_ag_char_map_chars(_s, 24)
#define SPN_ALPHANUMERIC_BACK(s,e)    spn_ag_char_map_back(s, e, 24)
#define BRK_ALPHANUMERIC_BACK(s,e)    brk_ag_char_map_back(s, e, 24)
#define  IS_VAR_FIRST_CHAR( _c)        is_ag_char_map_char((char)(_c), 0x00180040)
#define SPN_VAR_FIRST_CHARS(_s)       spn_ag_char_map_chars(_s, 25)
#define BRK_VAR_FIRST_CHARS(_s)       brk_ag_char_map_chars(_s, 25)
#define SPN_VAR_FIRST_BACK(s,e)       spn_ag_char_map_back(s, e, 25)
#define BRK_VAR_FIRST_BACK(s,e)       brk_ag_char_map_back(s, e, 25)
#define  IS_VARIABLE_NAME_CHAR( _c)    is_ag_char_map_char((char)(_c), 0x001B0040)
#define SPN_VARIABLE_NAME_CHARS(_s)   spn_ag_char_map_chars(_s, 26)
#define BRK_VARIABLE_NAME_CHARS(_s)   brk_ag_char_map_chars(_s, 26)
#define SPN_VARIABLE_NAME_BACK(s,e)   spn_ag_char_map_back(s, e, 26)
#define BRK_VARIABLE_NAME_BACK(s,e)   brk_ag_char_map_back(s, e, 26)
#define  IS_OPTION_NAME_CHAR( _c)      is_ag_char_map_char((char)(_c), 0x003B0040)
#define SPN_OPTION_NAME_CHARS(_s)     spn_ag_char_map_chars(_s, 27)
#define BRK_OPTION_NAME_CHARS(_s)     brk_ag_char_map_chars(_s, 27)
#define SPN_OPTION_NAME_BACK(s,e)     spn_ag_char_map_back(s, e, 27)
#define BRK_OPTION_NAME_BACK(s,e)     brk_ag_char_map_back(s, e, 27)
#define  IS_VALUE_NAME_CHAR( _c)       is_ag_char_map_char((char)(_c), 0x003B0060)
#define SPN_VALUE_NAME_CHARS(_s)      spn_ag_char_map_chars(_s, 28)
#define BRK_VALUE_NAME_CHARS(_s)      brk_ag_char_map_chars(_s, 28)
#define SPN_VALUE_NAME_BACK(s,e)      spn_ag_char_map_back(s, e, 28)
#define BRK_VALUE_NAME_BACK(s,e)      brk_ag_char_map_back(s, e, 28)
#define  IS_NAME_SEP_CHAR( _c)         is_ag_char_map_char((char)(_c), 0x00400000)
#define SPN_NAME_SEP_CHARS(_s)        spn_ag_char_map_chars(_s, 29)
#define BRK_NAME_SEP_CHARS(_s)        brk_ag_char_map_chars(_s, 29)
#define SPN_NAME_SEP_BACK(s,e)        spn_ag_char_map_back(s, e, 29)
#define BRK_NAME_SEP_BACK(s,e)        brk_ag_char_map_back(s, e, 29)
#define  IS_COMPOUND_NAME_CHAR( _c)    is_ag_char_map_char((char)(_c), 0x007B0460)
#define SPN_COMPOUND_NAME_CHARS(_s)   spn_ag_char_map_chars(_s, 30)
#define BRK_COMPOUND_NAME_CHARS(_s)   brk_ag_char_map_chars(_s, 30)
#define SPN_COMPOUND_NAME_BACK(s,e)   spn_ag_char_map_back(s, e, 30)
#define BRK_COMPOUND_NAME_BACK(s,e)   brk_ag_char_map_back(s, e, 30)
#define  IS_SCHEME_NOTE_CHAR( _c)      is_ag_char_map_char((char)(_c), 0x00003000)
#define SPN_SCHEME_NOTE_CHARS(_s)     spn_ag_char_map_chars(_s, 31)
#define BRK_SCHEME_NOTE_CHARS(_s)     brk_ag_char_map_chars(_s, 31)
#define SPN_SCHEME_NOTE_BACK(s,e)     spn_ag_char_map_back(s, e, 31)
#define BRK_SCHEME_NOTE_BACK(s,e)     brk_ag_char_map_back(s, e, 31)
#define  IS_UNQUOTABLE_CHAR( _c)       is_ag_char_map_char((char)(_c), 0x00800000)
#define SPN_UNQUOTABLE_CHARS(_s)      spn_ag_char_map_chars(_s, 32)
#define BRK_UNQUOTABLE_CHARS(_s)      brk_ag_char_map_chars(_s, 32)
#define SPN_UNQUOTABLE_BACK(s,e)      spn_ag_char_map_back(s, e, 32)
#define BRK_UNQUOTABLE_BACK(s,e)      brk_ag_char_map_back(s, e, 32)
#define  IS_END_XML_TOKEN_CHAR( _c)    is_ag_char_map_char((char)(_c), 0x01000C01)
#define SPN_END_XML_TOKEN_CHARS(_s)   spn_ag_char_map_chars(_s, 33)
#define BRK_END_XML_TOKEN_CHARS(_s)   brk_ag_char_map_chars(_s, 33)
#define SPN_END_XML_TOKEN_BACK(s,e)   spn_ag_char_map_back(s, e, 33)
#define BRK_END_XML_TOKEN_BACK(s,e)   brk_ag_char_map_back(s, e, 33)
#define  IS_PLUS_N_SPACE_CHAR( _c)     is_ag_char_map_char((char)(_c), 0x00000C81)
#define SPN_PLUS_N_SPACE_CHARS(_s)    spn_ag_char_map_chars(_s, 34)
#define BRK_PLUS_N_SPACE_CHARS(_s)    brk_ag_char_map_chars(_s, 34)
#define SPN_PLUS_N_SPACE_BACK(s,e)    spn_ag_char_map_back(s, e, 34)
#define BRK_PLUS_N_SPACE_BACK(s,e)    brk_ag_char_map_back(s, e, 34)
#define  IS_PUNCTUATION_CHAR( _c)      is_ag_char_map_char((char)(_c), 0x02000000)
#define SPN_PUNCTUATION_CHARS(_s)     spn_ag_char_map_chars(_s, 35)
#define BRK_PUNCTUATION_CHARS(_s)     brk_ag_char_map_chars(_s, 35)
#define SPN_PUNCTUATION_BACK(s,e)     spn_ag_char_map_back(s, e, 35)
#define BRK_PUNCTUATION_BACK(s,e)     brk_ag_char_map_back(s, e, 35)
#define  IS_SUFFIX_CHAR( _c)           is_ag_char_map_char((char)(_c), 0x041B0000)
#define SPN_SUFFIX_CHARS(_s)          spn_ag_char_map_chars(_s, 36)
#define BRK_SUFFIX_CHARS(_s)          brk_ag_char_map_chars(_s, 36)
#define SPN_SUFFIX_BACK(s,e)          spn_ag_char_map_back(s, e, 36)
#define BRK_SUFFIX_BACK(s,e)          brk_ag_char_map_back(s, e, 36)
#define  IS_SUFFIX_FMT_CHAR( _c)       is_ag_char_map_char((char)(_c), 0x041B000C)
#define SPN_SUFFIX_FMT_CHARS(_s)      spn_ag_char_map_chars(_s, 37)
#define BRK_SUFFIX_FMT_CHARS(_s)      brk_ag_char_map_chars(_s, 37)
#define SPN_SUFFIX_FMT_BACK(s,e)      spn_ag_char_map_back(s, e, 37)
#define BRK_SUFFIX_FMT_BACK(s,e)      brk_ag_char_map_back(s, e, 37)
#define  IS_FALSE_TYPE_CHAR( _c)       is_ag_char_map_char((char)(_c), 0x08000002)
#define SPN_FALSE_TYPE_CHARS(_s)      spn_ag_char_map_chars(_s, 38)
#define BRK_FALSE_TYPE_CHARS(_s)      brk_ag_char_map_chars(_s, 38)
#define SPN_FALSE_TYPE_BACK(s,e)      spn_ag_char_map_back(s, e, 38)
#define BRK_FALSE_TYPE_BACK(s,e)      brk_ag_char_map_back(s, e, 38)
#define  IS_FILE_NAME_CHAR( _c)        is_ag_char_map_char((char)(_c), 0x041B0004)
#define SPN_FILE_NAME_CHARS(_s)       spn_ag_char_map_chars(_s, 39)
#define BRK_FILE_NAME_CHARS(_s)       brk_ag_char_map_chars(_s, 39)
#define SPN_FILE_NAME_BACK(s,e)       spn_ag_char_map_back(s, e, 39)
#define BRK_FILE_NAME_BACK(s,e)       brk_ag_char_map_back(s, e, 39)
#define  IS_END_TOKEN_CHAR( _c)        is_ag_char_map_char((char)(_c), 0x00000C03)
#define SPN_END_TOKEN_CHARS(_s)       spn_ag_char_map_chars(_s, 40)
#define BRK_END_TOKEN_CHARS(_s)       brk_ag_char_map_chars(_s, 40)
#define SPN_END_TOKEN_BACK(s,e)       spn_ag_char_map_back(s, e, 40)
#define BRK_END_TOKEN_BACK(s,e)       brk_ag_char_map_back(s, e, 40)
#define  IS_END_LIST_ENTRY_CHAR( _c)   is_ag_char_map_char((char)(_c), 0x00000C13)
#define SPN_END_LIST_ENTRY_CHARS(_s)  spn_ag_char_map_chars(_s, 41)
#define BRK_END_LIST_ENTRY_CHARS(_s)  brk_ag_char_map_chars(_s, 41)
#define SPN_END_LIST_ENTRY_BACK(s,e)  spn_ag_char_map_back(s, e, 41)
#define BRK_END_LIST_ENTRY_BACK(s,e)  brk_ag_char_map_back(s, e, 41)
#define  IS_SET_SEPARATOR_CHAR( _c)    is_ag_char_map_char((char)(_c), 0x10000C13)
#define SPN_SET_SEPARATOR_CHARS(_s)   spn_ag_char_map_chars(_s, 42)
#define BRK_SET_SEPARATOR_CHARS(_s)   brk_ag_char_map_chars(_s, 42)
#define SPN_SET_SEPARATOR_BACK(s,e)   spn_ag_char_map_back(s, e, 42)
#define BRK_SET_SEPARATOR_BACK(s,e)   brk_ag_char_map_back(s, e, 42)
#define  IS_SIGNED_NUMBER_CHAR( _c)    is_ag_char_map_char((char)(_c), 0x00038000)
#define SPN_SIGNED_NUMBER_CHARS(_s)   spn_ag_char_map_chars(_s, 43)
#define BRK_SIGNED_NUMBER_CHARS(_s)   brk_ag_char_map_chars(_s, 43)
#define SPN_SIGNED_NUMBER_BACK(s,e)   spn_ag_char_map_back(s, e, 43)
#define BRK_SIGNED_NUMBER_BACK(s,e)   brk_ag_char_map_back(s, e, 43)
#define  IS_MAKE_SCRIPT_CHAR( _c)      is_ag_char_map_char((char)(_c), 0x00000101)
#define SPN_MAKE_SCRIPT_CHARS(_s)     spn_ag_char_map_chars(_s, 44)
#define BRK_MAKE_SCRIPT_CHARS(_s)     brk_ag_char_map_chars(_s, 44)
#define SPN_MAKE_SCRIPT_BACK(s,e)     spn_ag_char_map_back(s, e, 44)
#define BRK_MAKE_SCRIPT_BACK(s,e)     brk_ag_char_map_back(s, e, 44)
#define  IS_LOAD_LINE_SKIP_CHAR( _c)   is_ag_char_map_char((char)(_c), 0x00000600)
#define SPN_LOAD_LINE_SKIP_CHARS(_s)  spn_ag_char_map_chars(_s, 45)
#define BRK_LOAD_LINE_SKIP_CHARS(_s)  brk_ag_char_map_chars(_s, 45)
#define SPN_LOAD_LINE_SKIP_BACK(s,e)  spn_ag_char_map_back(s, e, 45)
#define BRK_LOAD_LINE_SKIP_BACK(s,e)  brk_ag_char_map_back(s, e, 45)

static ag_char_map_mask_t const ag_char_map_table[128] = {
  /*NUL*/ 0x00000002, /*x01*/ 0x00000000, /*x02*/ 0x00000000, /*x03*/ 0x00000000,
  /*x04*/ 0x00000000, /*x05*/ 0x00000000, /*x06*/ 0x00000000, /*BEL*/ 0x00000000,
  /* BS*/ 0x00000800, /* HT*/ 0x00000400, /* NL*/ 0x00000001, /* VT*/ 0x00000800,
  /* FF*/ 0x00000800, /* CR*/ 0x00000800, /*x0E*/ 0x00000000, /*x0F*/ 0x00000000,
  /*x10*/ 0x00000000, /*x11*/ 0x00000000, /*x12*/ 0x00000000, /*x13*/ 0x00000000,
  /*x14*/ 0x00000000, /*x15*/ 0x00000000, /*x16*/ 0x00000000, /*x17*/ 0x00000000,
  /*x18*/ 0x00000000, /*x19*/ 0x00000000, /*x1A*/ 0x00000000, /*ESC*/ 0x00000000,
  /*x1C*/ 0x00000000, /*x1D*/ 0x00000000, /*x1E*/ 0x00000000, /*x1F*/ 0x00000000,
  /*   */ 0x00000400, /* ! */ 0x02804000, /* " */ 0x02005000, /* # */ 0x02004000,
  /* $ */ 0x02804100, /* % */ 0x02804008, /* & */ 0x02804000, /* ' */ 0x02005000,
  /* ( */ 0x02006000, /* ) */ 0x02006000, /* * */ 0x02004000, /* + */ 0x12804080,
  /* , */ 0x02004010, /* - */ 0x06A0C200, /* . */ 0x06C04000, /* / */ 0x03804004,
  /* 0 */ 0x08814000, /* 1 */ 0x00814000, /* 2 */ 0x00814000, /* 3 */ 0x00814000,
  /* 4 */ 0x00814000, /* 5 */ 0x00814000, /* 6 */ 0x00814000, /* 7 */ 0x00814000,
  /* 8 */ 0x00824000, /* 9 */ 0x00824000, /* : */ 0x02804020, /* ; */ 0x02004000,
  /* < */ 0x02004000, /* = */ 0x02004000, /* > */ 0x03004000, /* ? */ 0x02004000,
  /* @ */ 0x02804000, /* A */ 0x00944000, /* B */ 0x00944000, /* C */ 0x00944000,
  /* D */ 0x00944000, /* E */ 0x00944000, /* F */ 0x08944000, /* G */ 0x00904000,
  /* H */ 0x00904000, /* I */ 0x00904000, /* J */ 0x00904000, /* K */ 0x00904000,
  /* L */ 0x00904000, /* M */ 0x00904000, /* N */ 0x08904000, /* O */ 0x00904000,
  /* P */ 0x00904000, /* Q */ 0x00904000, /* R */ 0x00904000, /* S */ 0x00904000,
  /* T */ 0x00904000, /* U */ 0x00904000, /* V */ 0x00904000, /* W */ 0x00904000,
  /* X */ 0x00904000, /* Y */ 0x00904000, /* Z */ 0x00904000, /* [ */ 0x02404000,
  /* \ */ 0x02004004, /* ] */ 0x02404000, /* ^ */ 0x02A04000, /* _ */ 0x04804040,
  /* ` */ 0x02004000, /* a */ 0x008C4000, /* b */ 0x008C4000, /* c */ 0x008C4000,
  /* d */ 0x008C4000, /* e */ 0x008C4000, /* f */ 0x088C4000, /* g */ 0x00884000,
  /* h */ 0x00884000, /* i */ 0x00884000, /* j */ 0x00884000, /* k */ 0x00884000,
  /* l */ 0x00884000, /* m */ 0x00884000, /* n */ 0x08884000, /* o */ 0x00884000,
  /* p */ 0x00884000, /* q */ 0x00884000, /* r */ 0x00884000, /* s */ 0x00884000,
  /* t */ 0x00884000, /* u */ 0x00884000, /* v */ 0x00884000, /* w */ 0x00884000,
  /* x */ 0x00884000, /* y */ 0x00884000, /* z */ 0x00884000, /* { */ 0x02004000,
  /* | */ 0x12804000, /* } */ 0x02004000, /* ~ */ 0x0280C000, /*x7F*/ 0x00000000
};

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef _
# define _(_s) _s
#endif

static unsigned char const * ag_char_map_spanners[46];
/**
 *  Character category masks.  Some categories may have multiple bits,
 *  if their definition incorporates other character categories.
 *  This mask array is only used by calc_ag_char_map_spanners().
 */
static ag_char_map_mask_t const ag_char_map_masks[46] = {
    0x00000001, /* NEWLINE         */
    0x00000002, /* NUL_BYTE        */
    0x00000004, /* DIR_SEP         */
    0x00000008, /* PERCENT         */
    0x00000010, /* COMMA           */
    0x00000020, /* COLON           */
    0x00000040, /* UNDERSCORE      */
    0x00000080, /* PLUS            */
    0x00000100, /* DOLLAR          */
    0x00000200, /* OPTION_MARKER   */
    0x00000400, /* HORIZ_WHITE     */
    0x00000800, /* ALT_WHITE       */
    0x00000C01, /* WHITESPACE      */
    0x00000C00, /* NON_NL_WHITE    */
    0x00001000, /* QUOTE           */
    0x00002000, /* PARENTHESES     */
    0x00004000, /* GRAPHIC         */
    0x00008000, /* INVERSION       */
    0x00010000, /* OCT_DIGIT       */
    0x00030000, /* DEC_DIGIT       */
    0x00070000, /* HEX_DIGIT       */
    0x00080000, /* LOWER_CASE      */
    0x00100000, /* UPPER_CASE      */
    0x00180000, /* ALPHABETIC      */
    0x001B0000, /* ALPHANUMERIC    */
    0x00180040, /* VAR_FIRST       */
    0x001B0040, /* VARIABLE_NAME   */
    0x003B0040, /* OPTION_NAME     */
    0x003B0060, /* VALUE_NAME      */
    0x00400000, /* NAME_SEP        */
    0x007B0460, /* COMPOUND_NAME   */
    0x00003000, /* SCHEME_NOTE     */
    0x00800000, /* UNQUOTABLE      */
    0x01000C01, /* END_XML_TOKEN   */
    0x00000C81, /* PLUS_N_SPACE    */
    0x02000000, /* PUNCTUATION     */
    0x041B0000, /* SUFFIX          */
    0x041B000C, /* SUFFIX_FMT      */
    0x08000002, /* FALSE_TYPE      */
    0x041B0004, /* FILE_NAME       */
    0x00000C03, /* END_TOKEN       */
    0x00000C13, /* END_LIST_ENTRY  */
    0x10000C13, /* SET_SEPARATOR   */
    0x00038000, /* SIGNED_NUMBER   */
    0x00000101, /* MAKE_SCRIPT     */
    0x00000600, /* LOAD_LINE_SKIP  */
};

#undef  LOCK_SPANNER_TABLES

static unsigned char const *
calc_ag_char_map_spanners(unsigned int mask_ix)
{
#ifdef LOCK_SPANNER_TABLES
    if (ag_char_map_spanners[mask_ix] != NULL)
        return ag_char_map_spanners[mask_ix];

    pthread_mutex_lock(&ag_char_map_mutex);
    if (ag_char_map_spanners[mask_ix] == NULL)
#endif
    {
        int ix = 1;
        ag_char_map_mask_t mask = ag_char_map_masks[mask_ix];
        unsigned char * res = malloc(256 /* 1 << NBBY */);
        if (res == NULL) {
            fputs(_("no memory for char-mapper span map\n"), stderr);
            exit(EXIT_FAILURE);
        }

        memset(res, 0, 256);
        for (; ix < 128; ix++)
            if (ag_char_map_table[ix] & mask)
                res[ix] = 1;
        ag_char_map_spanners[mask_ix] = res;
    }
#ifdef LOCK_SPANNER_TABLES
    pthread_mutex_unlock(&ag_char_map_mutex);
#endif
    return ag_char_map_spanners[mask_ix];
}
#define ag_char_map_masks POISONED_ag_char_map_masks

static inline int
is_ag_char_map_char(char ch, ag_char_map_mask_t mask)
{
    unsigned int ix = (unsigned char)ch;
    return ((ix < 128) && ((ag_char_map_table[ix] & mask) != 0));
}

static inline char *
spn_ag_char_map_chars(char const * p, unsigned int mask_ix)
{
    unsigned char const * v = ag_char_map_spanners[mask_ix];
    if (v == NULL)
        v = calc_ag_char_map_spanners(mask_ix);
    while (v[(unsigned)*p])  p++;
    return (char *)(uintptr_t)p;
}

static inline char *
brk_ag_char_map_chars(char const * p, unsigned int mask_ix)
{
    unsigned char const * v = ag_char_map_spanners[mask_ix];
    if (v == NULL)
        v = calc_ag_char_map_spanners(mask_ix);
    while ((*p != '\0') && (! v[(unsigned)*p]))  p++;
    return (char *)(uintptr_t)p;
}

static inline char *
spn_ag_char_map_back(char const * s, char const * e, unsigned int mask_ix)
{
    unsigned char const * v = ag_char_map_spanners[mask_ix];
    if (v == NULL)
        v = calc_ag_char_map_spanners(mask_ix);
    if (s >= e) e = s + strlen(s);
    while ((e > s) && v[(unsigned)e[-1]])  e--;
    return (char *)(uintptr_t)e;
}

static inline char *
brk_ag_char_map_back(char const * s, char const * e, unsigned int mask_ix)
{
    unsigned char const * v = ag_char_map_spanners[mask_ix];
    if (v == NULL)
        v = calc_ag_char_map_spanners(mask_ix);
    if (s == e) e += strlen(e);
    while ((e > s) && (! v[(unsigned)e[-1]]))  e--;
    return (char *)(uintptr_t)e;
}
#endif /* AG_CHAR_MAP_H_GUARD */
