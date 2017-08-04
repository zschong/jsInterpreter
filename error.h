#ifndef ERROR_H
#define ERROR_H

#include "message.h"



typedef enum {
    CHARACTER_INVALID_ERR = 1,
    CANNOT_ALLOC_MEMORY,
}COMPILE_ERROR;

typedef enum{
	RUNTIME_ERROR_VARIABLE_NOT_FOUND = 1,
	RUNTIME_ERROR_VARIALBE_ALEAY_DECLARED,
	RUNTIME_ERROR_CANNOT_ALLOC_MEMORY,
	RUNTIME_ERROR_CANNOT_INDEX_THIS_TYPE,
	RUNTIME_ERROR_INDEX_HAS_WRONG_TYPE,
	RUNTIME_ERROR_INDEX_OUT_RANGE,
	RUNTIME_ERROR_FUNCTION_NOT_FOUND,
	RUNTIME_ERROR_CONTINUE_RETURN_BREAK_CAN_NOT_BE_IN_THIS_SCOPE,
	RUNTIME_ERROR_TYPE_NOE_RIGHT
}RUNTIME_ERROR;



void ERROR_compile_error(COMPILE_ERROR typ,char* buf);


void ERROR_runtime_error(RUNTIME_ERROR typ,int line);







#endif