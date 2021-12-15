#ifndef __BASECLASS__
#define __BASECLASS__
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
typedef struct baseclass
{
	void (*function)(void* object);
	uint8_t* classData;
}baseclass;

baseclass* BaseClass_Create(void* classData, int classDataLen, void (*function)(void* object));

#endif