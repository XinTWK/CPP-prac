#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// ���ҪO�P�~��

template<class T>
class Base
{
	T m;
};

//class Son : public Base // ���~, �����n���D��������T����, �~���~�ӵ��l��
class Son :public Base<int>
{

};


void test01()
{
	Son s1;

}

// �p�G�Q�F�����w������T����, �l���]�ݭn�ܬ����ҪO
template<class T1, class T2>
class Son2 : public Base<T2>
{
public:
	Son2()
	{
		cout << "T1��������:  " << typeid(T1).name() << endl;
		cout << "T2��������:  " << typeid(T2).name() << endl;

	}

	T1 obj;

};

void test02()
{
	Son2<int, char>S2;

}

int main() {

	//test01();
	test02();

	system("pause");

	return EXIT_SUCCESS;
}

