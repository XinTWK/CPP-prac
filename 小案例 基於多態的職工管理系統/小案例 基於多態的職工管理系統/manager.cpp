#include"manager.h"

// �c�y���
Manager::Manager(int id, string name, int dId)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DepID = dId;
}

// ��ܭӤH�T��
void Manager::showInfo() 
{
	cout << "���u�s��:  " << this->m_ID
		<< "\t���u�m�W:  " << this->m_Name
		<< "\t�^��:  " << this->getDepName()
		<< "\t�^��¾�d:  ��������浹������, �åB�U�o���ȵ����u" << endl;
}

// ����^��W��
string Manager::getDepName()
{
	return string("�g�z");
}