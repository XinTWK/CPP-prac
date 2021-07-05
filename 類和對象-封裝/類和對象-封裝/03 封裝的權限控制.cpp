//#include <iostream>
//using namespace std;
//
////訪問權限
////三種
////公共權限 public		成員類內可以訪問 類外可以訪問
////保護權限 protected	成員類內可以訪問 類外不可以訪問 兒子也可以訪問父親中的保護內容
////私有權限 private	成員類內可以訪問 類外不可以訪問	兒子不可以訪問父親中的私有內容
//
//class Person
//{
//public:
//	//公共權限
//	string m_Name; //姓名
//
//protected:
//	//保護權限
//	string m_Car; //汽車
//
//private:
//	//私有權限
//	int m_Password; //銀行卡密碼
//
//public:
//	void func()
//	{
//		m_Name = "張三";
//		m_Car = "小馬";
//		m_Password = 123456;
//	}
//
//};
//
//
//
//int main()
//{
//
//	//實例化具體對象
//	Person p1;
//
//	p1.m_Name = "李四";
//	//p1.m_Car = "大馬" //保護權限內容, 在類外訪問不到
//	//p1.m_Password = 123; //私有權限內容, 類外訪問步道
//
//	p1.func();
//
//	system("pause");
//	return 0;
//}