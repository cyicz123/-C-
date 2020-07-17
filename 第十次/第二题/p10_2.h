#include<iostream>
using namespace std;

class ConstTest
{
	const string _s;
public:
	ConstTest(const string& s) :_s(s) { cout << endl << _s << endl; }
	void show(string i) { cout << i << endl; }
};

class InheritConstTest :public ConstTest
{
public:
	InheritConstTest(const string &_is):ConstTest(_is){}
	void show(string i) { cout << i << endl; }
};