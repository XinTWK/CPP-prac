#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//�ǥͪ����c��
struct Student {
	
	//�m�W
	string sName;
	//����
	int score;

};



//�Ѯv�����c��w�q
struct Teacher
{
	//�m�W
	string tName;
	//�ǥͼƲ�
	struct Student sArray[5];
};

//���Ѯv�M�ǥͽ�Ȫ����
void allocateSpace(struct Teacher tArray[],int len) {
	
	string nameSeed = "ABCDE";
	//���Ѯv�}�l���
	for (int i = 0; i < len; i++) {
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//�q�L�`�����C�W�Ѯv�ұa���ǥͽ��
		for (int j = 0; j < 5; j++) {

			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			int random = rand() % 61 +40;
			tArray[i].sArray[j].score = random;
		}
	
	}
}

//��X�Ҧ��T��
void printInfo(struct Teacher tArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "�Ѯv�m�W:  " << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++) {
			cout << "\t�ǥͩm�W:  " << tArray[i].sArray[j].sName << 
				" �Ҹդ���:  "<<tArray[i].sArray[j].score<<endl;
		}
	}
}

int main7() {

	//�H���ƺؤl
	srand((unsigned int)time(NULL));

	//1.�Ы�3�W�Ѯv���Ʋ�
	struct Teacher tArray[3];

	//2.�q�L��Ƶ�3�W�Ѯv���H�����,�õ��Ѯv�a���ǥͫH�����
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//3.��X�Ҧ��Ѯv�Ωұa���ǥͫH��
	printInfo(tArray, len);

	system("pause");
	return 0;
}