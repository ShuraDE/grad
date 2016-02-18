#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

// Default versioning level
#define DEFAULT_VERSIONING_LEVEL 2


#define SMEFUNC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)  //MOD Function (Module Cross)
#define SMIFUNC(var1) TRIPLES(ADDON,fnc,var1) //MOD Function (Module Intern)
#define BISFUNC(var1) TRIPLES(BIS,fnc,var1)   //BIS Function
#define CBAFUNC(var1) TRIPLES(CBA,fnc,var1)   //CBA Function#

#define REMFUNC(var1) TRIPLES('ADDON,fnc,var1') //function name as string
#define REMMCFUNC(var1,var2) TRIPLES('DOUBLES(PREFIX,var1),fnc,var2') //function name as string (Modul Cross)

#define SMEVAR(var1,var2) QUOTE(TRIPLES(PREFIX,var1,var2))
#define SMIVAR(var1) QUOTE(DOUBLES(ADDON,var1))


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

// TODO test hash macros
//hash macros
//([] call EFUNC(common,hashCreate))
#define HASH_NEW(haarray, defValue)         ([haarray, defValue] call CBAFUNC(hashCreate)) //creates a new hash [[]]
#define HASH_GET(haarray, keyValue)         ([haarray, keyValue] call CBAFUNC(hashGet)) //get value entry from key
#define HASH_SET(haarray, keyValue, value)  ([haarray, keyValue, value] call CBAFUNC(hashSet)) //set new value with given key, replace if exists
#define HASH_HAS_KEY(haarray, keyValue)     ([haarray, keyValue] call CBAFUNC(hashHasKey)) //check key exists, return true if exists
#define HASH_REM(haarray, keyValue)         ([haarray, keyValue] call CBAFUNC(hashRem)) //remove entry from hash table with given key
#define HASH_FOREACH(haarray, codeValue)    ([haarray, codeValue] call CBAFUNC(hashEachPair)) // execute code each element. using _key and _value
#define HASH_IS_HASH(object)                (_object call CBAFUNC(isHash)) // return true if is hashtable

//remote execute macros
// TODO check
//<params> remoteExecCall [<function>,(<target>,<isPersistent>)];
#define RE_SRV(params,function) { params ["_params","_func"] if (!isServer) exitWith {_params remoteExecCall [REMFUNC(function), 2]}}
#define RE_AT(params,function,target) params remoteExecCall [REMFUNC(function), target]
#define REMC_AT(params,modul,function,target) params remoteExecCall [REMMCFUNC(modul,function), target]
#define RE_AT_JIP(params,function,target) params remoteExecCall [REMFUNC(function), target, true]
#define REMC_AT_JIP(params,modul,function,target) params remoteExecCall [REMMCFUNC(modul,function), target, true]
#define RE_SRV_TST(params,function) params remoteExecCall [REMFUNC(function), 2]
#define REMC_SRV_TST(params,modul,function) params remoteExecCall [REMMCFUNC(modul,function), 2]

//<params> remoteExec [<function>,(<target>,<isPersistent>)];
#define SRE_AT(params,function,target) params remoteExec [REMFUNC(function), target]
#define SREMC_AT(params,modul,function,target) params remoteExec [REMMCFUNC(modul,function), target]
#define SRE_AT_JIP(params,function,target) params remoteExec [REMFUNC(function), target, true]
#define SREMC_AT_JIP(params,modul,function,target) params remoteExec [REMMCFUNC(modul,function), target, true]
#define SRE_SRV_TST(params,function) params remoteExec [REMFUNC(function), 2]
#define SREMC_SRV_TST(params,modul,function) params remoteExec [REMMCFUNC(modul,function), 2]
