//#include <iostream>
//using namespace std;
//
////1.new���򥻻y�k
//int * func()
//{
//	//�b��ϳо�Ƽƾ�
//	//new��^�O �Ӽƾ�����������
//	int *p = new int(10);
//	return p;
//}
//
//
//void test01()
//{
//	int *p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	//��Ϫ��ƾ� �ѵ{�ǭ��޲z�}�P, �{�Ƕ�޲z����
//	delete p;
//	//cout << *p << endl; ���s�w�Q���� �A�׳X�ݴN�O�D�k�ާ@
//}
//
////2.�b��ϧQ��new�}�P�}�C
//void test02()
//{
//	//�Ы�10��Ƽƾڪ��}�C,�b���
//	int * arr = new int[10]; //10�N��}�C��10�Ӥ���
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100; // ��10�Ӥ������ 100~109
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//�����ϰ}�C
//	//����}�C���ɭ� �n�[[]�~�i�H
//	delete[] arr;
//}
//
//
//
////2.�b��ϧQ��new�}�P�}�C
//
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//
//	return 0;
//}