#include "error.h"
#include <stdio.h>
#include "string.h"
#include "unistd.h"


MessageFormat CompileErrorMessages[]= {
    {"dummy"},
    {"invalid charater"},
    {"can`t alloc memory"},
    {"dummy"}
};
MessageFormat RuntimeErrorMessages[] = {
	{"dummy"},
	{"can`t find variable"},
	{"variable alreay declared"},
    {"can`t alloc memory"},
    {"can`t index this type"},
    {"can`t use this for index"},
    {"index out of range"},
	{"function not found"},
    {"continue or return or break can`t in this scope"},
	{"type is not right"},
	{"is not a object"},
	{"field not defined"},
	{"not a function or method"},
	{"method not found"},
	{"can not use this as left value"},
	{"unkown new type,only support Object and Array"},
	{"normal value on heap"},
	{"dummy"},
};






void ERROR_compile_error(COMPILE_ERROR typ,char* buf){
    printf("compile failed,err:%s buf:%s",CompileErrorMessages[typ].message,buf);
    _exit(1);
}


void ERROR_runtime_error(RUNTIME_ERROR typ,char* who,int line){
	printf("runtime failed,%s:%s line:%d\n",who,RuntimeErrorMessages[typ].message,line);
    _exit(1);
}




