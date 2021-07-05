#include <iostream>
#include <string>
#define Max 1000 //最大人數
using namespace std;

//設計聯絡人結構體
struct Person
{
	//姓名
	string m_Name;
	//性別	1.男 2.女
	int m_sex;
	//年齡
	int m_age;
	//電話
	string m_Phone;
	//住址
	string m_Addr;
};


//設計通訊錄結構體
struct AddressBooks
{
	//通訊錄中保存的聯絡人陣列
	struct Person personArray[Max];
	
	//通訊錄中當前紀錄聯絡人個數
	int m_Size;
};

//1.添加聯絡人
void addPerson(AddressBooks *abs)
{
	//判斷通訊錄是否滿了,如果滿了就不在增加
	if (abs->m_Size == Max)
	{
		cout << "通訊錄滿了,無法添加! " << endl;
		return;
	}
	else
	{
		//添加具體聯絡人

		//姓名
		string name;
		cout << "請輸入姓名:  " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		
		//性別
		cout << "請輸入性別:  " << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;
		
		while (true)
		{
			//如果輸入的是1 或者 2 可以退出循環
			//如果輸入有誤,重新輸入
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_sex = sex;
				break;

			}
			cout << "輸入有誤,請重新輸入" << endl;
		}
		
		//年齡
		cout << "請輸入年齡:  " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_age = age;

		//電話
		cout << "請輸入電話號碼:  " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//地址
		cout << "請輸入居住地址:  " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通訊錄人數
		abs->m_Size++;

		cout << "添加成功" << endl;

		system("pause"); //請按任意鍵繼續
		system("cls"); //清除黑窗資訊
	}
}

//2.顯示所有聯絡人
void showPerson(AddressBooks *abs)
{
	//判斷通訊錄中人數是否為0,如果為0,題是紀錄為空
	//如果不為0,顯示紀錄的聯絡人訊息
	if (abs->m_Size == 0)
	{
		cout << "當前紀錄為空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名:  " << abs->personArray[i].m_Name << "\t";
			cout << "性別:  " << (abs->personArray[i].m_sex == 1 ? "男":"女") << "\t";
			cout << "年齡   " << abs->personArray[i].m_age << "\t";
			cout << "電話:  " << abs->personArray[i].m_Phone << "\t";
			cout << "住址:  " << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");

}


//檢測聯絡人是否存在, 如果存在, 返回聯絡人所在陣列中的具體位子, 不存在返回-1
//參數1 通訊錄   參數2 對比姓名
int isExist(AddressBooks *abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;	 //找到了 , 返回這個人在陣列中的下標編號
		}
	}
	return -1; // 如果搜尋完都沒有找到,返回-1
}

//3.刪除指定聯絡人
void deletePerson(AddressBooks *abs)
{
	cout << "請輸入您要刪除的聯絡人" << endl;

	string name;
	cin >> name;


	// ret == -1 未查到
	// ret != -1 查到了
	int ret = 	isExist(abs, name);

	if (ret != -1)
	{
		//找到人, 要進行刪除操作
		for (int i = ret; i < abs->m_Size; i++)
		{
			//數據前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--; //更新通訊錄中的人員數
		cout << "刪除成功" << endl;
	}
	else
	{
		cout << "查無此人" << endl;
	}

	system("pause");
	system("cls");
}

//4.尋找指定聯絡人訊息

void findPerson(AddressBooks *abs)
{
	cout << "請輸入您要尋找的聯絡人" << endl;
	string name;
	cin >> name;

	//判斷指定的聯絡人是否在通訊錄中
	int ret = isExist(abs, name);

	if (ret != -1) //找到聯絡人
	{
		cout << "姓名:  " << abs->personArray[ret].m_Name << "\t";
		cout << "性別:  " << (abs->personArray[ret].m_sex == 1 ? "男":"女" )<< "\t";
		cout << "年齡:  " << abs->personArray[ret].m_age << "\t";
		cout << "號碼:  " << abs->personArray[ret].m_Phone << "\t";
		cout << "地址:  " << abs->personArray[ret].m_Addr<< endl;
	}
	else			//未找到聯絡人
	{
		cout << "查無此人" << endl;
	}
	system("pause");
	system("cls");
}

//修改指定聯絡人訊息
void modifyPerson(AddressBooks *abs)
{
	cout << "請輸入您想要修改的聯絡人" << endl;
	string name;
	cin >> name;

	int ret =  isExist(abs, name);

	if (ret != -1)
	{
		int flag = 1;
		while (flag)
		{
			cout << "************************" << endl;
			cout << "*****  1.修改姓名  *****" << endl;
			cout << "*****  2.修改性別  *****" << endl;
			cout << "*****  3.修改年齡  *****" << endl;
			cout << "*****  4.修改電話  *****" << endl;
			cout << "*****  5.修改住址  *****" << endl;
			cout << "*****  0.退出      *****" << endl;
			cout << "************************" << endl;
			int ans = 0;
			cin >> ans;
			switch (ans)
			{
			case 1:
				//姓名
			{string name;
			cout << "請輸入姓名:  " << endl;
			cin >> name;
			abs->personArray[ret].m_Name = name;
			}
			break;
			case 2:
			{//性別
				cout << "請輸入性別: " << endl;
				cout << "1 --- 男" << endl;
				cout << "2 --- 女" << endl;
				int sex = 0;

				while (true)
				{
					cin >> sex;
					if (sex == 1 || sex == 2)
					{
						abs->personArray[ret].m_sex = sex;
						break;
					}
					cout << "輸入有誤,請重新輸入" << endl;
				}
			}
			break;
			case 3:
				//年齡
			{cout << "請輸入年齡:  " << endl;
			int age = 0;
			cin >> age;
			abs->personArray[ret].m_age = age;
			}
			break;
			case 4:

			{//電話
				cout << "請輸入電話號碼:  " << endl;
				string Phone;
				cin >> Phone;
				abs->personArray[ret].m_Phone = Phone;
			}
			break;
			case 5:
			{//住址
				cout << "請輸入居住地址:  " << endl;
				string address;
				cin >> address;
				abs->personArray[ret].m_Addr = address;
			}
			break;
			case 0:
			{
				cout << "所有項目修改成功" << endl;
				flag = 0;
				break;
			}
			default:
				break;
			}
		}
	}
	else
	{
		cout << "查無此人" << endl;
	}
	system("pause");
	system("cls");
}

//清除所由聯絡人
void cleanPerson(AddressBooks *abs)
{
	cout << "是否要清空所有聯絡人資訊? " << endl;
	cout << "1 --- 是" << endl;
	cout << "2 --- 否" << endl;
	int ans = 0;
	cin >> ans;
	if (ans == 1)
	{
		abs->m_Size = 0; //將當前紀錄聯絡人數量更改為0, 做邏輯清空操作
		cout << "通訊錄已經清空" << endl;
	}
	else
	{
		cout << "不清空聯絡人" << endl;
	}

	system("pause");
	system("cls");
}


//選單介面
void showMenu()
{
	cout << "**************************" << endl;
	cout << "*****  1.添加聯絡人  *****" << endl;
	cout << "*****  2.顯示聯絡人  *****" << endl;
	cout << "*****  3.刪除聯絡人  *****" << endl;
	cout << "*****  4.查詢聯絡人  *****" << endl;
	cout << "*****  5.修改聯絡人  *****" << endl;
	cout << "*****  6.清空聯絡人  *****" << endl;
	cout << "*****  0.退出通訊錄  *****" << endl;
	cout << "**************************" << endl;
}

int main()
{
	//創建通訊錄結構體變數
	AddressBooks abs; 
	//初始化通訊錄中當前人員個數
	abs.m_Size = 0;

	int select = 0; // 創建用戶選擇輸入的變數

	while (true)
	{
		//選單調用
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:		//1.添加聯絡人
			addPerson(&abs); //利用地址傳遞,可以修飾實參
			
			break;
		case 2:		//2.顯示聯絡人
			showPerson(&abs);
			break;
		case 3:		//3.刪除聯絡人
		//測試用
		//{
		//	cout << "請輸入欲刪除的聯絡人姓名:  " << endl;
		//	string name;
		//	cin >> name;

		//	if (isExist(&abs, name) == -1)
		//	{
		//		cout << "查無此人" << endl;
		//	}
		//	else
		//	{
		//		cout << "找到此人" << endl;
		//	}
		//}
			deletePerson(&abs);
			break;
		case 4:		//4.查詢聯絡人
			findPerson(&abs);
			break;
		case 5:		//5.修改聯絡人
			modifyPerson(&abs);
			break;
		case 6:		//6.清空聯絡人 
			cleanPerson(&abs);
			break;
		case 0:		//0.退出通訊錄
			cout << "歡迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}