#include <iostream>
using namespace std;



int main()
{
	//�ޥΰ򥻻y�k
	//�ƾ����� &�O�W = ��W

	int a = 10;
	//�Ыؤޥ�
	int &b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}