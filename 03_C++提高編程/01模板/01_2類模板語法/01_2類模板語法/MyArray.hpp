// �ۤv���q�Ϊ��}�C��
#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
public:

	// ���Ѻc�y  �Ѽ�  �e�q
	MyArray(int capacity)
	{
		//cout << "MyArray���Ѻc�y�ե�" << endl;

		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	// �����c�y
	MyArray(const MyArray& arr)
	{
		//cout << "MyArray�����c�y�ե�" << endl;

		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;

		// �`����
		this->pAddress = new T[arr.m_Capacity];

		// �Narray�����ƾڳ������L��
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= ����L�������D  a = b = c
	MyArray& operator= (const MyArray& arr)
	{
		//cout << "MyArray ��operator= �ե�" << endl;


		// ���P�_��Ӱ�ϬO�_���ƾ�, �p�G�� ������
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		// �`����
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	// �����k
	void Push_Back(const T & val)
	{
		// �P�_�e�q�O�_����j�p
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val; // �b�}�C���ݴ��J�ƾ�
		this->m_Size++; // ��s�}�C�j�p
	}

	// ���R�k
	void Pop_Back()
	{
		// ���Τ�X�ݤ���̫�@�Ӥ���, �Y�����R, �޿�R��
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	// �q�L�U�Ф覡�X�ݼƲդ�������  arr[0] = 100
	T& operator[] (int index)
	{
		return this->pAddress[index];
	}

	// ��^�}�C�e�q
	int getCapacity()
	{
		return this->m_Capacity;
	}

	// ��^�}�C�j�p
	int getSize()
	{
		return this->m_Size;
	}


	// �R�c���
	~MyArray()
	{
		//cout << "MyArray�R�c��ƽե�" << endl;

		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}

	}


private:
	T * pAddress; // ���Ы��V��϶}�P���u��}�C

	int m_Capacity; // �}�C�e�q

	int m_Size; // �}�C�j�p

};