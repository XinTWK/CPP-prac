//#include<iostream>
//#include<string>
//using namespace std;
//
//
//// 成員屬性設置為私有
//// 1. 可以自己控制讀寫權限
//// 2. 對於寫可以檢測數據的有效性
//
//// 設計人類
//class Person {
//
//public:
//	// 設置姓名
//	void setName(string name) {
//		m_Name = name;
//	}
//	// 獲取姓名
//	string gerName() {
//		return m_Name;
//	}
//
//	// 獲取年齡  可讀可寫 如果想修改(年齡的範圍必須是 0 ~ 150 之間)
//	int getAge() {
//		//m_Age = 0;  // 初始化為0歲
//		return m_Age;
//	}
//
//	// 設置年齡
//	void setAge(int age) {
//		if (age < 0 || age > 150)
//		{
//			m_Age = 0;
//			cout << "你這個老妖精! " << endl;
//			return;
//		}
//			m_Age = age;
//	}
//
//	// 設置情人 只寫
//	void setLover(string lover) {
//		m_Lover = lover;
//	}
//
//private:
//	// 姓名  可讀可寫
//	string m_Name;
//	// 年齡  只讀
//	int m_Age;
//	// 情人  只寫
//	string m_Lover;
//};
//
//int main() {
//
//	Person p;
//	p.setName("張三");
//
//	cout << "姓名為:  " << p.gerName() << endl;
//
//	//p.m_Age = 18;
//	//p.setAge(18);
//	p.setAge(18);
//	cout << "年齡為:  " << p.getAge() << endl;
//
//	// 設置情人為蒼井
//	p.setLover("蒼井");
//	//cout << "情人為:  " << p.gerLover() << endl;
//
//	system("pause");
//
//	return 0;
//}