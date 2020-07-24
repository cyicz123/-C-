#include<iostream>
#include<string>

using namespace std;

class Triangle
{
protected:
	float a1, a2, a3;
public:
	Triangle(const float& a=0, const float& b=0, const float& c=0) :a1(a), a2(b), a3(c) {}
	Triangle operator+(const Triangle& t);
	friend ostream& operator<<(ostream& os, const Triangle& t);
	friend istream& operator>>(istream& is,  Triangle& t);
};

ostream& operator<<(ostream& os, const Triangle& t)
{
	os << '(' << t.a1 << ',' << t.a2 << ',' << t.a3 << ')';
	return os;
}

istream& operator>>(istream& is,  Triangle& t)
{
	string s;
	is >> s;
	int first_pos = s.find_first_of(',');
	int last_pos = s.find_last_of(',');
	string a_str, b_str, c_str;
	a_str = s.substr(1, first_pos-1);
	b_str = s.substr(first_pos+1, last_pos-first_pos-1);
	c_str = s.substr(last_pos + 1, s.length() -last_pos- 2);
	t.a1 = atof(a_str.c_str());
	t.a2 = atof(b_str.c_str());
	t.a3 = atof(c_str.c_str());
	return is;
}

Triangle Triangle::operator+(const Triangle& t)
{
	return Triangle(a1 + t.a1, a2 + t.a2, a3 + t.a3);
}