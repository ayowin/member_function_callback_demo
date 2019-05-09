
#include "TestClass.h"

TestClass::TestClass()
{
}

TestClass::~TestClass()
{
}

std::string TestClass::callback(std::string before,std::string after)
{
	std::string tmp = "";

	std::cout<<"before: "<<before<<std::endl;
	std::cout<<"after: "<<after<<std::endl;

	tmp = before + after;
	std::cout<<"tmp: "<<tmp<<std::endl;

	return tmp;
}

void TestClass::innerTest(std::string (TestClass::*fun)(std::string,std::string))
{
	if(fun != NULL)
	{
		std::cout<<"+++++++++++++++++++InnerTest success+++++++++++++++++++"<<std::endl;
		(this->*fun)("Inner","Test");
		std::cout<<"+++++++++++++++++++InnerTest finished++++++++++++++++++"<<std::endl;
	}
	else
	{
		std::cout<<"+++++++++++++InnerTest failed , 'fun' is NULL++++++++++"<<std::endl;
	}
}
