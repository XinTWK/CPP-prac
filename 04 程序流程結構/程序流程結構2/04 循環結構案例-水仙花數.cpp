#include <iostream>
using namespace std;

int main4() {

	// 1.���L�X�Ҧ��T��Ʀr
	int num = 100;

	do {
		// 2.�q�Ҧ��T��Ƥ������P���
		int a = 0;	//�Ӧ�
		int b = 0;	//�Q��
		int c = 0;	//�ʦ�

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		if (a*a*a + b*b*b + c*c*c == num) {//�p�G�O���P���,�~��X
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	
	
	system("pause");

	return 0;
}