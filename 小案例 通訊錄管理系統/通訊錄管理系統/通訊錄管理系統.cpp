#include <iostream>
#include <string>
#define Max 1000 //�̤j�H��
using namespace std;

//�]�p�p���H���c��
struct Person
{
	//�m�W
	string m_Name;
	//�ʧO	1.�k 2.�k
	int m_sex;
	//�~��
	int m_age;
	//�q��
	string m_Phone;
	//��}
	string m_Addr;
};


//�]�p�q�T�����c��
struct AddressBooks
{
	//�q�T�����O�s���p���H�}�C
	struct Person personArray[Max];
	
	//�q�T������e�����p���H�Ӽ�
	int m_Size;
};

//1.�K�[�p���H
void addPerson(AddressBooks *abs)
{
	//�P�_�q�T���O�_���F,�p�G���F�N���b�W�[
	if (abs->m_Size == Max)
	{
		cout << "�q�T�����F,�L�k�K�[! " << endl;
		return;
	}
	else
	{
		//�K�[�����p���H

		//�m�W
		string name;
		cout << "�п�J�m�W:  " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		
		//�ʧO
		cout << "�п�J�ʧO:  " << endl;
		cout << "1 --- �k" << endl;
		cout << "2 --- �k" << endl;
		int sex = 0;
		
		while (true)
		{
			//�p�G��J���O1 �Ϊ� 2 �i�H�h�X�`��
			//�p�G��J���~,���s��J
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_sex = sex;
				break;

			}
			cout << "��J���~,�Э��s��J" << endl;
		}
		
		//�~��
		cout << "�п�J�~��:  " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_age = age;

		//�q��
		cout << "�п�J�q�ܸ��X:  " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//�a�}
		cout << "�п�J�~��a�}:  " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//��s�q�T���H��
		abs->m_Size++;

		cout << "�K�[���\" << endl;

		system("pause"); //�Ы����N���~��
		system("cls"); //�M���µ���T
	}
}

//2.��ܩҦ��p���H
void showPerson(AddressBooks *abs)
{
	//�P�_�q�T�����H�ƬO�_��0,�p�G��0,�D�O��������
	//�p�G����0,��ܬ������p���H�T��
	if (abs->m_Size == 0)
	{
		cout << "��e��������" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "�m�W:  " << abs->personArray[i].m_Name << "\t";
			cout << "�ʧO:  " << (abs->personArray[i].m_sex == 1 ? "�k":"�k") << "\t";
			cout << "�~��   " << abs->personArray[i].m_age << "\t";
			cout << "�q��:  " << abs->personArray[i].m_Phone << "\t";
			cout << "��}:  " << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");

}


//�˴��p���H�O�_�s�b, �p�G�s�b, ��^�p���H�Ҧb�}�C���������l, ���s�b��^-1
//�Ѽ�1 �q�T��   �Ѽ�2 ���m�W
int isExist(AddressBooks *abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;	 //���F , ��^�o�ӤH�b�}�C�����U�нs��
		}
	}
	return -1; // �p�G�j�M�����S�����,��^-1
}

//3.�R�����w�p���H
void deletePerson(AddressBooks *abs)
{
	cout << "�п�J�z�n�R�����p���H" << endl;

	string name;
	cin >> name;


	// ret == -1 ���d��
	// ret != -1 �d��F
	int ret = 	isExist(abs, name);

	if (ret != -1)
	{
		//���H, �n�i��R���ާ@
		for (int i = ret; i < abs->m_Size; i++)
		{
			//�ƾګe��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--; //��s�q�T�������H����
		cout << "�R�����\" << endl;
	}
	else
	{
		cout << "�d�L���H" << endl;
	}

	system("pause");
	system("cls");
}

//4.�M����w�p���H�T��

void findPerson(AddressBooks *abs)
{
	cout << "�п�J�z�n�M�䪺�p���H" << endl;
	string name;
	cin >> name;

	//�P�_���w���p���H�O�_�b�q�T����
	int ret = isExist(abs, name);

	if (ret != -1) //����p���H
	{
		cout << "�m�W:  " << abs->personArray[ret].m_Name << "\t";
		cout << "�ʧO:  " << (abs->personArray[ret].m_sex == 1 ? "�k":"�k" )<< "\t";
		cout << "�~��:  " << abs->personArray[ret].m_age << "\t";
		cout << "���X:  " << abs->personArray[ret].m_Phone << "\t";
		cout << "�a�}:  " << abs->personArray[ret].m_Addr<< endl;
	}
	else			//������p���H
	{
		cout << "�d�L���H" << endl;
	}
	system("pause");
	system("cls");
}

//�ק���w�p���H�T��
void modifyPerson(AddressBooks *abs)
{
	cout << "�п�J�z�Q�n�ק諸�p���H" << endl;
	string name;
	cin >> name;

	int ret =  isExist(abs, name);

	if (ret != -1)
	{
		int flag = 1;
		while (flag)
		{
			cout << "************************" << endl;
			cout << "*****  1.�ק�m�W  *****" << endl;
			cout << "*****  2.�ק�ʧO  *****" << endl;
			cout << "*****  3.�ק�~��  *****" << endl;
			cout << "*****  4.�ק�q��  *****" << endl;
			cout << "*****  5.�ק��}  *****" << endl;
			cout << "*****  0.�h�X      *****" << endl;
			cout << "************************" << endl;
			int ans = 0;
			cin >> ans;
			switch (ans)
			{
			case 1:
				//�m�W
			{string name;
			cout << "�п�J�m�W:  " << endl;
			cin >> name;
			abs->personArray[ret].m_Name = name;
			}
			break;
			case 2:
			{//�ʧO
				cout << "�п�J�ʧO: " << endl;
				cout << "1 --- �k" << endl;
				cout << "2 --- �k" << endl;
				int sex = 0;

				while (true)
				{
					cin >> sex;
					if (sex == 1 || sex == 2)
					{
						abs->personArray[ret].m_sex = sex;
						break;
					}
					cout << "��J���~,�Э��s��J" << endl;
				}
			}
			break;
			case 3:
				//�~��
			{cout << "�п�J�~��:  " << endl;
			int age = 0;
			cin >> age;
			abs->personArray[ret].m_age = age;
			}
			break;
			case 4:

			{//�q��
				cout << "�п�J�q�ܸ��X:  " << endl;
				string Phone;
				cin >> Phone;
				abs->personArray[ret].m_Phone = Phone;
			}
			break;
			case 5:
			{//��}
				cout << "�п�J�~��a�}:  " << endl;
				string address;
				cin >> address;
				abs->personArray[ret].m_Addr = address;
			}
			break;
			case 0:
			{
				cout << "�Ҧ����حק令�\" << endl;
				flag = 0;
				break;
			}
			default:
				break;
			}
		}
	}
	else
	{
		cout << "�d�L���H" << endl;
	}
	system("pause");
	system("cls");
}

//�M���ҥ��p���H
void cleanPerson(AddressBooks *abs)
{
	cout << "�O�_�n�M�ũҦ��p���H��T? " << endl;
	cout << "1 --- �O" << endl;
	cout << "2 --- �_" << endl;
	int ans = 0;
	cin >> ans;
	if (ans == 1)
	{
		abs->m_Size = 0; //�N��e�����p���H�ƶq��אּ0, ���޿�M�žާ@
		cout << "�q�T���w�g�M��" << endl;
	}
	else
	{
		cout << "���M���p���H" << endl;
	}

	system("pause");
	system("cls");
}


//��椶��
void showMenu()
{
	cout << "**************************" << endl;
	cout << "*****  1.�K�[�p���H  *****" << endl;
	cout << "*****  2.����p���H  *****" << endl;
	cout << "*****  3.�R���p���H  *****" << endl;
	cout << "*****  4.�d���p���H  *****" << endl;
	cout << "*****  5.�ק��p���H  *****" << endl;
	cout << "*****  6.�M���p���H  *****" << endl;
	cout << "*****  0.�h�X�q�T��  *****" << endl;
	cout << "**************************" << endl;
}

int main()
{
	//�Ыسq�T�����c���ܼ�
	AddressBooks abs; 
	//��l�Ƴq�T������e�H���Ӽ�
	abs.m_Size = 0;

	int select = 0; // �ЫإΤ��ܿ�J���ܼ�

	while (true)
	{
		//���ե�
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:		//1.�K�[�p���H
			addPerson(&abs); //�Q�Φa�}�ǻ�,�i�H�׹����
			
			break;
		case 2:		//2.����p���H
			showPerson(&abs);
			break;
		case 3:		//3.�R���p���H
		//���ե�
		//{
		//	cout << "�п�J���R�����p���H�m�W:  " << endl;
		//	string name;
		//	cin >> name;

		//	if (isExist(&abs, name) == -1)
		//	{
		//		cout << "�d�L���H" << endl;
		//	}
		//	else
		//	{
		//		cout << "��즹�H" << endl;
		//	}
		//}
			deletePerson(&abs);
			break;
		case 4:		//4.�d���p���H
			findPerson(&abs);
			break;
		case 5:		//5.�ק��p���H
			modifyPerson(&abs);
			break;
		case 6:		//6.�M���p���H 
			cleanPerson(&abs);
			break;
		case 0:		//0.�h�X�q�T��
			cout << "�w��U���ϥ�" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}