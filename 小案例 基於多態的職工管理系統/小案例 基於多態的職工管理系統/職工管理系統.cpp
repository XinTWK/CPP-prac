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
			break;
		case 3: // �R�����u
			break;
		case 4: // �ק���u
			break;
		case 5: // �d����u
			break;
		case 6: // �Ƨǭ��u
			break;
		case 7: // �M�Ÿ��
			break;
		default:
			system("cls"); // �M���e��
			break;
		}
	}

	system("pause");

	return EXIT_SUCCESS;
}

