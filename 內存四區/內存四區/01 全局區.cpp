#include <iostream>
#include <string>
using namespace std;

//Ы跑计
int g_a = 20;
int g_b = 20;

//const 耿Ы跑计, Ы跑计
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
	//Ы跋

	//Ы跑计 , 繰篈跑计 , 盽秖

	//承炊硄Ы场跑计
	int a = 10;
	int b = 10;

	cout << "Ы场跑计a:  " << (int)&a << endl;
	cout << "Ы场跑计b:  " << (int)&b << endl;

	cout << "Ы跑计g_a:  " << (int)&g_a << endl;
	cout << "Ы跑计g_b:  " << (int)&g_b << endl;

	//繰篈跑计 炊硄跑计玡static , 妮繰篈跑计
	static  int s_a = 10;
	static  int s_b = 10;
	cout << "繰篈跑计s_a:  " << (int)&s_a << endl;
	cout << "繰篈跑计s_b:  " << (int)&s_b << endl;

	//盽秖
	//﹃盽秖
	cout << "﹃盽秖: " << (int)"hello world" << endl;

	//const耿跑计
	//const耿Ы跑计. const 耿Ы场跑计

	cout << "Ы跑计 c_g_a:  " << (int)&c_g_a << endl;
	cout << "Ы跑计 c_g_b:  " << (int)&c_g_b << endl;

	const int c_l_a = 10; //c-const g-global l-local
	const int c_l_b = 10;

	cout << "Ы场盽计 c_l_a:  " << (int)&c_l_a << endl;
	cout << "Ы场盽计 c_l_b:  " << (int)&c_l_b << endl;



	system("pause");
	return 0;

}