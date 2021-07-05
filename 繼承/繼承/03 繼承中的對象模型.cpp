//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//// 繼承中的對象模型
//
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son : public Base
//{
//public:
//
//	int m_D;
//};
//
//// 利用開發人員命令提示工具查看對象類型
//// 跳轉盤符 D:
//// 跳轉文件路徑 cd 具體路徑下
//// 查看命名
//// cl /d1 reportSingleClassLayout類名 文件名
////  L   1
//
//void test01()
//{
//	// 16
//	// 父類中所有非靜態成員屬性都會被子類繼承下去
//	// 父類中私有成員屬性 是被編譯器給隱藏了, 因此是訪問不到, 但是確實被繼承下去了
//	cout << "size of Son = " << sizeof(Son) << endl;
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return EXIT_SUCCESS;
//}
//
