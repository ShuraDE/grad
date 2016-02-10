#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

// Default versioning level
#define DEFAULT_VERSIONING_LEVEL 2


#define SMEFUNC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)  //MOD Function (Module Cross)
#define SMIFUNC(var1) TRIPLES(ADDON,fnc,var1) //MOD Function (Module Intern)
#define BFUNC(var1) TRIPLES(BIS,fnc,var1)   // BIS Function
#define CFUNC(var1) TRIPLES(CBA,fnc,var1)  //CBA Function

#define SMEVAR(var1,var2) QUOTE(TRIPLES(PREFIX,var1,var2))
#define SMIVAR(var1) QUOTE(DOUBLES(ADDON,var1))

/*//entfernen++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#ifndef CBA_DEBUG_SYNCHRONOUS
      #define CBA_DEBUG_SYNCHRONOUS(var1,var2,var3) [var1,var2,var3] call CBA_fnc_mlog
      #define PATHDEBUG(var1) QUOTE(PATHTOF(functions\DOUBLES(fnc,var1).sqf))
#endif
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
#define ARR_SELECT(ARRAY,INDEX,DEFAULT) if (count ARRAY > INDEX) then {ARRAY select INDEX} else {DEFAULT}

#ifdef DISABLE_COMPILE_CACHE
    #define PREP(fncName) SMIFUNC(fncName) = compile preprocessFileLineNumbers QUOTE(PATHTOF(functions\DOUBLES(fnc,fncName).sqf))
#else
    #define PREP(fncName) SMIFUNC(fncName) = QUOTE(PATHTOF(functions\DOUBLES(fnc,fncName).sqf)) call SLX_XEH_COMPILE
#endif



#define GRAD_isHC (!hasInterface && !isDedicated)

//By default CBA's TRACE/LOG/WARNING spawn a buffer, which can cause messages to be logged out of order:
#ifdef CBA_DEBUG_SYNCHRONOUS
    #define CBA_fnc_mlog { params ["_file","_lineNum","_message"]; diag_log [diag_frameNo, diag_tickTime, time,  _file + ":"+str(_lineNum + 1), _message];}
#endif

#define LOG_WARN(MESSAGE) [THIS_FILE_, __LINE__, ('WARNING: ' + MESSAGE)] call CBA_fnc_log
#define LOG_INFO(MESSAGE) [THIS_FILE_, __LINE__, ('INFO: ' + MESSAGE)] call CBA_fnc_log
#define LOG_ERR(MESSAGE)  [THIS_FILE_, __LINE__, "ERROR", MESSAGE] call CBA_fnc_error;
