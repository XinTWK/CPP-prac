#include "boss.h"

// �c�y���
Boss::Boss(int id, string name, int dId)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DepID = dId;
}

// ��ܭӤH�T��
void Boss::showInfo()
{
	cout << "���u�s��:  " << this->m_ID
		<< "\t���u�m�W:  " << this->m_Name
		<< "\t�^��:  " << this->getDepName()
		<< "\t�^��¾�d:  �޲z���q�Ҧ��ư�" << endl;
}

// ����^��W��
string Boss::getDepName()
{
	return string("����");
}
