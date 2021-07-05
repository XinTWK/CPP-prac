//#include <iostream>
//using namespace std;
//
////1.new的基本語法
//int * func()
//{
//	//在堆區創整數數據
//	//new返回是 該數據類型的指標
//	int *p = new int(10);
//	return p;
//}
//
//
//void test01()
//{
//	int *p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	//堆區的數據 由程序員管理開闢, 程序園管理釋放
//	delete p;
//	//cout << *p << endl; 內存已被釋放 再度訪問就是非法操作
//}
//
////2.在堆區利用new開闢陣列
//void test02()
//{
//	//創建10整數數據的陣列,在堆區
//	int * arr = new int[10]; //10代表陣列有10個元素
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100; // 給10個元素賦值 100~109
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//釋放堆區陣列
//	//釋放陣列的時候 要加[]才可以
//	delete[] arr;
//}
//
//
//
////2.在堆區利用new開闢陣列
//
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//
//	return 0;
//}