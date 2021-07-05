#pragma once  // ňゎ繷ゅン狡
#include<iostream> // 块块瑈繷ゅン
using namespace std; // ㄏノ夹非㏑丁
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

#include<fstream>
#define FILENAME "empFile.txt"


class WorkerManager
{
public:

	// 篶硑ㄧ计
	WorkerManager();

	// 甶ボMenu
	void Show_Menu();

	// 癶╰参
	void ExitSystem();

	// 魁计
	int m_EmpNum;

	// 皚皐
	Worker ** m_EmpArray;

	// 睰
	void Add_Emp();

	// 玂ゅン
	void save();

	// 耞ゅン琌  夹粁
	bool m_FileIsEmpty;

	// 参璸ゅンい计
	int get_EmpNum();

	// 猂篶ㄧ计
	~WorkerManager();

};