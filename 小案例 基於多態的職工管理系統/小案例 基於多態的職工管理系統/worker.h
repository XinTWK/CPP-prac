#pragma once
#include<iostream>
#include<string>
using namespace std;


// ���u��H��
class Worker
{
public:

	// ��ܭӤH�T��
	virtual void showInfo() = 0;

	// ����^��W��
	virtual string getDepName() = 0;

	// ���u�s��
	int m_ID;
	// ���u�m�W
	string m_Name;
	// �����s��
	int m_DepID;

};