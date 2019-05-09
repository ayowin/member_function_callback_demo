
#ifndef SRC_TESTCLASS_H_
#define SRC_TESTCLASS_H_

#include <iostream>

class TestClass
{
public:
	TestClass();
	virtual ~TestClass();

	// 成员回调函数
	std::string callback(std::string before,std::string after);

	// 内部回调测试（外部回调请看main.cpp：需要传对象）
	// 巧用内部函数 进行 类成员函数的回调：不需要传对象，也很没有必要这么做，只作为成员函数指针的学习和研究
	void innerTest(std::string (TestClass::*fun)(std::string,std::string));

};

#endif /* SRC_TESTCLASS_H_ */
