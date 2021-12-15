#include "baseclass.h"

baseclass* BaseClass_Create(void* classData, int classDataLen, void (*function)(void* object))
{
	baseclass* object = malloc(sizeof(baseclass));
	object->classData = malloc(classDataLen);

	memset(object->classData, 0, classDataLen);
	memcpy(object->classData, classData, classDataLen);

	object->function = function;

	return object;
}