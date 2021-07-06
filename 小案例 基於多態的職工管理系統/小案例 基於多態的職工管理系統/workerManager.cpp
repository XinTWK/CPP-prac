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
		//cout << "此為空文件! " << endl;
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
	//cout << "員工人數為:  " << num << endl;
	this->m_EmpNum = num;

	// 開闢空間
	this->m_EmpArray = new Worker *[this->m_EmpNum];
	// 將文件中的數據, 存到陣列中
	init_Emp();

	//// 測試程式碼
	//for (int i = 0; i < m_EmpNum;i++)
	//{
	//	cout << "員工編號:  " << this->m_EmpArray[i]->m_ID
	//		<< " 姓名:  " << this->m_EmpArray[i]->m_Name
	//		<< " 部門編號:  " << this->m_EmpArray[i]->m_DepID << endl;
	//}
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
	ofs.open(FILENAME, ios::out); // 用輸出的方式打開文件  --  寫文件

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

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		// 統計人數變數
		num++;
	}

	return num;
}

// 初始化員工
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker * worker = NULL;

		if (dId == 1) // 普通員工
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2) // 經理
		{
			worker = new Manager(id, name, dId);
		}
		else if (dId == 3) // 老闆
		{
			worker = new Boss(id, name, dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}

	// 關閉文件
	ifs.close();
}

// 顯示員工
void WorkerManager::Show_Emp()
{
	// 判斷文件是否為空
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或紀錄為空!" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			// 利用多態調用程式接口
			this->m_EmpArray[i]->showInfo();
		}
	}
	// 按任意鍵後清屏
	system("pause");
	system("cls");
}

// 刪除員工
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或紀錄為空!" << endl;
	}
	else
	{
		// 按照員工編號刪除
		cout << "請輸入想要刪除員工編號: " << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);
		if (index != -1) // 說明員工存在, 並且要刪除index位置上的員工
		{
			// 數據前移
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--; // 更新陣列中記錄人員的個數
			// 數據同步更新到文件中
			this->save();

			cout << "刪除成功" << endl;
		}
		else
		{
			cout << "刪除失敗, 未找到該員工" << endl;
		}
	}

	// 按任意鍵 清屏
	system("pause");
	system("cls");
}

// 判斷員工是否存在  如果存在返回員公所在陣列中的位置, 不存在返回-1
int WorkerManager::IsExist(int id)
{
	int index = -1;

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_ID == id)
		{
			// 找到員工
			index = i;

			break;
		}
	}
	return index;
}

// 修改員工
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或紀錄為空!" << endl;
	}
	else
	{
		cout << "請輸入修改職工的編號: " << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			// 查找到編號的員工

			delete this->m_EmpArray[ret];

			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "查到:  " << id << "號員工, 請輸入新員工號: " << endl;
			cin >> newId;

			cout << "請輸入新姓名:  " << endl;
			cin >> newName;

			cout << "請輸入新崗位:  " << endl;
			cout << "1. 普通員工" << endl;
			cout << "2. 經理" << endl;
			cout << "3. 老闆" << endl;

			cin >> dSelect;

			Worker * worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newName, dSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelect);
				break;
			default:
				break;
			}

			// 更新數據 到陣列中
			this->m_EmpArray[ret] = worker;

			cout << "修改成功!" << endl;

			// 保存到文件中
			this->save();
		}
		else
		{
			cout << "修改失敗, 查無此人!" << endl;
		}
	}
	// 按任意鍵 清屏
	system("pause");
	system("cls");
}

// 查找員工
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或紀錄為空!" << endl;
	}
	else
	{
		cout << "請輸入查找的方式: " << endl;
		cout << "1. 按照員工編號查找 " << endl;
		cout << "2. 按照員工姓名查找" << endl;

		int select = 0;
		cin >> select;
		if (select == 1)
		{
			// 按照編號查
			int id;
			cout << "請輸入查找的員工編號:  " << endl;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1)
			{
				// 有找到員工
				cout << "查找成功!  該員工訊息如下:  " << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "查找失敗, 查無此人" << endl;
			}
		}
		else if (select == 2)
		{
			// 按照姓名查
			string name;
			cout << "請輸入查找的姓名:  " << endl;
			cin >> name;

			// 加入判斷是否查到的標誌
			bool flag = false; // 默認未找到員工

			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功, 員工編號為:  "
						<< this->m_EmpArray[i]->m_ID
						<< "號員工訊息如下:  " << endl;

					flag = true;

					// 調用顯示訊息接口
					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				cout << "查找失敗, 查無此人!" << endl;
			}
		}
		else
		{
			cout << "輸入選項有誤! " << endl;
		}
	}
	// 按任意鍵 清屏
	system("pause");
	system("cls");
}

// 按照編號排序
void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或紀錄為空!" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "請選擇排序方式" << endl;
		cout << "1. 按員工編號進行升序" << endl;
		cout << "2. 按員工編號進行降序" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i; // 聲明最小值  或  最大值的下標
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1) // 升序
				{
					if (this->m_EmpArray[minOrMax]->m_ID > this->m_EmpArray[j]->m_ID)
					{
						minOrMax = j;
					}
					else // 降序
					{
						if (this->m_EmpArray[minOrMax]->m_ID < this->m_EmpArray[j]->m_ID)
						{
							minOrMax = j;
						}
					}
				}

				// 判斷一開始認定 最小值或最大值 是不是 計算的最小值或最大值, 如果不是  交換數據
				if (i != minOrMax)
				{
					Worker * temp = this->m_EmpArray[i];
					this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
					this->m_EmpArray[minOrMax] = temp;
				}
			}
		}
		cout << "排序成功! 排序後的結果為:  " << endl;
		this->save(); // 排序後的結果保存到文件中
		this->Show_Emp(); // 展示所有員工
	}
}

// 清空文件
void WorkerManager::Clean_File()
{
	cout << "確定清空?" << endl;
	cout << "1. 確定" << endl;
	cout << "2. 返回" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		// 清空文件
		ofstream ofs(FILENAME, ios::trunc); // 刪除文件後重新創建
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			// 刪除堆區的每個員工對象
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				m_EmpArray[i] = NULL;
			}

			// 刪除堆區陣列指針
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}

		cout << "清空成功! " << endl;
	}

	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}
