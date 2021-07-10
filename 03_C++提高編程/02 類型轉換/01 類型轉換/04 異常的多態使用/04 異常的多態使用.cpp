#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// ���`���h�A�ϥ�

// ���`������
class BaseException
{
public:
	virtual void printError(){}
};

// �ū��w���`
class NULLPointer :public BaseException
{
public:
	virtual void printError() 
	{
		cout << "�ū��w���`!" << endl;
	}
};

// �V�ɲ��`
class OutOfRange : public BaseException
{
public:
	virtual void printError()
	{
		cout << "�V�ɲ��`!" << endl;
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
