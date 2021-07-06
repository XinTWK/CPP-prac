#pragma once
#include <iostream>
using namespace std;
#include"worker.h"

// 經理類
class Manager : public Worker
{
public:

	// 構造函數
	Manager(int id, string name, int dId);

	// 顯示個人訊息
	virtual void showInfo();

	// 獲取崗位名稱
	virtual string getDepName();

};