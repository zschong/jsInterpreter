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
	{"dummy"},
};






void ERROR_compile_error(COMPILE_ERROR typ,char* buf){
    printf("compile failed,err:%s buf:%s",CompileErrorMessages[typ].message,buf);
    _exit(1);
}


void ERROR_runtime_error(RUNTIME_ERROR typ,int line){
	printf("runtime failed,err:%s line:%d\n",RuntimeErrorMessages[typ].message,line);
    _exit(1);
}




