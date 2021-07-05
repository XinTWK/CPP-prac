//#include <iostream>
//using namespace std;
//
//static	int *func(int b) //形參數據也會放在棧區
//{
//	b = 100;
//	int a = 10; //局部變數,存放在棧區,棧區的數據在函數執行完後 自動釋放
//	return &a;	 //返回局部變數的地址
//}
//
//int main() 
//{
//
//	int *p = func(1);
//	cout << *p << endl; //第一次可以輸出正確的數字,是因為編譯器做了保留
//	cout << *p << endl;	//第二次這個數據就不在保留了
//
//	system("pause");
//	return 0;
//}