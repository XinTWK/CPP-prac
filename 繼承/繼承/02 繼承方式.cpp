//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//// 繼承方式
//
//// 公共繼承
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 :public Base1
//{
//
//public:
//
//	void func()
//	{
//		m_A = 10; // 父類中的公共權限成員  到子類中依然是公共權限
//		m_B = 10; // 父類中的保護權限成員  到子類中依然是保護權限
//		//m_C = 10; // 父類中的私有權限成員  子類訪問不到
//	}
//
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100; // 到Son1中 m_B是保護權限 類外訪問不到
//
//}
//
//// 保護繼承
//class Base2 
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//
//};
//
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A = 100; // 父類中公共成員, 到子類中變為保護權限
//		m_B = 100; // 父類中保護成員, 到子類中變為保護權限
//		//m_C = 100; // 父類中私有成員  子類訪問不到
//	}
//
//};
//
//void test02()
//{
//	Son2 s1;
//	//s1.m_A = 1000; // 在Son2中 m_A變為保護權限,  因此類外訪問不到
//	//s1.m_B = 1000; // 在Son2中 m_B保護權限  不可以訪問
//}
//
//// 私有繼承
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son3 : private Base3
//{
//public:
//	void func()
//	{
//		m_A = 100; // 父類中公共成員,  到子類中變為  私有成員
//		m_B = 100; // 父類中保護成員,  到子類中變為  私有成員
//		//m_C = 100; // 父類中私有成員,  子類訪問不到
//	}
//};
//
//class GrandSon3 : public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 1000; // 到了Son3中 m_A變為私有, 即使是兒子, 也是訪問不到
//		//m_B = 1000; // 到了Son3中 m_B變為私有, 即使是兒子, 也是訪問不到
//	}
//
//
//};
//
//
//void test03()
//{
//	Son3 s1;
//	//s1.m_A = 1000; // 到Son3中 變為 私有成員 類外訪問不到
//	//s1.m_B = 1000; // 到Son3中 變為 私有成員 類外訪問不到
//
//
//}
//
//
//int main() {
//
//
//
//	system("pause");
//
//	return EXIT_SUCCESS;
//}
//
