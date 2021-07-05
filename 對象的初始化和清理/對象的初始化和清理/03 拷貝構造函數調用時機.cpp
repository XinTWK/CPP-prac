//#include<iostream>
//using namespace std;
//
//// 拷貝構造函數調用時機
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默認構造函數調用" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person有參構造函數調用" << endl;
//
//		m_Age = age;
//	}
//
//	Person(const Person &p)
//	{
//		cout << "Person拷貝構造函數調用" << endl;
//		m_Age = p.m_Age;
//	}
//
//	~Person()
//	{
//		cout << "Person析構函數調用" << endl;
//	}
//
//	int m_Age;
//};
//
//
//// 1. 使用一個已經創建完畢的對象來初始化一個新對象
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//
//	cout << "P2的年齡為:  " << p2.m_Age << endl;
//
//}
//
//// 2. 值傳遞的方式給函數參數傳值
//void doWork(Person p)
//{
//
//}
//
//void test02()
//{
//	Person p;
//	doWork(p);
//}
//
//
//// 3. 值方式返回局部對象
//Person doWork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;
//
//}
//
//
//int main() {
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//
//	return 0;
//}