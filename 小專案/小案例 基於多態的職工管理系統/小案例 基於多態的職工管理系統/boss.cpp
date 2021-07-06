#include "boss.h"

// 構造函數
Boss::Boss(int id, string name, int dId)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DepID = dId;
}

// 顯示個人訊息
void Boss::showInfo()
{
	cout << "員工編號:  " << this->m_ID
		<< "\t員工姓名:  " << this->m_Name
		<< "\t崗位:  " << this->getDepName()
		<< "\t崗位職責:  管理公司所有事務" << endl;
}

// 獲取崗位名稱
string Boss::getDepName()
{
	return string("老闆");
}
