#include <iostream>
#include <string>
using namespace std;

//1. �]�p�^�������c��
//�^�����c��
struct Hero
{
	//�m�W
	string name;
	//�~��
	int age;
	//�ʧO
	string sex;
};

//�w�j�Ƨ� ��{�~�֤ɧǱƦC
void bubbleSort(struct Hero heroArray[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//�p�G j�U�Ъ������~�� �j�� j+1�U�Ъ��������~��,�洫��Ӥ���
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}


//
void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
			cout << "�m�W:  " << heroArray[i].name << " �~��:  " << heroArray[i].age 
			<< " �ʧO:  " << heroArray[i].sex << endl;
	}
}



int main8() {

	//2. �ЫؼƲզs��5�W�^��
	struct Hero heroArray[5] =
	{
		{"�B��",23,"�k"},
		{"����",22,"�k" },
		{"�i��",20,"�k" },
		{"����",21,"�k" },
		{"�I��",19,"�k" },
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "�Ƨǫe����X:  " << endl;
	for (int i = 0;i < len; i++)
	{
		cout << "�m�W:  " << heroArray[i].name << " �~��:  " << heroArray[i].age 
			<< " �ʧO:  " << heroArray[i].sex << endl;
	}

	//3.��Ʋնi��Ƨ�,���Ӧ~�ֶi��ɧǱƧ�
	bubbleSort(heroArray,len);
	
	cout << "�Ƨǫ᪺��X:  " << endl;

	//4.�N�Ƨǫᵲ�G��X
	printHero(heroArray, len);


	system("pause");
	return 0;

}