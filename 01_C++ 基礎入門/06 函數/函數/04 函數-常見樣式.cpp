#include <iostream>
using namespace std;

//��Ʊ`���˦�
//1. �L�ѵL��
void test01() {
	cout << "this is test01 " << endl;
}

//2. ���ѵL��
void test02(int a) {
	cout << "this is test02 a =  " << a << endl;
}

//3. �L�Ѧ���
int test03() {
	cout << "this is test03 " << endl;
	return 1000;
}
//4. ���Ѧ���
int test04(int a) {
	cout << "this is test04 a = " << a << endl;
	return a;
}



int main4() {
	
	//�L�ѵL���ƽե�
	test01();
	
	//���ѵL���ƽե�
	test02(100);

	//�L�Ѧ����ƽե�
	int num1 = test03();
	cout << "num1 =  " << num1 << endl;

	//���Ѧ����ƽե�
	int num2 =  test04(10000);
	cout << "num2 =  " << num2 << endl;

	system("pause");

	return 0;
}