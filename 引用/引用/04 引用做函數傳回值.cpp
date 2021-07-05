#include <iostream>
using namespace std;

//引用做函數的傳回值
//1. 不要返回局部變數的引用
int& test01()
{
	int a = 10; //局部變數存放在四區中的 棧區
	return a;
}

//2.函數的調用可以為左值
int& test02()
{
	static int a = 10; //靜態變數, 存放在全局區, 全局區上的數據在程式結束後系統釋放
	return a;
}




int main()
{

	//int &ref = test01();

	//cout << "ref = " << ref << endl; //第一次結果正確,是因為編譯器做了保留
	//cout << "ref = " << ref << endl; //第二次結果錯誤,因為a的內存已經釋放

	int &ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000; //如果函數的返回值是引用,這個函數調用可以做為左值

	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");

	return 0;

}