//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"workerManager.h"

#include "worker.h"
#include "employee.h"
#include"manager.h"
#include "boss.h"

int main() 
{
	// ���զh�A�{���X:
	//Worker * worker = NULL;
	//worker = new Employee(1, "�i�T", 1);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "���|", 2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "���Z", 3);
	//worker->showInfo();
	//delete worker;

	// ��Ҥƺ޲z�̹�H
	WorkerManager wm;

	int choice = 0; // �ΨӦs�x�Τ᪺�ﶵ

	while (true)
	{


		// �եήi�ܵ�榨�����
		wm.Show_Menu();


		cout << "�п�J�z�����: " << endl;
		cin >> choice; // �����Τ᪺�ﶵ

		switch (choice)
		{
		case 0: 
			wm.ExitSystem();
			break;
		case 1: // �W�[���u
			wm.Add_Emp();
			break;
		case 2: // ��ܭ��u
			wm.Show_Emp();
			
			break;
		case 3: // �R�����u
		//// ����
		//{
		//	int ret = wm.IsExist(5);
		//	if (ret != -1)
		//	{
		//		cout << "���u�s�b" << endl;
		//	}
		//	else
		//	{
		//		cout << "���u���s�b" << endl;
		//	}
		//	break;
		//}
			wm.Del_Emp();
		break;
		case 4: // �ק���u
			wm.Mod_Emp();
			break;
		case 5: // �d����u
			wm.Find_Emp();
			break;
		case 6: // �Ƨǭ��u
			wm.Sort_Emp();
			break;
		case 7: // �M�Ÿ��
			wm.Clean_File();
			break;
		default:
			system("cls"); // �M���e��
			break;
		}
	}

	system("pause");

	return EXIT_SUCCESS;
}

