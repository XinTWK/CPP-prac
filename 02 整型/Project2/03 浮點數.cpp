#include <iostream>
using namespace std;

int main3() {
	//�q�{���p�U ��X�@�Ӥp�� �|��ܥX���즳�ļƦr
	float f1 = 3.1415926f;

	cout << "f1 = " << f1 << endl;

	double d1 = 3.1415926;

	cout << "d1 = " << d1 << endl;

	//�έpfloat�Mdouble���Τ��s�Ŷ�
	cout << "float ���Τ��s�Ŷ���:  " << sizeof(float) << endl; // 4�r�`

	cout << "double ���Τ��s�Ŷ���:  " << sizeof(double) << endl; // 8�r�`

	//��ǭp�ƪk
	float f2 = 3e2; //3*10^2;
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2; //3*0.1^2
	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;
}