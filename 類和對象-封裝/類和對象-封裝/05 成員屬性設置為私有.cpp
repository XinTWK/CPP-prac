//#include<iostream>
//#include<string>
//using namespace std;
//
//
//// �����ݩʳ]�m���p��
//// 1. �i�H�ۤv����Ū�g�v��
//// 2. ���g�i�H�˴��ƾڪ����ĩ�
//
//// �]�p�H��
//class Person {
//
//public:
//	// �]�m�m�W
//	void setName(string name) {
//		m_Name = name;
//	}
//	// ����m�W
//	string gerName() {
//		return m_Name;
//	}
//
//	// ����~��  �iŪ�i�g �p�G�Q�ק�(�~�֪��d�򥲶��O 0 ~ 150 ����)
//	int getAge() {
//		//m_Age = 0;  // ��l�Ƭ�0��
//		return m_Age;
//	}
//
//	// �]�m�~��
//	void setAge(int age) {
//		if (age < 0 || age > 150)
//		{
//			m_Age = 0;
//			cout << "�A�o�Ӧѧ���! " << endl;
//			return;
//		}
//			m_Age = age;
//	}
//
//	// �]�m���H �u�g
//	void setLover(string lover) {
//		m_Lover = lover;
//	}
//
//private:
//	// �m�W  �iŪ�i�g
//	string m_Name;
//	// �~��  �uŪ
//	int m_Age;
//	// ���H  �u�g
//	string m_Lover;
//};
//
//int main() {
//
//	Person p;
//	p.setName("�i�T");
//
//	cout << "�m�W��:  " << p.gerName() << endl;
//
//	//p.m_Age = 18;
//	//p.setAge(18);
//	p.setAge(18);
//	cout << "�~�֬�:  " << p.getAge() << endl;
//
//	// �]�m���H���a��
//	p.setLover("�a��");
//	//cout << "���H��:  " << p.gerLover() << endl;
//
//	system("pause");
//
//	return 0;
//}