#include <iostream>
#include<string>
using namespace std;


int main8() {

	//�G���}�C�ר�-�Ҹզ��Z�έp

	//1.�ЫؤG���}�C
	int scores[3][3] = 
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[3] = { "�i�T","���|","����" };

	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += scores[i][j];
			//cout << scores[i][j] << " ";
		}
		cout << names[i] << "���`����:  " << sum << endl;
	}
	

	//2.�έp�C�ӤH���`�M����


	system("pause");

	return 0;
}