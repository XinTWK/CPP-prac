#include <iostream>
using namespace std;

int main5() {

	//�T�عB���

	//�ЫؤT���ܼ� a b c
	//�Na�Mb�����,�N�ܼƤj���ȵ����ܼ�C

	int a = 10;
	int b = 20;
	int c = 0;

	c = ( a > b ? a : b) ;

	cout << "c = " << c << endl;

	(a < b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}