#pragma once
#include "Exception.h"

class Object
{
private:
	static unsigned int count;
public:
	static unsigned int Count();

	Object();
};

