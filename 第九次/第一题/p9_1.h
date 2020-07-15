#include<iostream>
using namespace std;

class A
{
public:
	A() { cout << endl << "A的构造函数。" << endl; }
	~A(){ cout << endl << "A的析构函数。" << endl; }
};


class B
{
public:
	A a;
	B() { cout << endl << "B的构造函数。" << endl; }
	~B() { cout << endl << "B的析构函数。" << endl; }
};
