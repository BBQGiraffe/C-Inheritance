#ifndef __INHERITED_CLASS__
#define __INHERITED_CLASS__
#include "baseclass.h"
#include <stdio.h>

typedef struct inheritedClass
{
	int A;
	const char* name;
}inheritedClass;

typedef struct inheritedClassB
{
	int B;
	const char* name;
}inheritedClassB
;
void inheritedClassB_foo(inheritedClassB* object);
void inheritedClass_Foo(inheritedClass* object);

#endif