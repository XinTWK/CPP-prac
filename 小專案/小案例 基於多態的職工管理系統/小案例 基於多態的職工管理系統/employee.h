// ���q���u���
#pragma once
#include <iostream>
using namespace std;
#include"worker.h"

class Employee : public Worker
{
public:

	// �c�y���
	Employee(int id,string name,int dId);

	// ��ܭӤH�T��
	virtual void showInfo();

	// ����^��W��
	virtual string getDepName();

};