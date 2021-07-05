//#include<iostream>
//using namespace std;
//#include<string>
//
//// 類對象作為類成員
//
//// 手機類
//class Phone
//{
//public:
//
//	Phone(string pName)
//	{
//		cout << "Phone的構造函數調用" << endl;
//
//		m_PName = pName;
//	}
//
//	~Phone()
//	{
//		cout << "Phone的析構函數調用" << endl;
//
//	}
//
//	// 手機品牌名稱
//	string m_PName;
//};
//
//// 人類
//class Person
//{
//public:
//	// Phone m_Phone = pName  隱式轉換法
//	Person(string name, string pName) : m_Name(name),m_phone(pName) 
//	{
//		cout << "Person的構造函數調用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person的析構函數調用" << endl;
//	}
//	// 姓名
//	string m_Name;
//	// 手機
//	Phone m_phone;
//};
//
//// 當其他類對象作為本類成員, 構造時候先構造類對象, 再構造自身, 析構的順序與構造相反
//
//void test01()
//{
//	Person p("張三", "蘋果MAX");
//
//	cout << p.m_Name << "拿著:  " << p.m_phone.m_PName << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}