//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include<string>
//
//// ���O�Q�δ��q�g�k�M�h�A�޳N��{�p���
//
//// ���q�g�k
//
//class Calculator
//{
//public:
//
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//		// �p�G�Q�X�i�s���\��, �ݭn�ק﷽�X
//		// �b�u��}�o�� ���� �}����h
//		// �}����h: ���X�i�i��}��, ��ק�i������
//	}
//
//
//	int m_Num1; // �ާ@��1
//	int m_Num2; // �ާ@��2
//};
//
//void test01()
//{
//	// �Ыحp�����H
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
//
//	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
//
//	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
//}
//
//// �Q�Φh�A��{�p���
//// �h�A�n�B:
//// 1. ��´���c�M��
//// 2. �iŪ�ʱj
//// 3. ���e���M����X�i�H�e���@�ʰ�
//
//// ��{�p�����H��
//class AbstractCalculator
//{
//public:
//
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
//// �[�k�p�����
//class AddCaculator : public AbstractCalculator
//{
//public:
//	 int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//
//};
//
//// ��k�p�����
//class SubCaculator : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//
//};
//
//// ���k�p�����
//class MulCaculator : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//
//};
//
//void test02()
//{
//	// �h�A�ϥα���
//	// �������w�Ϊ̤ޥΫ��V�l����H
//
//	// �[�k�B��
//	AbstractCalculator * abc = new AddCaculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	// �Χ���O�o�P��
//	delete abc;
//
//	// ��k�B��
//	abc = new SubCaculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	// ���k�B��
//	abc = new MulCaculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//
//	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//
//	return EXIT_SUCCESS;
//}
