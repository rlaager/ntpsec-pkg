/*   -*- buffer-read-only: t -*- vi: set ro:
 *  
 *  DO NOT EDIT THIS FILE   (usage-txt.h)
 *  
 *  It has been AutoGen-ed  Friday December 31, 2004 at 08:18:58 PM PST
 *  From the definitions    usage-txt.def
 *  and the template file   usage-txt.tpl
 *
 *  This file handles all the bookkeeping required for tracking
 *  all the little tiny strings used by the AutoOpts library.
 *  There are 96 of them.
 *
 *  AutoOpts is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *  
 *  AutoOpts is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *  
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with AutoOpts; if not, write to:
 *             The Free Software Foundation, Inc.,
 *             59 Temple Place - Suite 330,
 *             Boston,  MA  02111-1307, USA.
 */
#ifndef AUTOOPTS_USAGE_TXT_H_GUARD
#define AUTOOPTS_USAGE_TXT_H_GUARD

#undef  cch_t
#define cch_t const char

/*
 *  One structure to hold all the pointers to all the stringlets.
 */
typedef struct {
  int       field_ct;
  cch_t*    utpz_AO_Big;
  cch_t*    utpz_AO_Err;
  cch_t*    utpz_AO_Sml;
  cch_t*    utpz_All;
  cch_t*    utpz_Alt;
  cch_t*    utpz_AmbigKey;
  cch_t*    utpz_Ambiguous;
  cch_t*    utpz_ArgsMust;
  cch_t*    utpz_AtMost;
  cch_t*    utpz_Auto;
  cch_t*    utpz_BadPipe;
  cch_t*    utpz_BadVerArg;
  cch_t*    utpz_CantFmt;
  cch_t*    utpz_CantSave;
  cch_t*    utpz_DefaultOpt;
  cch_t*    utpz_Dis;
  cch_t*    utpz_Enab;
  cch_t*    utpz_Equiv;
  cch_t*    utpz_ErrOnly;
  cch_t*    utpz_ExamineFmt;
  cch_t*    utpz_FiveSpaces;
  cch_t*    utpz_FlagOkay;
  cch_t*    utpz_FmtFmt;
  cch_t*    utpz_ForkFail;
  cch_t*    utpz_Genshell;
  char*     utpz_GnuBoolArg;
  cch_t*    utpz_GnuBreak;
  char*     utpz_GnuKeyArg;
  char*     utpz_GnuKeyLArg;
  char*     utpz_GnuNumArg;
  cch_t*    utpz_GnuOptArg;
  cch_t*    utpz_GnuOptFmt;
  char*     utpz_GnuStrArg;
  cch_t*    utpz_HomePath;
  cch_t*    utpz_IllOptChr;
  cch_t*    utpz_IllOptStr;
  cch_t*    utpz_Illegal;
  cch_t*    utpz_InvalOptDesc;
  cch_t*    utpz_Members;
  cch_t*    utpz_MisArg;
  cch_t*    utpz_MultiEquiv;
  cch_t*    utpz_Must;
  cch_t*    utpz_NeedOne;
  cch_t*    utpz_NoArg;
  cch_t*    utpz_NoArgs;
  cch_t*    utpz_NoCreat;
  cch_t*    utpz_NoFlags;
  cch_t*    utpz_NoKey;
  cch_t*    utpz_NoLim;
  cch_t*    utpz_NoPreset;
  cch_t*    utpz_NoRq_NoShrtTtl;
  cch_t*    utpz_NoRq_ShrtTtl;
  cch_t*    utpz_NoStat;
  cch_t*    utpz_NoState;
  cch_t*    utpz_None;
  cch_t*    utpz_NotDef;
  cch_t*    utpz_NotEnough;
  cch_t*    utpz_NotFile;
  cch_t*    utpz_NotNumber;
  cch_t*    utpz_NrmOptFmt;
  cch_t*    utpz_NumberOpt;
  cch_t*    utpz_OneSpace;
  cch_t*    utpz_OnlyOne;
  cch_t*    utpz_OptsOnly;
  cch_t*    utpz_PathFmt;
  cch_t*    utpz_PlsSendBugs;
  cch_t*    utpz_Preset;
  cch_t*    utpz_PresetFile;
  cch_t*    utpz_PresetIntro;
  cch_t*    utpz_Prohib;
  cch_t*    utpz_Reorder;
  cch_t*    utpz_ReqFmt;
  cch_t*    utpz_ReqOptFmt;
  cch_t*    utpz_ReqThese;
  cch_t*    utpz_Req_NoShrtTtl;
  cch_t*    utpz_Req_ShrtTtl;
  cch_t*    utpz_SepChars;
  cch_t*    utpz_SetMemberSettings;
  cch_t*    utpz_ShrtGnuOptFmt;
  cch_t*    utpz_SixSpaces;
  cch_t*    utpz_StdBoolArg;
  cch_t*    utpz_StdBreak;
  cch_t*    utpz_StdKeyArg;
  cch_t*    utpz_StdKeyLArg;
  cch_t*    utpz_StdNoArg;
  cch_t*    utpz_StdNumArg;
  cch_t*    utpz_StdOptArg;
  cch_t*    utpz_StdReqArg;
  cch_t*    utpz_StdStrArg;
  cch_t*    utpz_TabHyp;
  cch_t*    utpz_TabHypAnd;
  cch_t*    utpz_Tabout;
  cch_t*    utpz_ThreeSpaces;
  cch_t*    utpz_TwoSpaces;
  cch_t*    utpz_UpTo;
  cch_t*    utpz_ValidKeys;
} usage_text_t;

/*
 *  Declare the global structure with all the pointers to translated
 *  strings.  This is then used by the usage generation procedure.
 */
extern usage_text_t option_usage_text;

#if defined(AUTOOPTS_INTERNAL) /* DEFINE ALL THE STRINGS = = = = = */
/*
 *  Provide a mapping from a short name to fields in this structure.
 */
#define zAO_Big               option_usage_text.utpz_AO_Big
#define zAO_Err               option_usage_text.utpz_AO_Err
#define zAO_Sml               option_usage_text.utpz_AO_Sml
#define zAll                  option_usage_text.utpz_All
#define zAlt                  option_usage_text.utpz_Alt
#define zAmbigKey             option_usage_text.utpz_AmbigKey
#define zAmbiguous            option_usage_text.utpz_Ambiguous
#define zArgsMust             option_usage_text.utpz_ArgsMust
#define zAtMost               option_usage_text.utpz_AtMost
#define zAuto                 option_usage_text.utpz_Auto
#define zBadPipe              option_usage_text.utpz_BadPipe
#define zBadVerArg            option_usage_text.utpz_BadVerArg
#define zCantFmt              option_usage_text.utpz_CantFmt
#define zCantSave             option_usage_text.utpz_CantSave
#define zDefaultOpt           option_usage_text.utpz_DefaultOpt
#define zDis                  option_usage_text.utpz_Dis
#define zEnab                 option_usage_text.utpz_Enab
#define zEquiv                option_usage_text.utpz_Equiv
#define zErrOnly              option_usage_text.utpz_ErrOnly
#define zExamineFmt           option_usage_text.utpz_ExamineFmt
#define zFiveSpaces           option_usage_text.utpz_FiveSpaces
#define zFlagOkay             option_usage_text.utpz_FlagOkay
#define zFmtFmt               option_usage_text.utpz_FmtFmt
#define zForkFail             option_usage_text.utpz_ForkFail
#define zGenshell             option_usage_text.utpz_Genshell
#define zGnuBoolArg           option_usage_text.utpz_GnuBoolArg
#define zGnuBreak             option_usage_text.utpz_GnuBreak
#define zGnuKeyArg            option_usage_text.utpz_GnuKeyArg
#define zGnuKeyLArg           option_usage_text.utpz_GnuKeyLArg
#define zGnuNumArg            option_usage_text.utpz_GnuNumArg
#define zGnuOptArg            option_usage_text.utpz_GnuOptArg
#define zGnuOptFmt            option_usage_text.utpz_GnuOptFmt
#define zGnuStrArg            option_usage_text.utpz_GnuStrArg
#define zHomePath             option_usage_text.utpz_HomePath
#define zIllOptChr            option_usage_text.utpz_IllOptChr
#define zIllOptStr            option_usage_text.utpz_IllOptStr
#define zIllegal              option_usage_text.utpz_Illegal
#define zInvalOptDesc         option_usage_text.utpz_InvalOptDesc
#define zMembers              option_usage_text.utpz_Members
#define zMisArg               option_usage_text.utpz_MisArg
#define zMultiEquiv           option_usage_text.utpz_MultiEquiv
#define zMust                 option_usage_text.utpz_Must
#define zNeedOne              option_usage_text.utpz_NeedOne
#define zNoArg                option_usage_text.utpz_NoArg
#define zNoArgs               option_usage_text.utpz_NoArgs
#define zNoCreat              option_usage_text.utpz_NoCreat
#define zNoFlags              option_usage_text.utpz_NoFlags
#define zNoKey                option_usage_text.utpz_NoKey
#define zNoLim                option_usage_text.utpz_NoLim
#define zNoPreset             option_usage_text.utpz_NoPreset
#define zNoRq_NoShrtTtl       option_usage_text.utpz_NoRq_NoShrtTtl
#define zNoRq_ShrtTtl         option_usage_text.utpz_NoRq_ShrtTtl
#define zNoStat               option_usage_text.utpz_NoStat
#define zNoState              option_usage_text.utpz_NoState
#define zNone                 option_usage_text.utpz_None
#define zNotDef               option_usage_text.utpz_NotDef
#define zNotEnough            option_usage_text.utpz_NotEnough
#define zNotFile              option_usage_text.utpz_NotFile
#define zNotNumber            option_usage_text.utpz_NotNumber
#define zNrmOptFmt            option_usage_text.utpz_NrmOptFmt
#define zNumberOpt            option_usage_text.utpz_NumberOpt
#define zOneSpace             option_usage_text.utpz_OneSpace
#define zOnlyOne              option_usage_text.utpz_OnlyOne
#define zOptsOnly             option_usage_text.utpz_OptsOnly
#define zPathFmt              option_usage_text.utpz_PathFmt
#define zPlsSendBugs          option_usage_text.utpz_PlsSendBugs
#define zPreset               option_usage_text.utpz_Preset
#define zPresetFile           option_usage_text.utpz_PresetFile
#define zPresetIntro          option_usage_text.utpz_PresetIntro
#define zProhib               option_usage_text.utpz_Prohib
#define zReorder              option_usage_text.utpz_Reorder
#define zReqFmt               option_usage_text.utpz_ReqFmt
#define zReqOptFmt            option_usage_text.utpz_ReqOptFmt
#define zReqThese             option_usage_text.utpz_ReqThese
#define zReq_NoShrtTtl        option_usage_text.utpz_Req_NoShrtTtl
#define zReq_ShrtTtl          option_usage_text.utpz_Req_ShrtTtl
#define zSepChars             option_usage_text.utpz_SepChars
#define zSetMemberSettings    option_usage_text.utpz_SetMemberSettings
#define zShrtGnuOptFmt        option_usage_text.utpz_ShrtGnuOptFmt
#define zSixSpaces            option_usage_text.utpz_SixSpaces
#define zStdBoolArg           option_usage_text.utpz_StdBoolArg
#define zStdBreak             option_usage_text.utpz_StdBreak
#define zStdKeyArg            option_usage_text.utpz_StdKeyArg
#define zStdKeyLArg           option_usage_text.utpz_StdKeyLArg
#define zStdNoArg             option_usage_text.utpz_StdNoArg
#define zStdNumArg            option_usage_text.utpz_StdNumArg
#define zStdOptArg            option_usage_text.utpz_StdOptArg
#define zStdReqArg            option_usage_text.utpz_StdReqArg
#define zStdStrArg            option_usage_text.utpz_StdStrArg
#define zTabHyp               option_usage_text.utpz_TabHyp
#define zTabHypAnd            option_usage_text.utpz_TabHypAnd
#define zTabout               option_usage_text.utpz_Tabout
#define zThreeSpaces          option_usage_text.utpz_ThreeSpaces
#define zTwoSpaces            option_usage_text.utpz_TwoSpaces
#define zUpTo                 option_usage_text.utpz_UpTo
#define zValidKeys            option_usage_text.utpz_ValidKeys

  /*
   *  First, set up the strings.  Some of these are writable.  These are all in
   *  English.  This gets compiled into libopts and is distributed here so that
   *  xgettext (or equivalents) can extract these strings for translation.
   */

  static  cch_t   eng_zAO_Big[] =
          "\tThis exceeds the compiled library version:  ";
  static  cch_t   eng_zAO_Err[] =
          "Automated Options Processing Error!\n\
\t%s called optionProcess with structure version %d:%d:%d.\n";
  static  cch_t   eng_zAO_Sml[] =
          "\tThis is less than the minimum library version:  ";
  static  cch_t   eng_zAll[] =
          "all";
  static  cch_t   eng_zAlt[] =
          "\t\t\t\t- an alternate for %s\n";
  static  cch_t   eng_zAmbigKey[] =
          "%s error:  the keyword `%s' is ambiguous\n";
  static  cch_t   eng_zAmbiguous[] =
          "ambiguous";
  static  cch_t   eng_zArgsMust[] =
          "%s: Command line arguments required\n";
  static  cch_t   eng_zAtMost[] =
          "%4$d %1$s%s options allowed\n";
  static  cch_t   eng_zAuto[] =
          "version and help options:";
  static  cch_t   eng_zBadPipe[] =
          "Error %d (%s) from the pipe(2) syscall\n";
  static  cch_t   eng_zBadVerArg[] =
          "ERROR: version option argument '%c' invalid.  Use:\n\
\t'v' - version only\n\
\t'c' - version and copyright\n\
\t'n' - version and copyright notice\n";
  static  cch_t   eng_zCantFmt[] =
          "ERROR:  %s option conflicts with the %s option\n";
  static  cch_t   eng_zCantSave[] =
          "%s(optionSaveState): error: cannot allocate %d bytes\n";
  static  cch_t   eng_zDefaultOpt[] =
          "\t\t\t\t- default option for unnamed options\n";
  static  cch_t   eng_zDis[] =
          "\t\t\t\t- disabled as --%s\n";
  static  cch_t   eng_zEnab[] =
          "\t\t\t\t- enabled by default\n";
  static  cch_t   eng_zEquiv[] =
          "-equivalence";
  static  cch_t   eng_zErrOnly[] =
          "ERROR:  only ";
  static  cch_t   eng_zExamineFmt[] =
          " - examining environment variables named %s_*\n";
  static  cch_t   eng_zFiveSpaces[] =
          "     ";
  static  cch_t   eng_zFlagOkay[] =
          "Options are specified by doubled hyphens and their name\n\
or by a single hyphen and the flag character.\n";
  static  cch_t   eng_zFmtFmt[] =
          "%%-%ds %%s\n";
  static  cch_t   eng_zForkFail[] =
          "fs error %d (%s) on fork - cannot obtain %s usage\n";
  static  cch_t   eng_zGenshell[] =
          "\n\
= = = = = = = =\n\n\
This incarnation of genshell will produce\n\
a shell script to parse the options for %s:\n\n";
  static  char    eng_zGnuBoolArg[] =
          "=T/F";
  static  cch_t   eng_zGnuBreak[] =
          "\n\
%s\n\n";
  static  char    eng_zGnuKeyArg[] =
          "=KWd";
  static  char    eng_zGnuKeyLArg[] =
          "=Mbr";
  static  char    eng_zGnuNumArg[] =
          "=num";
  static  cch_t   eng_zGnuOptArg[] =
          "[=arg]";
  static  cch_t   eng_zGnuOptFmt[] =
          "--%2$s%1$s";
  static  char    eng_zGnuStrArg[] =
          "=str";
  static  cch_t   eng_zHomePath[] =
          " - reading file /... %s's exe directory .../%s \n";
  static  cch_t   eng_zIllOptChr[] =
          "%s: illegal option -- %c\n";
  static  cch_t   eng_zIllOptStr[] =
          "%s: %s option -- %s\n";
  static  cch_t   eng_zIllegal[] =
          "illegal";
  static  cch_t   eng_zInvalOptDesc[] =
          "AutoOpts ERROR:  invalid option descriptor for %s\n";
  static  cch_t   eng_zMembers[] =
          "\t\t\t\t- is a set membership option\n";
  static  cch_t   eng_zMisArg[] =
          "%s: option `%s' requires an argument\n";
  static  cch_t   eng_zMultiEquiv[] =
          "Equivalenced option '%s' was equivalenced to both\n\
\t'%s' and '%s'";
  static  cch_t   eng_zMust[] =
          "\t\t\t\t- must appear between %d and %d times\n";
  static  cch_t   eng_zNeedOne[] =
          "ERROR:  The %s option is required\n";
  static  cch_t   eng_zNoArg[] =
          "%s: option `%s' cannot have an argument\n";
  static  cch_t   eng_zNoArgs[] =
          "%s: Command line arguments not allowed\n";
  static  cch_t   eng_zNoCreat[] =
          "error %d (%s) creating %s\n";
  static  cch_t   eng_zNoFlags[] =
          "Options are specified by single or double hyphens and their name.\n";
  static  cch_t   eng_zNoKey[] =
          "%s error:  `%s' does not match any keywords\n";
  static  cch_t   eng_zNoLim[] =
          "\t\t\t\t- may appear multiple times\n";
  static  cch_t   eng_zNoPreset[] =
          "\t\t\t\t- may not be preset\n";
  static  cch_t   eng_zNoRq_NoShrtTtl[] =
          "   Arg Option-Name    Description\n";
  static  cch_t   eng_zNoRq_ShrtTtl[] =
          "  Flg Arg Option-Name    Description\n";
  static  cch_t   eng_zNoStat[] =
          "error %d (%s) stat-ing %s\n";
  static  cch_t   eng_zNoState[] =
          "%s(optionRestore): error: no saved option state\n";
  static  cch_t   eng_zNone[] =
          "none";
  static  cch_t   eng_zNotDef[] =
          "'%s' not defined\n";
  static  cch_t   eng_zNotEnough[] =
          "ERROR:  The %s option must appear %d times\n";
  static  cch_t   eng_zNotFile[] =
          "error:  cannot load options from non-regular file %s\n";
  static  cch_t   eng_zNotNumber[] =
          "%s error:  `%s' is not a recognizable number\n";
  static  cch_t   eng_zNrmOptFmt[] =
          " %3s %s";
  static  cch_t   eng_zNumberOpt[] =
          "The '-#<number>' option may omit the hash char\n";
  static  cch_t   eng_zOneSpace[] =
          " ";
  static  cch_t   eng_zOnlyOne[] =
          "one %s%s option allowed\n";
  static  cch_t   eng_zOptsOnly[] =
          "All arguments are named options.\n";
  static  cch_t   eng_zPathFmt[] =
          " - reading file %s";
  static  cch_t   eng_zPlsSendBugs[] =
          "\n\
please send bug reports to:  %s\n";
  static  cch_t   eng_zPreset[] =
          "\t\t\t\t- may NOT appear - preset only\n";
  static  cch_t   eng_zPresetFile[] =
          "#  preset/initialization file\n\
#  %s#\n";
  static  cch_t   eng_zPresetIntro[] =
          "\n\
The following option preset mechanisms are supported:\n";
  static  cch_t   eng_zProhib[] =
          "prohibits these options:\n";
  static  cch_t   eng_zReorder[] =
          "Operands and options may be intermixed.  They will be reordered.\n";
  static  cch_t   eng_zReqFmt[] =
          "ERROR:  %s option requires the %s option\n";
  static  cch_t   eng_zReqOptFmt[] =
          " %3s %-14s %s";
  static  cch_t   eng_zReqThese[] =
          "requires these options:\n";
  static  cch_t   eng_zReq_NoShrtTtl[] =
          "   Arg Option-Name   Req?  Description\n";
  static  cch_t   eng_zReq_ShrtTtl[] =
          "  Flg Arg Option-Name   Req?  Description\n";
  static  cch_t   eng_zSepChars[] =
          "-_^";
  static  cch_t   eng_zSetMemberSettings[] =
          "or you may use a numeric representation.  Preceding these with a '!' will\n\
clear the bits, specifying 'none' will clear all bits, and 'all' will set them\n\
all.  Multiple entries may be passed as an option argument list.\n";
  static  cch_t   eng_zShrtGnuOptFmt[] =
          "%s";
  static  cch_t   eng_zSixSpaces[] =
          "      ";
  static  cch_t   eng_zStdBoolArg[] =
          "T/F";
  static  cch_t   eng_zStdBreak[] =
          "\n\
%s\n\n\
%s";
  static  cch_t   eng_zStdKeyArg[] =
          "KWd";
  static  cch_t   eng_zStdKeyLArg[] =
          "Mbr";
  static  cch_t   eng_zStdNoArg[] =
          "no ";
  static  cch_t   eng_zStdNumArg[] =
          "Num";
  static  cch_t   eng_zStdOptArg[] =
          "opt";
  static  cch_t   eng_zStdReqArg[] =
          "YES";
  static  cch_t   eng_zStdStrArg[] =
          "Str";
  static  cch_t   eng_zTabHyp[] =
          "\t\t\t\t- ";
  static  cch_t   eng_zTabHypAnd[] =
          "\t\t\t\t-- and ";
  static  cch_t   eng_zTabout[] =
          "\t\t\t\t%s\n";
  static  cch_t   eng_zThreeSpaces[] =
          "   ";
  static  cch_t   eng_zTwoSpaces[] =
          "  ";
  static  cch_t   eng_zUpTo[] =
          "\t\t\t\t- may appear up to %d times\n";
  static  cch_t   eng_zValidKeys[] =
          "The valid \"%s\" option keywords are:\n";

  /*
   *  Now, define (and initialize) the structure that contains
   *  the pointers to all these strings.
   *  Aren't you glad you don't maintain this by hand?
   */
  usage_text_t option_usage_text = {
    96,
    eng_zAO_Big,            eng_zAO_Err,            eng_zAO_Sml,
    eng_zAll,               eng_zAlt,               eng_zAmbigKey,
    eng_zAmbiguous,         eng_zArgsMust,          eng_zAtMost,
    eng_zAuto,              eng_zBadPipe,           eng_zBadVerArg,
    eng_zCantFmt,           eng_zCantSave,          eng_zDefaultOpt,
    eng_zDis,               eng_zEnab,              eng_zEquiv,
    eng_zErrOnly,           eng_zExamineFmt,        eng_zFiveSpaces,
    eng_zFlagOkay,          eng_zFmtFmt,            eng_zForkFail,
    eng_zGenshell,          eng_zGnuBoolArg,        eng_zGnuBreak,
    eng_zGnuKeyArg,         eng_zGnuKeyLArg,        eng_zGnuNumArg,
    eng_zGnuOptArg,         eng_zGnuOptFmt,         eng_zGnuStrArg,
    eng_zHomePath,          eng_zIllOptChr,         eng_zIllOptStr,
    eng_zIllegal,           eng_zInvalOptDesc,      eng_zMembers,
    eng_zMisArg,            eng_zMultiEquiv,        eng_zMust,
    eng_zNeedOne,           eng_zNoArg,             eng_zNoArgs,
    eng_zNoCreat,           eng_zNoFlags,           eng_zNoKey,
    eng_zNoLim,             eng_zNoPreset,          eng_zNoRq_NoShrtTtl,
    eng_zNoRq_ShrtTtl,      eng_zNoStat,            eng_zNoState,
    eng_zNone,              eng_zNotDef,            eng_zNotEnough,
    eng_zNotFile,           eng_zNotNumber,         eng_zNrmOptFmt,
    eng_zNumberOpt,         eng_zOneSpace,          eng_zOnlyOne,
    eng_zOptsOnly,          eng_zPathFmt,           eng_zPlsSendBugs,
    eng_zPreset,            eng_zPresetFile,        eng_zPresetIntro,
    eng_zProhib,            eng_zReorder,           eng_zReqFmt,
    eng_zReqOptFmt,         eng_zReqThese,          eng_zReq_NoShrtTtl,
    eng_zReq_ShrtTtl,       eng_zSepChars,          eng_zSetMemberSettings,
    eng_zShrtGnuOptFmt,     eng_zSixSpaces,         eng_zStdBoolArg,
    eng_zStdBreak,          eng_zStdKeyArg,         eng_zStdKeyLArg,
    eng_zStdNoArg,          eng_zStdNumArg,         eng_zStdOptArg,
    eng_zStdReqArg,         eng_zStdStrArg,         eng_zTabHyp,
    eng_zTabHypAnd,         eng_zTabout,            eng_zThreeSpaces,
    eng_zTwoSpaces,         eng_zUpTo,              eng_zValidKeys
  };

#endif /* DO_TRANSLATIONS */
#endif /* AUTOOPTS_USAGE_TXT_H_GUARD */
