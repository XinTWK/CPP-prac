

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// ���ҪO��������ƳЫخɾ�
// ���ҪO��������Ʀb�եήɤ~�h�Ы�

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}
};


class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}
};


template<class T>
class MyClass
{
public:

	T obj;

	// ���ҪO�����������, �ä��O�@�}�l�N�Ыت�, �ӬO�b�ҪO�եήɦA�ͦ�
	void func1()
	{
		obj.showPerson1();
	}

	void vunc2()
	{
		obj.showPerson2();
	}
};


void test01()
{
	MyClass<Person2>m;
	//m.func1(); // �sĶ�|�X��, ������ƽեΤ~�|�h�Ыئ������
	m.vunc2();
}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

