#include<iostream>
using namespace std;
//空指针调用成员函数
//class person
//{
//public:
//	void showinf()
//	{
//		cout << "showinf函数的调用" << endl;
//	}
//	void showpersonage()
//	{
//		if (this == NULL)
//		{
//			return;//加上后就不崩了
//		}
//		cout << "age=" <<m_age << endl;
//		cout << "showpersonage函数的调用" << endl;
//	}
//	int m_age;
//};
//
//void test()
//{
//	person *p = NULL;
//	p->showinf();
//	p->showpersonage();//崩了 
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//const修饰的成员函数
/*
函数后面加const就变成了常函数
常函数内不可修改成员属性
声明成员函数时加上mutable后  在常函数中也可以修改
在声明常对象时加上const即变为常对象如：const person p; 这个p就是常对象
常对象只能调用常函数（因为如果可以调用成员函数的话则可以通过其修改成员属性，与其逻辑相逆）
*/
//class person
//{
//public:
//	void func()const//此函数为常函数
//	{
//		//m_age = 10;//报错  不可修改
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
//	//p.func2();//报错，不能调用，因为常对象只能调用常函数
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
//		m_age = 10;//不报错  因为m_age前加了mutable  可以修改
//	}
//	void func2()
//	{
//		m_age = 10;
//	}
//	mutable int m_age;//加了一个mutable
//};
//void test()
//{
//	const person p;
//	//p.func2();//报错，不能调用，因为常对象只能调用常函数
//	p.func();
//	p.m_age = 10;//这样是可以修改成员属性的
//}
//int main()
//{
//	test();
//	return 0;
//}
//全局函数做友元（friend关键字）
//#include<string>
//class building
//{
//	friend void test();//加上此话即可访问private中元素
//public:
//	building()
//	{
//		sittingroom = "客厅";
//		bedroom = "卧室";
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
//	cout << "正在访问：" << p.sittingroom << endl;
//	cout << "正在访问：" << p.bedroom<< endl;//一般情况下私有权限不可访问  但加上友元提示后可以访问
//	p.bedroom = "woshi";
//	cout << "正在访问：" << p.bedroom << endl;//也可以修改
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//类做友元
//#include<string>
//
//
//class Building
//{
//public:
//	friend class Goodgay;//类做友元
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
//	Building* p;//因为有这个声明,所以class Building要放在class Goodgay之前  否则会有问题
//};
////类外构建构造函数
//Building::Building()
//{
//	sittingroom = "客厅";
//	bedroom = "卧室";
//}
//Goodgay::Goodgay()
//{
//	p = new Building;
//}
//void Goodgay::visit()//注意写法
//{
//	cout << "正在访问：" << p->sittingroom << endl;
//	cout << "正在访问：" << p->bedroom << endl;
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
//成员函数做友元
//#include<string>
//
//
//class Building;//这个要声明一下
//class Goodgay
//{
//public:
//	Goodgay();
//	void visit();
//	void visit1();
//
//	Building* p;//因为有这个声明,所以class Building要放在class Goodgay之前  否则会有问题
//};
//class Building
//{
//public:
//	friend void Goodgay::visit();//成员函数做友元
//	Building();
//	string sittingroom;
//private:
//	string bedroom;
//};
////类外构建构造函数
//Building::Building()
//{
//	sittingroom = "客厅";
//	bedroom = "卧室";
//}
//Goodgay::Goodgay()
//{
//	p = new Building;
//}
//void Goodgay::visit()//注意写法
//{
//	cout << "visit正在访问：" << p->sittingroom << endl;
//	cout << "visit正在访问：" << p->bedroom << endl;//将visit作为友元后可以访问private中内容
//
//}
//void Goodgay::visit1()
//{
//	cout << "visit1正在访问：" << p->sittingroom << endl;
//	//cout << "visit1正在访问：" << p->bedroom << endl;
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
//运算符重载，加号运算符重载
//——————————————————————————————————————————————————————
//class person
//{
//
//public:
//	person(int a, int b)
//	{
//		m_a = a;//因为我们定义了构造函数，所以没有默认构造函数，如果要，可以用函数重载自己构建
//		m_b = b;
//	}
//	person()
//	{
//		//空实现
//	}
	//通过成员函数进行加号运算符重载
//	person operator+(person &p)
//	{
//		person temp;//如果不想使用默认构造函数，可以改为temp(0,0);
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

//使用全局函数进行加号运算符重载
//person operator+(person &p)
//{
//	person temp;//如果不想使用默认构造函数，可以改为temp(0,0);
//	temp.m_a = this->m_a + p.m_a;//错误，this指针只能用于成员函数内部
//	temp.m_b = this->m_b + p.m_b;
//	return temp;
//}
//person operator+(person &p, person &p1)
//{
//	person temp;//如果不想使用默认构造函数，可以改为temp(0,0);
//	temp.m_a = p1.m_a + p.m_a;
//	temp.m_b = p1.m_b + p.m_b;
//	return temp;
//}

//void test()
//{
//	person p1(20, 10);
//	person p2(10, 10);
	//person p3 = p1 + p2;//写法一
	//本质写法
	//person p3 = p1.operator+(p2);//要使用这个，需要在内类进行加号运算符重载  this指的就是p1
	//写一个函数可以使用p1+10这种类型的
	//person p3 = p1 + 10;//最后输出30，20  写法一
	//本质写法
	//person p3 = p1.operator+(10);
	/*cout << "p3.m_a = " << p3.m_a << endl;
	cout << "p3.m_b = " << p3.m_b << endl;

}
int main()
{
	test();
	return 0;
}*///内容有点多，比较杂乱，每个功能对应不同的函数
//————————————————————————————————————————————
//运算符重载——左移运算符重载
//作用：自定义输出类型
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
//	//利用左移运算符重载做到cout后置
//	person p;
//	p.m_a = 10;
//	p << cout;//成功了，这里只能是P而不能是p.m_a 因为我们在成员函数中已经写过了
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
//public://也可以用private 再将ostream& operator<<(ostream& cout, person& p)设置为友元
//
//	int m_a;
//	int m_b;
//};
//ostream& operator<<(ostream& cout, person& p)//试一下不用<<用<   用了<时<endl;会与有问题 这里的ostream&可以保证cout只有一个 很重要
//{
//	cout << " a = " << p.m_a << " b = " << p.m_b ;//endl可以放在这里，但下面的test中就不能加endl了
//	return cout;
//}
//void test()
//{
//	person p;
//	p.m_a = 10;
//	p.m_b = 10;
//	//利用左移运算符重载做到cout前置，就像平时用的一样
//	cout << p << endl;//错了 因为这里返回的为void,不能接链式程序  只有返回值为ostream& 将cout再次返回才能接链式编程
//}
//
//int main()
//{
//	test();
//	return 0;
//}


