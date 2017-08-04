#ifndef INTERPRETE_H
#define INTERPRETE_H
#include "js.h"



int INTERPRETE_interprete(JsInterpreter* inter);

StamentResult INTERPRETE_execute_statement(JsInterpreter* inter,ExecuteEnvironment* env,Statement* s);


StamentResult INTERPRETE_execute_statement_for(JsInterpreter* inter,ExecuteEnvironment* env,StatementFor* f);


StamentResult INTERPRETE_execute_statement_if(JsInterpreter* inter,ExecuteEnvironment* env,StatementIf* i);



StamentResult INTERPRETE_execute_statement_while(	JsInterpreter* inter,	ExecuteEnvironment* env,	StatementWhile* w);



StamentResult INTERPRETE_execute_statement_expression(JsInterpreter* inter,ExecuteEnvironment* env,Expression* e);


Variable*  
INTERPRETE_creaet_variable(
		JsInterpreter* inter,
		ExecuteEnvironment* env,
		char* name,
		JsValue* v,
		int line
);



JsValue* INTERPRETE_creaet_heap(JsInterpreter* inter,JS_VALUE_TYPE typ,int size,int line);



JsFunction *
INTERPRETE_search_func_from_function_list(JsFucntionList* list,char* function);


JsValue* INTERPRETE_concat_string(JsInterpreter* inter,JsValue* v1,JsValue* v2,int line);



#endif

