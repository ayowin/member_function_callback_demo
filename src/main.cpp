
#include <iostream>
#include "TestClass.h"

using namespace std;

// 外部回调测试
void outerTest(TestClass &testClass,std::string (TestClass::*fun)(std::string,std::string))
{
	if(fun != NULL)
	{
		std::cout<<"-------------------OuterTest success-------------------"<<std::endl;
		(testClass.*fun)("Outer","Test");
		std::cout<<"-------------------OuterTest finished------------------"<<std::endl;
	}
	else
	{
		std::cout<<"-----------OuterTest failed , 'fun' is NULL-------------"<<std::endl;
	}
}

int main(int argc, char **argv)
{
	cout<<"-------------------------member_function_callback_demo-----------------------"<<endl;

	// 类成员函数回调测试
	TestClass testClass;

	// 内部回调测试
	testClass.innerTest(&TestClass::callback);

	// 外部回调测试
	outerTest(testClass,&TestClass::callback);

	return 0;
}
