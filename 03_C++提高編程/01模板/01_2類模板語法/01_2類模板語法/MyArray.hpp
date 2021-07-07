// 自己的通用的陣列類
#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
public:

	// 有參構造  參數  容量
	MyArray(int capacity)
	{
		//cout << "MyArray有參構造調用" << endl;

		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	// 拷貝構造
	MyArray(const MyArray& arr)
	{
		//cout << "MyArray拷貝構造調用" << endl;

		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;

		// 深拷貝
		this->pAddress = new T[arr.m_Capacity];

		// 將array中的數據都拷貝過來
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= 防止淺拷貝問題  a = b = c
	MyArray& operator= (const MyArray& arr)
	{
		//cout << "MyArray 的operator= 調用" << endl;


		// 先判斷原來堆區是否有數據, 如果有 先釋放
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		// 深拷貝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	// 尾插法
	void Push_Back(const T & val)
	{
		// 判斷容量是否等於大小
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val; // 在陣列尾端插入數據
		this->m_Size++; // 更新陣列大小
	}

	// 尾刪法
	void Pop_Back()
	{
		// 讓用戶訪問不到最後一個元素, 即為尾刪, 邏輯刪除
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	// 通過下標方式訪問數組中的元素  arr[0] = 100
	T& operator[] (int index)
	{
		return this->pAddress[index];
	}

	// 返回陣列容量
	int getCapacity()
	{
		return this->m_Capacity;
	}

	// 返回陣列大小
	int getSize()
	{
		return this->m_Size;
	}


	// 析構函數
	~MyArray()
	{
		//cout << "MyArray析構函數調用" << endl;

		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}

	}


private:
	T * pAddress; // 指標指向堆區開闢的真實陣列

	int m_Capacity; // 陣列容量

	int m_Size; // 陣列大小

};