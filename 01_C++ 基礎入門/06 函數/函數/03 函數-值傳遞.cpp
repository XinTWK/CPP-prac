#include <iostream>
using namespace std;

//�ȶǻ�
//�w�q���, ��{��ӼƦr�i��洫���

//�p�G��Ƥ��ݭn��^��. �n�����ɭԥi�H�gvoid
void swap1(int num1, int num2) {
	cout << "�洫�e:  " << endl;
	cout << "num1 =  " << num1 << endl;
	cout << "num2 =  " << num2 << endl;
	
	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "�洫��:  " << endl;
	cout << "num1 =  " << num1 << endl;
	cout << "num2 =  " << num2 << endl;
	
	
	//��^�� ���ݭn���ɭ� �i�H���g return
}


int main3() {

	int a = 10;
	int b = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap1(a, b);


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}