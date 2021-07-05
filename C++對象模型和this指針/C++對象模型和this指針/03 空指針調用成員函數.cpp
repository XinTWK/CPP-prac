//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//// 空指針調用成員函數
//
//class Person
//{
//public:
//
//	void showClassName()
//	{
//		cout << "this is Person Class" << endl;
//	}
//
//	void showPersonAge()
//	{
//		// 報錯原因是因為傳入的指針是為NULL
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "age =  " << this->m_Age << endl;
//	}
//
//	int m_Age;
//};
//
//
//void test01()
//{
//	Person * p = NULL;
//
//	p->showClassName();
//
//	p->showPersonAge();
//
//}
//
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