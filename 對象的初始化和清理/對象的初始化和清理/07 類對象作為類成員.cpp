//#include<iostream>
//using namespace std;
//#include<string>
//
//// ����H�@��������
//
//// �����
//class Phone
//{
//public:
//
//	Phone(string pName)
//	{
//		cout << "Phone���c�y��ƽե�" << endl;
//
//		m_PName = pName;
//	}
//
//	~Phone()
//	{
//		cout << "Phone���R�c��ƽե�" << endl;
//
//	}
//
//	// ����~�P�W��
//	string m_PName;
//};
//
//// �H��
//class Person
//{
//public:
//	// Phone m_Phone = pName  �����ഫ�k
//	Person(string name, string pName) : m_Name(name),m_phone(pName) 
//	{
//		cout << "Person���c�y��ƽե�" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person���R�c��ƽե�" << endl;
//	}
//	// �m�W
//	string m_Name;
//	// ���
//	Phone m_phone;
//};
//
//// ���L����H�@����������, �c�y�ɭԥ��c�y����H, �A�c�y�ۨ�, �R�c�����ǻP�c�y�ۤ�
//
//void test01()
//{
//	Person p("�i�T", "ī�GMAX");
//
//	cout << p.m_Name << "����:  " << p.m_phone.m_PName << endl;
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