#include <iostream>
using namespace std;
#include <string>

//�]�p�@�Ӿǥ���,�ݩʦ��m�W�M�Ǹ�
//�i�H���m�W�M�Ǹ����, �i�H��ܾǥͪ��m�W�M�Ǹ�

//�]�p�ǥ���
class Student
{
public: //���@�v��
	
	//�������ݩʩM�欰 �Τ@�٬�����
	//�ݩ�  �����ݩ�  �����ܼ�
	//�欰  �������  ������k

	//�ݩ�
	string m_name; //�m�W
	int m_id;	//�Ǹ�

	//�欰
	//�]�w�m�W
	void setName(string name)
	{
		m_name = name;
	}

	//�]�wID
	void setID(int id)
	{
		m_id = id;
	}

	//��ܩm�W�M�Ǹ�
	void ShowStudent()
	{
		cout << "name:  " << m_name << "  ID:  " << m_id << endl;
	}


};


int main()
{
	Student s1;
	//s1.m_name = "��T";
	s1.setName("��T");
	
	//s1.m_id = 19;
	s1.setID(19);
	
	s1.ShowStudent();


	system("pause");

	return 0;
}