#include <iostream>
using namespace std;

int main2() {

	//指標所佔內存空間
	int a = 10;
	//int *p;
	//p = &a;

	int *p = &a;

	//在32位操作系統下,指標示佔4個字節空間大小,不管是甚麼數據類型
	//在64位操作系統下,指標是佔8個字節空間大小,不管是甚麼數據類型
	cout << "sizeof int * = " << sizeof(int *) << endl;
	cout << "sizeof int * = " << sizeof(float *) << endl;
	cout << "sizeof int * = " << sizeof(double *) << endl;
	cout << "sizeof int * = " << sizeof(char *) << endl;
	system("pause");

	return 0;
}