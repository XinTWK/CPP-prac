//#include <iostream>
//using namespace std;
//
////函數重載的注意事項
////1.引用作為重載的條件
//void func(int &a) // int &a = 10;  不合法
//{
//	cout << "func(int &a) 調用" << endl;
//}
//
//void func(const int &a) //const int &a = 10;  合法
//{
//	cout << "func(const int &a) 調用" << endl;
//}
//
//
////2.函數重載碰到默認參數
//void func2(int a , int b = 10)
//{
//	cout << "func2(int a , int b) 的調用" << endl;
//}
//
//void func2(int a)
//{
//	cout << "func2(int a) 的調用" << endl;
//}
//
//
//
//int main()
//{
//	//int a = 10;
//	//func(a);
//	
//	//func(10);
//
//
//	//func2(10); //當然樹重載碰到任參數, 出現二義性 , 報錯 , 盡量避免這種情況
//
//	system("pause");
//
//	return 0;
//}