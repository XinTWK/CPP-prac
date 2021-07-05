// 普通員工文件
#pragma once
#include <iostream>
using namespace std;
#include"worker.h"

class Employee : public Worker
{
public:

	// 構造函數
	Employee(int id,string name,int dId);

	// 顯示個人訊息
	virtual void showInfo();

	// 獲取崗位名稱
	virtual string getDepName();

};