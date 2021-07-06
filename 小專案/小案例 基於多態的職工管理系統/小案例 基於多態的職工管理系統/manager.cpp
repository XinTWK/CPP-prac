#include"manager.h"

// 構造函數
Manager::Manager(int id, string name, int dId)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DepID = dId;
}

// 顯示個人訊息
void Manager::showInfo() 
{
	cout << "員工編號:  " << this->m_ID
		<< "\t員工姓名:  " << this->m_Name
		<< "\t崗位:  " << this->getDepName()
		<< "\t崗位職責:  完成老闆交給的任務, 並且下發任務給員工" << endl;
}

// 獲取崗位名稱
string Manager::getDepName()
{
	return string("經理");
}