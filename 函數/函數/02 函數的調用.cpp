#include <iostream>
using namespace std;

 //�w�q�[�k���
//��Ʃw�q���ɭ�,num1�Mnum2�S���u��ƾ�,�L�u�O�@�ӧΦ��W���Ѽ�,²�٧ΰ�
int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}


int main2() {

	//main��Ƥ��ե�add���
	int a = 10;
	int b = 20;

	//��ƽեλy�k: ��ƦW�� (�Ѽ�)
	//a�Mb�٬� ��ڰѼ�,²�ٹ��
	//��եΨ�Ʈɭ�,���\���ȷ|�ǻ����ΰ�
	int c = add(a, b);

	cout << "c = " << c << endl;

	a = 100;
	b = 500;

	c = add(a, b);
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}