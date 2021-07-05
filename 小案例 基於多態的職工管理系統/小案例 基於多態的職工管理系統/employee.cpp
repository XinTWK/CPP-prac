#include "employee.h"

// 構造函數
Employee::Employee(int id, string name, int dId)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DepID = dId;
}

// 顯示個人訊息
void Employee::showInfo()
{
	cout << "員工編號:  " << this->m_ID
		<< "\t員工姓名:  " << this->m_Name
		<< "\t崗位:  " << this->getDepName()
		<< "\t崗位職責:  完成經理交給的任務" << endl;
}

// 獲取崗位名稱
string Employee::getDepName()
{
	return  string("員工");
}
