#include<iostream>
using namespace std;
//��ָ����ó�Ա����
//class person
//{
//public:
//	void showinf()
//	{
//		cout << "showinf�����ĵ���" << endl;
//	}
//	void showpersonage()
//	{
//		if (this == NULL)
//		{
//			return;//���Ϻ�Ͳ�����
//		}
//		cout << "age=" <<m_age << endl;
//		cout << "showpersonage�����ĵ���" << endl;
//	}
//	int m_age;
//};
//
//void test()
//{
//	person *p = NULL;
//	p->showinf();
//	p->showpersonage();//���� 
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//const���εĳ�Ա����
/*
���������const�ͱ���˳�����
�������ڲ����޸ĳ�Ա����
������Ա����ʱ����mutable��  �ڳ�������Ҳ�����޸�
������������ʱ����const����Ϊ�������磺const person p; ���p���ǳ�����
������ֻ�ܵ��ó���������Ϊ������Ե��ó�Ա�����Ļ������ͨ�����޸ĳ�Ա���ԣ������߼����棩
*/
//class person
//{
//public:
//	void func()const//�˺���Ϊ������
//	{
//		//m_age = 10;//����  �����޸�
//	}
//	void func2()
//	{
//		m_age = 10;
//	}
//	int m_age;
//};
//void test()
//{
//	const person p;
//	//p.func2();//�������ܵ��ã���Ϊ������ֻ�ܵ��ó�����
//	p.func;
//}
//int main()
//{
//	test();
//	return 0;
//}

//class person
//{
//public:
//	void func()const
//	{
//		m_age = 10;//������  ��Ϊm_ageǰ����mutable  �����޸�
//	}
//	void func2()
//	{
//		m_age = 10;
//	}
//	mutable int m_age;//����һ��mutable
//};
//void test()
//{
//	const person p;
//	//p.func2();//�������ܵ��ã���Ϊ������ֻ�ܵ��ó�����
//	p.func();
//	p.m_age = 10;//�����ǿ����޸ĳ�Ա���Ե�
//}
//int main()
//{
//	test();
//	return 0;
//}
//ȫ�ֺ�������Ԫ��friend�ؼ��֣�
//#include<string>
//class building
//{
//	friend void test();//���ϴ˻����ɷ���private��Ԫ��
//public:
//	building()
//	{
//		sittingroom = "����";
//		bedroom = "����";
//	}
//
//	string sittingroom;
//private:
//	string bedroom;
//
//};
//void test()
//{
//	building p;
//	cout << "���ڷ��ʣ�" << p.sittingroom << endl;
//	cout << "���ڷ��ʣ�" << p.bedroom<< endl;//һ�������˽��Ȩ�޲��ɷ���  ��������Ԫ��ʾ����Է���
//	p.bedroom = "woshi";
//	cout << "���ڷ��ʣ�" << p.bedroom << endl;//Ҳ�����޸�
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//������Ԫ
//#include<string>
//
//
//class Building
//{
//public:
//	friend class Goodgay;//������Ԫ
//	Building();
//	string sittingroom;
//private:
//	string bedroom;
//};
//class Goodgay
//{
//public:
//	Goodgay();
//	void visit();
//	Building* p;//��Ϊ���������,����class BuildingҪ����class Goodgay֮ǰ  �����������
//};
////���⹹�����캯��
//Building::Building()
//{
//	sittingroom = "����";
//	bedroom = "����";
//}
//Goodgay::Goodgay()
//{
//	p = new Building;
//}
//void Goodgay::visit()//ע��д��
//{
//	cout << "���ڷ��ʣ�" << p->sittingroom << endl;
//	cout << "���ڷ��ʣ�" << p->bedroom << endl;
//
//}
//
//void test()
//{
//	Goodgay gg;
//	gg.visit();
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//��Ա��������Ԫ
//#include<string>
//
//
//class Building;//���Ҫ����һ��
//class Goodgay
//{
//public:
//	Goodgay();
//	void visit();
//	void visit1();
//
//	Building* p;//��Ϊ���������,����class BuildingҪ����class Goodgay֮ǰ  �����������
//};
//class Building
//{
//public:
//	friend void Goodgay::visit();//��Ա��������Ԫ
//	Building();
//	string sittingroom;
//private:
//	string bedroom;
//};
////���⹹�����캯��
//Building::Building()
//{
//	sittingroom = "����";
//	bedroom = "����";
//}
//Goodgay::Goodgay()
//{
//	p = new Building;
//}
//void Goodgay::visit()//ע��д��
//{
//	cout << "visit���ڷ��ʣ�" << p->sittingroom << endl;
//	cout << "visit���ڷ��ʣ�" << p->bedroom << endl;//��visit��Ϊ��Ԫ����Է���private������
//
//}
//void Goodgay::visit1()
//{
//	cout << "visit1���ڷ��ʣ�" << p->sittingroom << endl;
//	//cout << "visit1���ڷ��ʣ�" << p->bedroom << endl;
//}
//
//void test()
//{
//	Goodgay gg;
//	gg.visit();
//	gg.visit1();
//
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//��������أ��Ӻ����������
//������������������������������������������������������������������������������������������������������������
//class person
//{
//
//public:
//	person(int a, int b)
//	{
//		m_a = a;//��Ϊ���Ƕ����˹��캯��������û��Ĭ�Ϲ��캯�������Ҫ�������ú��������Լ�����
//		m_b = b;
//	}
//	person()
//	{
//		//��ʵ��
//	}
	//ͨ����Ա�������мӺ����������
//	person operator+(person &p)
//	{
//		person temp;//�������ʹ��Ĭ�Ϲ��캯�������Ը�Ϊtemp(0,0);
//		temp.m_a = this->m_a + p.m_a;
//		temp.m_b = this->m_b + p.m_b;
//		return temp;
//	}
	/*person operator+( int x)
	{
		person temp;
		temp.m_a = x + this->m_a;
		temp.m_b = x + this->m_b;
		return temp;
	}
	int m_a;
	int m_b;
};*/

//ʹ��ȫ�ֺ������мӺ����������
//person operator+(person &p)
//{
//	person temp;//�������ʹ��Ĭ�Ϲ��캯�������Ը�Ϊtemp(0,0);
//	temp.m_a = this->m_a + p.m_a;//����thisָ��ֻ�����ڳ�Ա�����ڲ�
//	temp.m_b = this->m_b + p.m_b;
//	return temp;
//}
//person operator+(person &p, person &p1)
//{
//	person temp;//�������ʹ��Ĭ�Ϲ��캯�������Ը�Ϊtemp(0,0);
//	temp.m_a = p1.m_a + p.m_a;
//	temp.m_b = p1.m_b + p.m_b;
//	return temp;
//}

//void test()
//{
//	person p1(20, 10);
//	person p2(10, 10);
	//person p3 = p1 + p2;//д��һ
	//����д��
	//person p3 = p1.operator+(p2);//Ҫʹ���������Ҫ��������мӺ����������  thisָ�ľ���p1
	//дһ����������ʹ��p1+10�������͵�
	//person p3 = p1 + 10;//������30��20  д��һ
	//����д��
	//person p3 = p1.operator+(10);
	/*cout << "p3.m_a = " << p3.m_a << endl;
	cout << "p3.m_b = " << p3.m_b << endl;

}
int main()
{
	test();
	return 0;
}*///�����е�࣬�Ƚ����ң�ÿ�����ܶ�Ӧ��ͬ�ĺ���
//����������������������������������������������������������������������������������������
//��������ء����������������
//���ã��Զ����������
//class person
//{
//
//public:
//	void operator<<(ostream& cout)
//	{
//		cout << this->m_a;
//	}
//	int m_a;
//	int m_b;
//};
//
//void test()
//{
//	//���������������������cout����
//	person p;
//	p.m_a = 10;
//	p << cout;//�ɹ��ˣ�����ֻ����P��������p.m_a ��Ϊ�����ڳ�Ա�������Ѿ�д����
//
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//class person
//{
//
//public://Ҳ������private �ٽ�ostream& operator<<(ostream& cout, person& p)����Ϊ��Ԫ
//
//	int m_a;
//	int m_b;
//};
//ostream& operator<<(ostream& cout, person& p)//��һ�²���<<��<   ����<ʱ<endl;���������� �����ostream&���Ա�֤coutֻ��һ�� ����Ҫ
//{
//	cout << " a = " << p.m_a << " b = " << p.m_b ;//endl���Է�������������test�оͲ��ܼ�endl��
//	return cout;
//}
//void test()
//{
//	person p;
//	p.m_a = 10;
//	p.m_b = 10;
//	//���������������������coutǰ�ã�����ƽʱ�õ�һ��
//	cout << p << endl;//���� ��Ϊ���ﷵ�ص�Ϊvoid,���ܽ���ʽ����  ֻ�з���ֵΪostream& ��cout�ٴη��ز��ܽ���ʽ���
//}
//
//int main()
//{
//	test();
//	return 0;
//}


