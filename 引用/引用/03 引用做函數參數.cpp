//#include <iostream>
//using namespace std;
//
//
////交換函數
//
////1.值傳遞
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	//cout << "swap01 a = " << a << endl;
//	//cout << "swap01 b = " << b << endl;
//}
//
////2. 地址傳遞
//void mySwap02(int *a, int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//
////3. 引用傳遞
//void mySwap03(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//
//	//mySwap01(a, b); //值傳遞, 形參不會修飾實餐
//	//mySwap02(&a, &b); //地址傳遞, 形參會修飾實參
//	mySwap03(a, b); //引用傳遞, 形參會修飾實參
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//
//
//	system("pause");
//
//	return 0;
//}