#include <iostream>
using namespace std;

int main1() {

	//1.�w�q����
	int a = 10;
	//���Щw�q���y�k: �ƾ����� * �����ܼƦW;
	int * p;
	//�����Ь����ܼ�a���a�}
	p = &a;
	cout << "a���a�}��: " << &a << endl;
	cout << "����p��: " << p << endl;

	//2.�ϥΫ���
	//�i�H�q�L�ѤޥΪ��覡�ӧ����Ы��V�����s
	//���Ыe �[* �N��Ѥޥ�,�����Ы��V�����s�����ƾ�
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;



	system("pause");

	return 0;
}