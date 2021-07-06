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

	// ��l�ƭ��u
	void init_Emp();

	// ��ܭ��u
	void Show_Emp();

	// �R�����u
	void Del_Emp();

	// �P�_���u�O�_�s�b  �p�G�s�b��^�����Ҧb�}�C������m, ���s�b��^-1
	int IsExist(int id);

	// �ק���u
	void Mod_Emp();

	// �d����u
	void Find_Emp();

	// ���ӽs���Ƨ�
	void Sort_Emp();

	// �M�Ť��
	void Clean_File();

	// �R�c���
	~WorkerManager();

};