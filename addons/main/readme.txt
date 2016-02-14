Aktuelle Baustellen

* PREP Makro funkt net (XEH init files -> funktion verweis)
* RE server call funkt nicht wie erwartet
** modul test -> fnc_test server call fnc_test2 (_ret = RE_SRV_TST(_this,SMIFUNC(test2));)
** script_macos.hpp in main ->
                //<params> remoteExecCall [<function>,(<target>,<isPersistent>)];
                #define RE_SRV(params,function) { params ["_params","_func"] if (!isServer) exitWith {_params remoteExecCall [str _function, 2]}}
                #define RE_SRV_TST(params,function) params remoteExecCall [str function, 2]
