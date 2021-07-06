#include<iostream>
using namespace std;

// 靜態成員函數
// 所有對象都共享同一個函數
// 靜態成員函數只能訪問靜態成員變量

class Person
{
public:
	// 靜態成員函數
	static void func()
	{
		m_A = 100;  // 靜態成員函數可以訪問 靜態成員變量
		//m_B = 200;  // 靜態成員函數 不可以訪問 非靜態成員變量, 無法區分到底是哪個對象的m_B的屬性
		cout << "static void func調用" << endl;
	}

	static int m_A; // 靜態成員變量
	int m_B; // 非靜態成員變量

	// 靜態成員函數也是有訪問權限的
private:
	static void func2()
	{
		cout << "static void func2調用" << endl;
	}
};

int Person::m_A = 0;

void test01()
{
	// 1.通過對象訪問
	Person p;
	p.func();

	// 2.通過類名訪問
	Person::func();

	//Person::func2();  類外訪問步道私有靜態成員函數
}



int main() {

	test01();


	system("pause");

	return EXIT_SUCCESS;
}