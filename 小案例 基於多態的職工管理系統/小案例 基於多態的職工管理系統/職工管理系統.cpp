//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"workerManager.h"

#include "worker.h"
#include "employee.h"
#include"manager.h"
#include "boss.h"

int main() 
{
	// 測試多態程式碼:
	//Worker * worker = NULL;
	//worker = new Employee(1, "張三", 1);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "李四", 2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "王武", 3);
	//worker->showInfo();
	//delete worker;

	// 實例化管理者對象
	WorkerManager wm;

	int choice = 0; // 用來存儲用戶的選項

	while (true)
	{


		// 調用展示菜單成員函數
		wm.Show_Menu();


		cout << "請輸入您的選擇: " << endl;
		cin >> choice; // 接收用戶的選項

		switch (choice)
		{
		case 0: 
			wm.ExitSystem();
			break;
		case 1: // 增加員工
			wm.Add_Emp();
			break;
		case 2: // 顯示員工
			wm.Show_Emp();
			
			break;
		case 3: // 刪除員工
		//// 測試
		//{
		//	int ret = wm.IsExist(5);
		//	if (ret != -1)
		//	{
		//		cout << "員工存在" << endl;
		//	}
		//	else
		//	{
		//		cout << "員工不存在" << endl;
		//	}
		//	break;
		//}
			wm.Del_Emp();
		break;
		case 4: // 修改員工
			wm.Mod_Emp();
			break;
		case 5: // 查找員工
			wm.Find_Emp();
			break;
		case 6: // 排序員工
			wm.Sort_Emp();
			break;
		case 7: // 清空資料
			wm.Clean_File();
			break;
		default:
			system("cls"); // 清除畫面
			break;
		}
	}

	system("pause");

	return EXIT_SUCCESS;
}

