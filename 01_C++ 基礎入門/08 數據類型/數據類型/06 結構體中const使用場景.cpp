#include <iostream>
using namespace std;
#include <string>
//const���ϥγ���

struct student
{
	string name;
	int age;
	int score;
};

void printStudents(const student *s) {
	//s->age = 150;
	cout << "�m�W:  " << (*s).name << " �~��:  " << s->age << " �o��:  " << s->score << endl;
}

int main6() {

//�Ыص��c���ܼ�
	struct student s = { "�i�T",15,70 };

	//�q�L��ƨӿ�X���c���ܼưT��
	printStudents(&s);

	cout << "main���i�T�~�֬�:  " << s.age << endl;


	system("pause");

	return 0;
}