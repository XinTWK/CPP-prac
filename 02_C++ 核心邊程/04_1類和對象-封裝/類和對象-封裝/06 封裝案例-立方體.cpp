#include<iostream>
using namespace std;

// 立方體類設計
// 1. 創建立方體類
// 2. 設計屬性和行為
// 3. 設計行為 獲取立方體面積和體積
// 4. 分別利用全局函數和成員函數 判斷兩個立方體是否相等

class Cube {
public:

	// 設置長
	void setL(int l)
	{
		m_L = l;
	}

	// 獲取長
	int getL()
	{
		return m_L;
	}

	// 設置寬
	void setW(int w)
	{
		m_W = w;
	}

	// 獲取寬
	int getW()
	{
		return m_W;
	}

	// 設置高
	void setH(int h)
	{
		m_H = h;
	}

	// 獲取高
	int getH()
	{
		return m_H;
	}

	// 獲取立方體面積
	int calculateS()
	{
		return 2 * m_L*m_W + 2 * m_W*m_H + 2 * m_L*m_H;

	}

	// 獲取立方體體積
	int calculateV()
	{
		return m_L * m_W * m_H;
	}

	// 利用成員函數判斷兩個立方體是否相等
	bool isSameByClass(Cube &c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		return false;
	}

private:

	int m_L; // 長
	int m_W; // 寬
	int m_H; // 高

};

// 利用全局函數判斷 兩個立方體是否相等
bool isSame(Cube &c1, Cube &c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) 
	{
		return true;
	}
	return false;
}


int main() {

	// 創建立方體對象
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	// 600
	cout << "c1的面積為:  " << c1.calculateS() << endl;
	// 1000
	cout << "c1的體積為:  " << c1.calculateV() << endl;

	// 創建第二個立方體
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(11);

	// 利用全局函數判斷
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1和c2是相等的" << endl;
	}
	else
	{
		cout << "c1和c2不是相等的" << endl;
	}
	
	// 利用成員函數判斷
	ret = c1.isSameByClass(c2);
	if (ret)
	{
		cout << "成員函數判斷:  c1和c2是相等的" << endl;
	}
	else
	{
		cout << "成員函數判斷:  c1和c2不是相等的" << endl;
	}

	system("pause");

	return 0;
}