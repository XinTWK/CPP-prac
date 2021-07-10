#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 異常的多態使用

// 異常的基類
class BaseException
{
public:
	virtual void printError(){}
};

// 空指針異常
class NULLPointer :public BaseException
{
public:
	virtual void printError() 
	{
		cout << "空指針異常!" << endl;
	}
};

// 越界異常
class OutOfRange : public BaseException
{
public:
	virtual void printError()
	{
		cout << "越界異常!" << endl;
	}

};

void func()
{
	//throw NULLPointer();
	throw OutOfRange();
}


void test01()
{
	try
	{
		func();
	}
	catch (BaseException & e)
	{
		e.printError();
	}

}



int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
