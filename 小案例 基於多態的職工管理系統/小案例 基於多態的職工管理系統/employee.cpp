#include "employee.h"

// �c�y���
Employee::Employee(int id, string name, int dId)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DepID = dId;
}

// ��ܭӤH�T��
void Employee::showInfo()
{
	cout << "���u�s��:  " << this->m_ID
		<< "\t���u�m�W:  " << this->m_Name
		<< "\t�^��:  " << this->getDepName()
		<< "\t�^��¾�d:  �����g�z�浹������" << endl;
}

// ����^��W��
string Employee::getDepName()
{
	return  string("���u");
}
