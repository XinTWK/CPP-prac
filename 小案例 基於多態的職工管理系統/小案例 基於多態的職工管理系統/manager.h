#pragma once
#include <iostream>
using namespace std;
#include"worker.h"

// �g�z��
class Manager : public Worker
{
public:

	// �c�y���
	Manager(int id, string name, int dId);

	// ��ܭӤH�T��
	virtual void showInfo();

	// ����^��W��
	virtual string getDepName();

};