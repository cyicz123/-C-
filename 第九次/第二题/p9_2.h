#include<iostream>
using namespace std;
class CopyTest_1
{
public:
	int size;
	int* array;
	CopyTest_1(const int& _size) :size(_size) { array = new int[size]; }
	~CopyTest_1() { delete[]array; }
};

class CopyTest_2
{
public:
	int size;
	int* array;
	CopyTest_2(const int& _size) :size(_size) { array = new int[size]; }
	CopyTest_2(const CopyTest_2& C) :size(C.size) { array = new int[size]; cout << "拷贝构造函数工作。" << endl; }
	~CopyTest_2() { delete[]array; }
};

void printObject(CopyTest_2 C)
{

}