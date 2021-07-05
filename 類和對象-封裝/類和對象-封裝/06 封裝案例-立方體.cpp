#include<iostream>
using namespace std;

// �ߤ������]�p
// 1. �Ыإߤ�����
// 2. �]�p�ݩʩM�欰
// 3. �]�p�欰 ����ߤ��魱�n�M��n
// 4. ���O�Q�Υ�����ƩM������� �P�_��ӥߤ���O�_�۵�

class Cube {
public:

	// �]�m��
	void setL(int l)
	{
		m_L = l;
	}

	// �����
	int getL()
	{
		return m_L;
	}

	// �]�m�e
	void setW(int w)
	{
		m_W = w;
	}

	// ����e
	int getW()
	{
		return m_W;
	}

	// �]�m��
	void setH(int h)
	{
		m_H = h;
	}

	// �����
	int getH()
	{
		return m_H;
	}

	// ����ߤ��魱�n
	int calculateS()
	{
		return 2 * m_L*m_W + 2 * m_W*m_H + 2 * m_L*m_H;

	}

	// ����ߤ�����n
	int calculateV()
	{
		return m_L * m_W * m_H;
	}

	// �Q�Φ�����ƧP�_��ӥߤ���O�_�۵�
	bool isSameByClass(Cube &c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		return false;
	}

private:

	int m_L; // ��
	int m_W; // �e
	int m_H; // ��

};

// �Q�Υ�����ƧP�_ ��ӥߤ���O�_�۵�
bool isSame(Cube &c1, Cube &c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) 
	{
		return true;
	}
	return false;
}


int main() {

	// �Ыإߤ����H
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	// 600
	cout << "c1�����n��:  " << c1.calculateS() << endl;
	// 1000
	cout << "c1����n��:  " << c1.calculateV() << endl;

	// �ЫزĤG�ӥߤ���
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(11);

	// �Q�Υ�����ƧP�_
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1�Mc2�O�۵���" << endl;
	}
	else
	{
		cout << "c1�Mc2���O�۵���" << endl;
	}
	
	// �Q�Φ�����ƧP�_
	ret = c1.isSameByClass(c2);
	if (ret)
	{
		cout << "������ƧP�_:  c1�Mc2�O�۵���" << endl;
	}
	else
	{
		cout << "������ƧP�_:  c1�Mc2���O�۵���" << endl;
	}

	system("pause");

	return 0;
}