#include"workerManager.h"

WorkerManager::WorkerManager()
{

	// 1. 文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in); // 讀文件

	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		// 初始化屬性
		// 初始化紀錄人數
		this->m_EmpNum = 0;
		// 初始化陣列指針
		this->m_EmpArray = NULL;
		// 初始化文件是否為空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	// 2. 文件存在, 數據為空
	char ch;
	ifs >> ch;
	if (ifs.eof()) // 文件最後一個字
	{
		// 文件為空
		cout << "此為空文件! " << endl;
		// 初始化屬性
		// 初始化紀錄人數
		this->m_EmpNum = 0;
		// 初始化陣列指針
		this->m_EmpArray = NULL;
		// 初始化文件是否為空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	// 3. 文件存在, 並且記錄數據
	int num = this->get_EmpNum();
	cout << "員工人數為:  " << num << endl;
	this->m_EmpNum = num;

}


// 顯示菜單
void WorkerManager::Show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*********  歡迎使用員工管理系統!  **********" << endl;
	cout << "*************  0.退出管理程式  *************" << endl;
	cout << "*************  1.增加員工訊息  *************" << endl;
	cout << "*************  2.顯示員工訊息  *************" << endl;
	cout << "*************  3.刪除離職員工  *************" << endl;
	cout << "*************  4.修改員工訊息  *************" << endl;
	cout << "*************  5.查找員工訊息  *************" << endl;
	cout << "*************  6.按照編號排序  *************" << endl;
	cout << "*************  7.清空所有資料  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

// 退出系統
void WorkerManager::ExitSystem()
{
	cout << "歡迎下次使用" << endl;
	system("pause");
	exit(0); // 退出程式
}

// 添加員工
void WorkerManager::Add_Emp()
{
	cout << "請輸入添加員工數量:  " << endl;

	int addNum = 0; // 保存用戶的輸入數量
	cin >> addNum;

	if (addNum > 0)
	{
		// 添加
		// 計算添加新空間大小
		int newSize = this->m_EmpNum + addNum; // 新空間人數 = 員來記錄人數 + 新增人數

		// 開闢新空間
		Worker ** newSpace = new Worker *[newSize];

		// 將原來空間下的數據, 拷貝到新空間下
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				for (int i = 0; i < this->m_EmpNum; i++)
				{
					newSpace[i] = this->m_EmpArray[i];
				}
			}
		}

		// 批量添加新數據
		for (int i = 0; i < addNum; i++)
		{
			int id; // 員工編號
			string name; // 員工姓名
			int dSelect; // 部門選擇

			cout << "請輸入第 " << i + 1 << " 個新員工編號:  " << endl;
			cin >> id;

			cout << "請輸入第 " << i + 1 << " 個新員工姓名:  " << endl;
			cin >> name;

			cout << "請選擇該員工崗位:  " << endl;
			cout << "1. 普通員工" << endl;
			cout << "2. 經理" << endl;
			cout << "3. 老闆" << endl;
			cin >> dSelect;

			Worker * worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;

			case 2:
				worker = new Manager(id, name, 2);
				break;			
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			// 將創建員工職責, 保存到陣列中
			newSpace[this->m_EmpNum + i] = worker;


		}

		// 釋放原本空間
		delete[] this->m_EmpArray;

		// 更改新空間的指向
		this->m_EmpArray = newSpace;

		// 更新新的員工人數
		this->m_EmpNum = newSize;

		// 更新員公布為空
		this->m_FileIsEmpty = false;

		// 保存數據到文件中
		this->save();

		// 提示添加成功
		cout << "成功添加" << addNum << "名新員工!" << endl;



	}
	else
	{
		cout << "輸入數據有誤" << endl;
	}

	// 案任意見後 清屏回到上級目錄
	system("pause");
	system("cls");
}

// 保存文件
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME,ios::out); // 用輸出的方式打開文件  --  寫文件

	// 將每個人數據寫入到文件中
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_ID << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DepID << endl;
	}

	// 關閉文件
	ofs.close();

}


// 統計文件中人數
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in); // 打開文件  讀

	int id;
	string name;
	int dId;

	int num = 0;

	while (ifs>>id && ifs>>name && ifs>>dId)
	{
		// 統計人數變數
		num++;
	}

	return num;
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}
