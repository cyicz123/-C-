#include"p10_1.h"
int main()
{
	CopyTest_1 C(5);
	cout << "测试函数返回值的拷贝构造函数测试：" << endl;
	printObject(C);
	return 0;
}