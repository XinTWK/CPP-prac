#pragma once
#include <iostream>
using namespace std;
#include"worker.h"

class Boss : public Worker
{
public:

	// �c�y���
	Boss(int id, string name, int dId);

	// ��ܭӤH�T��
	virtual void showInfo();

	// ����^��W��
	virtual string getDepName();

};