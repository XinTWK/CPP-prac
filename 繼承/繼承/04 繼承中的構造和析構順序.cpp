#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


// 繼承中的構造和析構順序
class Base
{
public:
	Base()
	{
		cout << "Base的構造函數!" << endl;
	}

	~Base()
	{
		cout << "Base的析構函數!" << endl;
	}
};


class Son :public Base
{
public:
	Son()
	{
		cout << "Son的構造函數!" << endl;
	}

	~Son()
	{
		cout << "Son的析構函數!" << endl;
	}
};


void test01()
{
	//Base b;

	// 繼承中的構造和析構順序如下:
	// 先構造父類, 在構造子類, 析構的順序與構造的順序相反
	Son s;


}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

