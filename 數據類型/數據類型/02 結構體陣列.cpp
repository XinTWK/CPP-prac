#include <iostream>
#include <string>
using namespace std;

//���c��}�C
// 1.�w�q���c��
struct Student
{
	//�m�W
	string name;
	//�~��
	int age;
	//����
	int score;
};


int main2() {


// 2.�Ыص��c��}�C
	struct Student stuArray[3]=
	{
		{"�i�T",18,100},
		{"���|",28, 99},
		{"����",38, 66}
	};

// 3.�����c��}�C�����������
	stuArray[2].name = "����";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

// 4.�M�����c��}�C
	for (int i = 0; i < 3; i++) {
		cout << "�m�W: " << stuArray[i].name 
			 << " �~��: " << stuArray[i].age
			 << " ����: " << stuArray[i].score << endl;
	}



	system("pause");

	return 0;
}