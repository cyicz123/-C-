#include<iostream>
using namespace std;
class B0
{
public:
	void display()
	{
		cout << "\n这是B0\n" << endl;
	}
};
class B1:virtual public B0
{
public:
	B1();
	~B1();
	void show()
	{
		cout << "\n这是B1\n" << endl;
	}
private:

};

B1::B1()
{
	cout << "这是B1的构造函数" << endl;
}

B1::~B1()
{
	cout << "这是B1的析构函数" << endl;
}

class B2 :virtual public B0
{
public:
	B2();
	~B2();
	void show()
	{
		cout << "\n这是B2\n" << endl;
	}
private:

};

B2::B2()
{
	cout << "这是B2的构造函数" << endl;
}

B2::~B2()
{
	cout << "这是B2的析构函数" << endl;
}

class D:public B1,public B2
{
public:
	D();
	~D();
	/*void show()
	{
		cout << "\n这是D,继承于B1和B2\n" << endl;
	}*/
private:

};

D::D()
{
	cout << "这是B1和B2的派生类D的构造函数" << endl;
}

D::~D()
{
	cout << "这是B1和B2的派生类D的析构函数" << endl;
}