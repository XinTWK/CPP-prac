//#include <iostream>
//using namespace std;
//
//
////�洫���
//
////1.�ȶǻ�
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	//cout << "swap01 a = " << a << endl;
//	//cout << "swap01 b = " << b << endl;
//}
//
////2. �a�}�ǻ�
//void mySwap02(int *a, int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//
////3. �ޥζǻ�
//void mySwap03(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//
//	//mySwap01(a, b); //�ȶǻ�, �ΰѤ��|�׹����\
//	//mySwap02(&a, &b); //�a�}�ǻ�, �ΰѷ|�׹����
//	mySwap03(a, b); //�ޥζǻ�, �ΰѷ|�׹����
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//
//
//	system("pause");
//
//	return 0;
//}