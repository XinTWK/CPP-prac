//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include<string>
//
//// ��ƽեιB��ŭ���
//
//// ���L��X��
//class MyPrint
//{
//public:
//
//	// ������ƽեιB���
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//
//};
//	
//void MyPrint02(string test)
//{
//	cout << test << endl;
//
//}
//
//void test01()
//{
//	MyPrint myPrint;
//
//	myPrint("hello world");  // �ѩ�ϥΰ_�ӫD�`�������ƽե�, �]���Q�٬�����
//	
//	MyPrint02("hello world");
//}
//
//// ���ƫD�`�F��, �S���T�w���g�k
//// �[�k��
//
//class MyAdd
//{
//public:
//
//	int operator()(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//};
//
//void test02()
//{
//	MyAdd myadd;
//	int ret = myadd(100, 100);
//	cout << "ret = " << ret << endl;
//
//	// �ΦW��ƹ�H
//	cout << MyAdd()(100, 100) << endl;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//
//	return EXIT_SUCCESS;
//}
//
