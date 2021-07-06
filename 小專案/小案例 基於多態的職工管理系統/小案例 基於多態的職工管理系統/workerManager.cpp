#include"workerManager.h"

WorkerManager::WorkerManager()
{

	// 1. ��󤣦s�b
	ifstream ifs;
	ifs.open(FILENAME, ios::in); // Ū���

	if (!ifs.is_open())
	{
		cout << "��󤣦s�b" << endl;
		// ��l���ݩ�
		// ��l�Ƭ����H��
		this->m_EmpNum = 0;
		// ��l�ư}�C���w
		this->m_EmpArray = NULL;
		// ��l�Ƥ��O�_����
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	// 2. ���s�b, �ƾڬ���
	char ch;
	ifs >> ch;
	if (ifs.eof()) // ���̫�@�Ӧr
	{
		// ��󬰪�
		//cout << "�����Ť��! " << endl;
		// ��l���ݩ�
		// ��l�Ƭ����H��
		this->m_EmpNum = 0;
		// ��l�ư}�C���w
		this->m_EmpArray = NULL;
		// ��l�Ƥ��O�_����
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	// 3. ���s�b, �åB�O���ƾ�
	int num = this->get_EmpNum();
	//cout << "���u�H�Ƭ�:  " << num << endl;
	this->m_EmpNum = num;

	// �}�P�Ŷ�
	this->m_EmpArray = new Worker *[this->m_EmpNum];
	// �N��󤤪��ƾ�, �s��}�C��
	init_Emp();

	//// ���յ{���X
	//for (int i = 0; i < m_EmpNum;i++)
	//{
	//	cout << "���u�s��:  " << this->m_EmpArray[i]->m_ID
	//		<< " �m�W:  " << this->m_EmpArray[i]->m_Name
	//		<< " �����s��:  " << this->m_EmpArray[i]->m_DepID << endl;
	//}
}


// ��ܵ��
void WorkerManager::Show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*********  �w��ϥέ��u�޲z�t��!  **********" << endl;
	cout << "*************  0.�h�X�޲z�{��  *************" << endl;
	cout << "*************  1.�W�[���u�T��  *************" << endl;
	cout << "*************  2.��ܭ��u�T��  *************" << endl;
	cout << "*************  3.�R����¾���u  *************" << endl;
	cout << "*************  4.�ק���u�T��  *************" << endl;
	cout << "*************  5.�d����u�T��  *************" << endl;
	cout << "*************  6.���ӽs���Ƨ�  *************" << endl;
	cout << "*************  7.�M�ũҦ����  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

// �h�X�t��
void WorkerManager::ExitSystem()
{
	cout << "�w��U���ϥ�" << endl;
	system("pause");
	exit(0); // �h�X�{��
}

// �K�[���u
void WorkerManager::Add_Emp()
{
	cout << "�п�J�K�[���u�ƶq:  " << endl;

	int addNum = 0; // �O�s�Τ᪺��J�ƶq
	cin >> addNum;

	if (addNum > 0)
	{
		// �K�[
		// �p��K�[�s�Ŷ��j�p
		int newSize = this->m_EmpNum + addNum; // �s�Ŷ��H�� = ���ӰO���H�� + �s�W�H��

		// �}�P�s�Ŷ�
		Worker ** newSpace = new Worker *[newSize];

		// �N��ӪŶ��U���ƾ�, ������s�Ŷ��U
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				for (int i = 0; i < this->m_EmpNum; i++)
				{
					newSpace[i] = this->m_EmpArray[i];
				}
			}
		}

		// ��q�K�[�s�ƾ�
		for (int i = 0; i < addNum; i++)
		{
			int id; // ���u�s��
			string name; // ���u�m�W
			int dSelect; // �������

			cout << "�п�J�� " << i + 1 << " �ӷs���u�s��:  " << endl;
			cin >> id;

			cout << "�п�J�� " << i + 1 << " �ӷs���u�m�W:  " << endl;
			cin >> name;

			cout << "�п�ܸӭ��u�^��:  " << endl;
			cout << "1. ���q���u" << endl;
			cout << "2. �g�z" << endl;
			cout << "3. ����" << endl;
			cin >> dSelect;

			Worker * worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;

			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			// �N�Ыح��u¾�d, �O�s��}�C��
			newSpace[this->m_EmpNum + i] = worker;


		}

		// ����쥻�Ŷ�
		delete[] this->m_EmpArray;

		// ���s�Ŷ������V
		this->m_EmpArray = newSpace;

		// ��s�s�����u�H��
		this->m_EmpNum = newSize;

		// ��s����������
		this->m_FileIsEmpty = false;

		// �O�s�ƾڨ���
		this->save();

		// ���ܲK�[���\
		cout << "���\�K�[" << addNum << "�W�s���u!" << endl;



	}
	else
	{
		cout << "��J�ƾڦ��~" << endl;
	}

	// �ץ��N���� �M�̦^��W�ťؿ�
	system("pause");
	system("cls");
}

// �O�s���
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out); // �ο�X���覡���}���  --  �g���

	// �N�C�ӤH�ƾڼg�J����
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_ID << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DepID << endl;
	}

	// �������
	ofs.close();

}


// �έp��󤤤H��
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in); // ���}���  Ū

	int id;
	string name;
	int dId;

	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		// �έp�H���ܼ�
		num++;
	}

	return num;
}

// ��l�ƭ��u
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker * worker = NULL;

		if (dId == 1) // ���q���u
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2) // �g�z
		{
			worker = new Manager(id, name, dId);
		}
		else if (dId == 3) // ����
		{
			worker = new Boss(id, name, dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}

	// �������
	ifs.close();
}

// ��ܭ��u
void WorkerManager::Show_Emp()
{
	// �P�_���O�_����
	if (this->m_FileIsEmpty)
	{
		cout << "��󤣦s�b�ά�������!" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			// �Q�Φh�A�եε{�����f
			this->m_EmpArray[i]->showInfo();
		}
	}
	// �����N���M��
	system("pause");
	system("cls");
}

// �R�����u
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "��󤣦s�b�ά�������!" << endl;
	}
	else
	{
		// ���ӭ��u�s���R��
		cout << "�п�J�Q�n�R�����u�s��: " << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);
		if (index != -1) // �������u�s�b, �åB�n�R��index��m�W�����u
		{
			// �ƾګe��
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--; // ��s�}�C���O���H�����Ӽ�
			// �ƾڦP�B��s����
			this->save();

			cout << "�R�����\" << endl;
		}
		else
		{
			cout << "�R������, �����ӭ��u" << endl;
		}
	}

	// �����N�� �M��
	system("pause");
	system("cls");
}

// �P�_���u�O�_�s�b  �p�G�s�b��^�����Ҧb�}�C������m, ���s�b��^-1
int WorkerManager::IsExist(int id)
{
	int index = -1;

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_ID == id)
		{
			// �����u
			index = i;

			break;
		}
	}
	return index;
}

// �ק���u
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "��󤣦s�b�ά�������!" << endl;
	}
	else
	{
		cout << "�п�J�ק�¾�u���s��: " << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			// �d���s�������u

			delete this->m_EmpArray[ret];

			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "�d��:  " << id << "�����u, �п�J�s���u��: " << endl;
			cin >> newId;

			cout << "�п�J�s�m�W:  " << endl;
			cin >> newName;

			cout << "�п�J�s�^��:  " << endl;
			cout << "1. ���q���u" << endl;
			cout << "2. �g�z" << endl;
			cout << "3. ����" << endl;

			cin >> dSelect;

			Worker * worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newName, dSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelect);
				break;
			default:
				break;
			}

			// ��s�ƾ� ��}�C��
			this->m_EmpArray[ret] = worker;

			cout << "�ק令�\!" << endl;

			// �O�s����
			this->save();
		}
		else
		{
			cout << "�ק異��, �d�L���H!" << endl;
		}
	}
	// �����N�� �M��
	system("pause");
	system("cls");
}

// �d����u
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "��󤣦s�b�ά�������!" << endl;
	}
	else
	{
		cout << "�п�J�d�䪺�覡: " << endl;
		cout << "1. ���ӭ��u�s���d�� " << endl;
		cout << "2. ���ӭ��u�m�W�d��" << endl;

		int select = 0;
		cin >> select;
		if (select == 1)
		{
			// ���ӽs���d
			int id;
			cout << "�п�J�d�䪺���u�s��:  " << endl;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1)
			{
				// �������u
				cout << "�d�䦨�\!  �ӭ��u�T���p�U:  " << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "�d�䥢��, �d�L���H" << endl;
			}
		}
		else if (select == 2)
		{
			// ���өm�W�d
			string name;
			cout << "�п�J�d�䪺�m�W:  " << endl;
			cin >> name;

			// �[�J�P�_�O�_�d�쪺�лx
			bool flag = false; // �q�{�������u

			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "�d�䦨�\, ���u�s����:  "
						<< this->m_EmpArray[i]->m_ID
						<< "�����u�T���p�U:  " << endl;

					flag = true;

					// �ե���ܰT�����f
					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				cout << "�d�䥢��, �d�L���H!" << endl;
			}
		}
		else
		{
			cout << "��J�ﶵ���~! " << endl;
		}
	}
	// �����N�� �M��
	system("pause");
	system("cls");
}

// ���ӽs���Ƨ�
void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "��󤣦s�b�ά�������!" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "�п�ܱƧǤ覡" << endl;
		cout << "1. �����u�s���i��ɧ�" << endl;
		cout << "2. �����u�s���i�歰��" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i; // �n���̤p��  ��  �̤j�Ȫ��U��
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1) // �ɧ�
				{
					if (this->m_EmpArray[minOrMax]->m_ID > this->m_EmpArray[j]->m_ID)
					{
						minOrMax = j;
					}
					else // ����
					{
						if (this->m_EmpArray[minOrMax]->m_ID < this->m_EmpArray[j]->m_ID)
						{
							minOrMax = j;
						}
					}
				}

				// �P�_�@�}�l�{�w �̤p�ȩγ̤j�� �O���O �p�⪺�̤p�ȩγ̤j��, �p�G���O  �洫�ƾ�
				if (i != minOrMax)
				{
					Worker * temp = this->m_EmpArray[i];
					this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
					this->m_EmpArray[minOrMax] = temp;
				}
			}
		}
		cout << "�ƧǦ��\! �Ƨǫ᪺���G��:  " << endl;
		this->save(); // �Ƨǫ᪺���G�O�s����
		this->Show_Emp(); // �i�ܩҦ����u
	}
}

// �M�Ť��
void WorkerManager::Clean_File()
{
	cout << "�T�w�M��?" << endl;
	cout << "1. �T�w" << endl;
	cout << "2. ��^" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		// �M�Ť��
		ofstream ofs(FILENAME, ios::trunc); // �R�����᭫�s�Ы�
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			// �R����Ϫ��C�ӭ��u��H
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				m_EmpArray[i] = NULL;
			}

			// �R����ϰ}�C���w
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}

		cout << "�M�Ŧ��\! " << endl;
	}

	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}
