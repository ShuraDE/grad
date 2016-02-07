#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

// Default versioning level
#define DEFAULT_VERSIONING_LEVEL 2


#define SFUNC(var1) TRIPLES(ADDON,fnc,var1)
#define IFUNC(var1) TRIPLES(BIS,fnc,var1)
#define STRVAR(var1) #DOUBLES(PREFIX,var1)

#define ARR_SELECT(ARRAY,INDEX,DEFAULT) if (count ARRAY > INDEX) then {ARRAY select INDEX} else {DEFAULT}

#ifdef DISABLE_COMPILE_CACHE
    #define PREP(fncName) SFUNC(fncName) = compile preprocessFileLineNumbers QUOTE(PATHTOF(functions\DOUBLES(fnc,fncName).sqf))
#else
    #define PREP(fncName) SFUNC(fncName) = QUOTE(PATHTOF(functions\DOUBLES(fnc,fncName).sqf)) call SLX_XEH_COMPILE
#endif



#define GRAD_isHC (!hasInterface && !isDedicated)

//By default CBA's TRACE/LOG/WARNING spawn a buffer, which can cause messages to be logged out of order:
#ifdef CBA_DEBUG_SYNCHRONOUS
    #define CBA_fnc_log { params ["_file","_lineNum","_message"]; diag_log [diag_frameNo, diag_tickTime, time,  _file + ":"+str(_lineNum + 1), _message]; }
#endif

#define LOG_WARN(MESSAGE) [THIS_FILE_, __LINE__, ('WARNING: ' + MESSAGE)] call CBA_fnc_log
#define LOG_INFO(MESSAGE) [THIS_FILE_, __LINE__, ('INFO: ' + MESSAGE)] call CBA_fnc_log
#define LOG_ERR(MESSAGE)  [THIS_FILE_, __LINE__, "ERROR", MESSAGE] call CBA_fnc_error;
