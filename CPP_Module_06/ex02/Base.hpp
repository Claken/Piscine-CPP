#pragma once

#include <iostream>
#include <stdlib.h>
#include <exception>

class Base
{
	public :
		virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};
