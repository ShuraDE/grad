#define INC(var) var = (var) + 1
#define DEC(var) var = (var) - 1
#define ADD(var1,var2) var1 = (var1) + (var2)
#define SUB(var1,var2) var1 = (var1) - (var2)
#define REM(var1,var2) SUB(var1,[var2])
#define PUSH(var1,var2) (var1) pushBack (var2)

#define ISNILS(VARIABLE,DEFAULT_VALUE) if (isNil #VARIABLE) then { ##VARIABLE = ##DEFAULT_VALUE }
