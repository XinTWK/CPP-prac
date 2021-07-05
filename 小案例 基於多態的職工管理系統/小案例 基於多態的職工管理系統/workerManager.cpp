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
		cout << "�����Ť��! " << endl;
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
	cout << "���u�H�Ƭ�:  " << num << endl;
	this->m_EmpNum = num;

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
	ofs.open(FILENAME,ios::out); // �ο�X���覡���}���  --  �g���

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

	while (ifs>>id && ifs>>name && ifs>>dId)
	{
		// �έp�H���ܼ�
		num++;
	}

	return num;
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}
