#include "inheritedclass.h"

void inheritedClass_Foo(inheritedClass* object)
{
	object->A++;
	printf("%s\n", object->name);
	printf("%d\n", object->A);
}


void inheritedClassB_foo(inheritedClassB* object)
{
	object->B++;
	printf("%d %s \n", object->B, object->name);
}