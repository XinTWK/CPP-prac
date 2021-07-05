//#include <iostream>
//using namespace std;
//
//class C1
//{
//	int m_A; // 默認權限  是私有
//};
//
//struct C2
//{
//	int m_A; // 默認權限 是公共
//};
//
//int main()
//{
//	 //Struct 和 class 區別
//	 //Struct 默認權限是 公共 pulic
//	 //class  默認權限是 私有 private
//
//	C1 c1;   
//	//c1.m_A = 100; // 在class裡默認權限為私有, 因此類外不可以訪問
//
//	C2 c2;
//	c2.m_A = 100; // 在struct默認的權限為公共, 因此可以訪問
//
//	system("pause");
//
//	return 0;
//}