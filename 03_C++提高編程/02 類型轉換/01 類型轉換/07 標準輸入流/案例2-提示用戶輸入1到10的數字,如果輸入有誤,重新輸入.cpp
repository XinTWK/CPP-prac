#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void test01()
{
	cout << "�п�J1��10�������Ʀr: " << endl;

	while (true)
	{
		int num;
		cin >> num;
		if (num >= 1 && num <= 10)
		{
			cout << "��J���T! ��J���Ʀr��: " << num << endl;
			break;
		}
		cout << "��J���~,�Э��s��J" << endl;

		// 1. ���m�лx��
		cin.clear();
		// 2. ��s�w�İ�
		cin.ignore(numeric_limits<std::streamsize>::max(), '/n');

		//cout << "�лx��: " << cin.fail() << endl; // 0 ���`  1 ���`

	}

	


}



int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
