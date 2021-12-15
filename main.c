#include "inheritedclass.h"
int main()
{
	inheritedClass c;
	c.A = 69;
	c.name = "holy fucking christ inheritence!";


	inheritedClassB b;
	b.name = "I am also an inherited class!! :DDD";
	b.B = 420;

	baseclass* base = BaseClass_Create(&c, sizeof(c), &inheritedClass_Foo);
	baseclass* baseB = BaseClass_Create(&b, sizeof(b), &inheritedClassB_foo);

	for(int i = 0; i < 5; i++)
	{
		base->function(base->classData);
		baseB->function(baseB->classData);
	}
}