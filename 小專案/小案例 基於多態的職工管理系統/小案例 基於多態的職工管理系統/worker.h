#pragma once
#include<iostream>
#include<string>
using namespace std;


// 員工抽象類
class Worker
{
public:

	// 顯示個人訊息
	virtual void showInfo() = 0;

	// 獲取崗位名稱
	virtual string getDepName() = 0;

	// 員工編號
	int m_ID;
	// 員工姓名
	string m_Name;
	// 部門編號
	int m_DepID;

};