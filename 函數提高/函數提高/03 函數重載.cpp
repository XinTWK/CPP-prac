//#include <iostream>
//using namespace std;
//
////函數重載
////可以讓函數名相同, 提高複用性
//
////函數重載的滿足條件
////1.同一個作用域下
////2.函數名稱相同
////3.函數參數類型不同, 或個數不同, 或順序不同
//void func()
//{
//	cout << "func 的調用" << endl;
//}
//
//void func(int a)
//{
//	cout << "func(int a)的調用" << endl;
//}
//
//void func(double a)
//{
//	cout << "func(double a)的調用" << endl;
//}
//
//void func(int a, double b)
//{
//	cout << "func(int a, double b)的調用" << endl;
//}
//
//void func(double a, int b)
//{
//	cout << "func(double a, int b)的調用" << endl;
//}
//
////注意事項
////函數的返回值不可以作為函數重載的條件
//
////int func(double a, int b)
////{
////	cout << "func(double a, int b)的調用" << endl;
////}
//
//int main()
//{
//	//func();
//	//func(3.14);
//	//func(10,3.14);
//	func(3.14, 10);
//
//
//	system("pause");
//
//	return 0;
//}