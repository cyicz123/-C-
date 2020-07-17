#include<iostream>
using namespace std;
class CopyTest_1
{
public:
	int size;
	int* array;
	CopyTest_1(const int& _size) :size(_size) { array = new int[size]; }
	CopyTest_1(const CopyTest_1& C) :size(C.size) { array = new int[size]; cout << "拷贝构造函数工作。" << endl; }
	~CopyTest_1() { delete[]array; }
};

CopyTest_1 printObject(const CopyTest_1 &C)
{
	return C;
}
