//#include<iostream>
//using namespace std;
//
//// �����c�y��ƽեήɾ�
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person�q�{�c�y��ƽե�" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person���Ѻc�y��ƽե�" << endl;
//
//		m_Age = age;
//	}
//
//	Person(const Person &p)
//	{
//		cout << "Person�����c�y��ƽե�" << endl;
//		m_Age = p.m_Age;
//	}
//
//	~Person()
//	{
//		cout << "Person�R�c��ƽե�" << endl;
//	}
//
//	int m_Age;
//};
//
//
//// 1. �ϥΤ@�Ӥw�g�Ыا�������H�Ӫ�l�Ƥ@�ӷs��H
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//
//	cout << "P2���~�֬�:  " << p2.m_Age << endl;
//
//}
//
//// 2. �ȶǻ����覡����ưѼƶǭ�
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
//// 3. �Ȥ覡��^������H
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