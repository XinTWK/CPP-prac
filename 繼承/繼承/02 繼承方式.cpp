//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//// �~�Ӥ覡
//
//// ���@�~��
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
//		m_A = 10; // �����������@�v������  ��l�����̵M�O���@�v��
//		m_B = 10; // ���������O�@�v������  ��l�����̵M�O�O�@�v��
//		//m_C = 10; // ���������p���v������  �l���X�ݤ���
//	}
//
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100; // ��Son1�� m_B�O�O�@�v�� ���~�X�ݤ���
//
//}
//
//// �O�@�~��
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
//		m_A = 100; // ���������@����, ��l�����ܬ��O�@�v��
//		m_B = 100; // �������O�@����, ��l�����ܬ��O�@�v��
//		//m_C = 100; // �������p������  �l���X�ݤ���
//	}
//
//};
//
//void test02()
//{
//	Son2 s1;
//	//s1.m_A = 1000; // �bSon2�� m_A�ܬ��O�@�v��,  �]�����~�X�ݤ���
//	//s1.m_B = 1000; // �bSon2�� m_B�O�@�v��  ���i�H�X��
//}
//
//// �p���~��
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
//		m_A = 100; // ���������@����,  ��l�����ܬ�  �p������
//		m_B = 100; // �������O�@����,  ��l�����ܬ�  �p������
//		//m_C = 100; // �������p������,  �l���X�ݤ���
//	}
//};
//
//class GrandSon3 : public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 1000; // ��FSon3�� m_A�ܬ��p��, �Y�ϬO��l, �]�O�X�ݤ���
//		//m_B = 1000; // ��FSon3�� m_B�ܬ��p��, �Y�ϬO��l, �]�O�X�ݤ���
//	}
//
//
//};
//
//
//void test03()
//{
//	Son3 s1;
//	//s1.m_A = 1000; // ��Son3�� �ܬ� �p������ ���~�X�ݤ���
//	//s1.m_B = 1000; // ��Son3�� �ܬ� �p������ ���~�X�ݤ���
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
