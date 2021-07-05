#include <iostream>
using namespace std;

static int* func()
{	
	//利用new關鍵字 可以將數據開闢到堆區
	//指標 本質也是局部變數, 放在棧上, 指標保存的數據是放在堆區
	int * p = new int(10);
	return p;
}

int main()
{

	//在堆區開闢數據
	int *p = func();

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	system("pause");
	return 0;	

}