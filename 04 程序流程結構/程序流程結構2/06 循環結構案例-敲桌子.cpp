#include <iostream>
using namespace std;

int main6() {

	//�V��l�ר�
	//1.����X1~100�Ʀr
	for (int i = 1; i <= 100; i++) {

		//2.�q100�ӼƦr�����S��Ʀr,��J"�V��l"
		//�p�G�O 7������,�Ӧ�Ƭ�7,�Ϊ̤Q��Ƭ�7,��X�V��l
		if ( i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
			cout << "\"�V��l\"" << endl;
		}
		else {
			cout << i << endl;
		}
	}

	system("pause");

	return 0;
}