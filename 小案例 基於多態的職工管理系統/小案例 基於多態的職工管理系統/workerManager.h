#pragma once  // �����Y��󭫽ƥ]�t
#include<iostream> // �]�t��J��X�y�Y���
using namespace std; // �ϥμзǩR�W�Ŷ�
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

#include<fstream>
#define FILENAME "empFile.txt"


class WorkerManager
{
public:

	// �c�y���
	WorkerManager();

	// �i��Menu
	void Show_Menu();

	// �h�X�t��
	void ExitSystem();

	// �������u�H��
	int m_EmpNum;

	// ���u�}�C���w
	Worker ** m_EmpArray;

	// �K�[���u
	void Add_Emp();

	// �O�s���
	void save();

	// �P�_���O�_����  �лx
	bool m_FileIsEmpty;

	// �έp��󤤤H��
	int get_EmpNum();

	// �R�c���
	~WorkerManager();

};