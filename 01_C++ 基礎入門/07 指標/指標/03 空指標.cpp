#include <iostream>
using namespace std;

int main3() {

	//空指標
	//1. 空指標用於給指標變數進行初始化
	int *p = NULL;


	//2.空指標是不可以進行存取的
	//0~255之間的內存編號是系統占用的,因此不可以存取
	*p = 100;

	system("pause");

	return 0;
}