#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	// explicit關鍵字的作用:
	// 防止利用隱式法創建對象
	explicit Person(int a)
	{
		cout << "Person的構造函數調用" << endl;
	}
};

void test01()
{
	//Person p = 10; // error 因為構造函數中加了 explicit關鍵字

	Person p1(10);

	Person p2 = Person(10);
}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}