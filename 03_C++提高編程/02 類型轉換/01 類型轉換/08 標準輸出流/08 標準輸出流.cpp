#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<iomanip> // io man ip

/*
cout.put() // �V�w�İϼg�r��
cout.write() // �qbuffer���gnum�Ӧr�`���e��X�y��
*/

void test01()
{
	//cout.put('h').put('e').put('l');

	//char buf[1024] = "hello world";
	//cout.write(buf, strlen(buf));

	cout << "hello world" << endl;

}

void test02()
{
	int number = 99;
	cout.width(5); // �]�m�e��
	cout.fill('*'); // �]�m��R
	cout.setf(ios::left); // �]�m�����
	cout.unsetf(ios::dec); // �����Q�i��
	cout.setf(ios::hex); // �w�ˤQ���i��
	cout.setf(ios::showbase); // ��ܶi����
	cout.unsetf(ios::hex); // �����Q���i��
	cout.setf(ios::oct); // �w�ˤK�i��
	cout << number << endl;
}

// �ϥα����
void test03()
{

	int number = 99;
	cout << setw(20) // �]�m�e��
		<< setfill('~') // �]�m��R
		<< setiosflags(ios::showbase) // ��ܰ��
		<< setiosflags(ios::left) // �]�m�����
		<< hex // �w�ˤQ���i��
		<< number
		<< endl;


}



int main() {

	//test01();
	//test02();
	test03();

	system("pause");

	return EXIT_SUCCESS;
}
