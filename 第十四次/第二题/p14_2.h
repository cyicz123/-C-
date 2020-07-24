#include<iostream>
#include<string>

using namespace std;

class Triangle
{
protected:
	float a1, a2, a3;
public:
	Triangle(const float& a, const float& b, const float& c):a1(a),a2(b),a3(c){}
	Triangle operator+(const Triangle t);
	friend ostream& operator<<(ostream& os, const Triangle t);
};

ostream& operator<<(ostream& os, const Triangle t)
{
	os << '(' << t.a1 << ',' << t.a2 << ',' << t.a3 << ')';
	return os;
}

Triangle Triangle::operator+(const Triangle t)
{
	return Triangle(a1 + t.a1, a2 + t.a2, a3 + t.a3);
}