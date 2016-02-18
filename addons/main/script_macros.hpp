#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

// Default versioning level
#define DEFAULT_VERSIONING_LEVEL 2


#define FNC_SMC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)  //MOD Function (Module Cross)
#define FNC_SMI(var1) TRIPLES(ADDON,fnc,var1) //MOD Function (Module Intern)
#define FNC_BIS(var1) TRIPLES(BIS,fnc,var1)   //BIS Function
#define FNC_CBA(var1) TRIPLES(CBA,fnc,var1)   //CBA Function#

#define REM_SMI(var1) TRIPLES('ADDON,fnc,var1') //function name as string
#define REM_SMC(var1,var2) TRIPLES('DOUBLES(PREFIX,var1),fnc,var2') //function name as string (Modul Cross)

#define VAR_SMC(var1,var2) QUOTE(TRIPLES(PREFIX,var1,var2))
#define VAR_SMI(var1) QUOTE(DOUBLES(ADDON,var1))

//remote execute macros
// TODO check
//<params> remoteExecCall [<function>,(<target>,<isPersistent>)];
#define RE_SMI_SRV(params,function) { params ["_params","_func"] if (!isServer) exitWith {_params remoteExecCall [REM_SMI(function), 2]}}
#define RE_SMI_AT(params,function,target) params remoteExecCall [REM_SMI(function), target]
#define RE_SMI_AT_JIP(params,function,target) params remoteExecCall [REM_SMI(function), target, true]

#define RE_SMC_SRV(params,modul,function) { params ["_params","_modul", "_func"] if (!isServer) exitWith {_params remoteExecCall [REM_SMC(modul,function), 2]}}
#define RE_SMC_AT(params,modul,function,target) params remoteExecCall [REM_SMC(modul,function), target]
#define RE_SMC_AT_JIP(params,modul,function,target) params remoteExecCall [REM_SMC(modul,function), target, true]


#define ARR_SELECT(ARRAY,INDEX,DEFAULT) if (count ARRAY > INDEX) then {ARRAY select INDEX} else {DEFAULT}


#ifdef DISABLE_COMPILE_CACHE
    #define PREP(fncName) SMIFUNC(fncName) = compile preprocessFileLineNumbers QUOTE(PATHTOF(functions\DOUBLES(fnc,fncName).sqf))
#else
    #define PREP(fncName) [QUOTE(PATHTOF(functions\DOUBLES(fnc,fncName).sqf)), QFUNC(fncName)] call SLX_XEH_COMPILE_NEW
#endif

#define GRAD_isHC (!hasInterface && !isDedicated)

// TODO brauchen wir das noch ?
#define GA_fnc_LOG { params ["_file","_lineNum","_addon","_message"]; diag_log [_addon,diag_frameNo, diag_tickTime, time,  _file + ":"+str(_lineNum + 1), _message];}

#define LOG_FORMAT(module,level,file,lnr, message) FORMAT_4(QUOTE([GRAD] %1 (module) %3|%4: %2),level, message, file, lnr)
#define LOG_BASE(module,level,message) diag_log text LOG_FORMAT(module,level,__FILE__, __LINE__,message)
#define LOG_ERR(message) LOG_BASE(COMPONENT,"ERROR",message)
#define LOG_INFO(message) LOG_BASE(COMPONENT,"INFO",message)
#define LOG_WARN(message) LOG_BASE(COMPONENT,"WARN",message)

#ifdef DEBUG_MODE_FULL
    #define LOG_DEBUG(message) LOG_BASE(COMPONENT,"DEBUG",message)
#else
    //kein output erzeugen
    #define LOG_DEBUG(message)
#endif

//hash macros
#define HASH_NEW(haarray, defValue)         ([haarray, defValue] call FNC_CBA(hashCreate)) //creates a new hash [[]]
#define HASH_GET(haarray, keyValue)         ([haarray, keyValue] call FNC_CBA(hashGet)) //get value entry from key
#define HASH_SET(haarray, keyValue, value)  ([haarray, keyValue, value] call FNC_CBA(hashSet)) //set new value with given key, replace if exists
#define HASH_HAS_KEY(haarray, keyValue)     ([haarray, keyValue] call FNC_CBA(hashHasKey)) //check key exists, return true if exists
#define HASH_REM(haarray, keyValue)         ([haarray, keyValue] call FNC_CBA(hashRem)) //remove entry from hash table with given key
#define HASH_FOREACH(haarray, codeValue)    ([haarray, codeValue] call FNC_CBA(hashEachPair)) // execute code each element. using _key and _value
#define HASH_IS_HASH(object)                (_object call FNC_CBA(isHash)) // return true if is hashtable
