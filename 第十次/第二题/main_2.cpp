#include"p10_2.h"
int main()
{
	ConstTest c("常量成员是通过构造函数列表初始化。");

	InheritConstTest i("这是派生类的构造函数");
	cout << endl;
	cout << "从定义类开始到类定义体结束，这一整块是类作用域范围。如果派生类中和基类有同名成员变量或成员函数，可以用类的作用域来告诉编译器调用哪个成员，如果缺省则是默认调用派生类的成员。" << endl;
	cout << "如下展示：" << endl << endl;
	i.show("i.show()调用派生类成员函数。");
	i.ConstTest::show("i.ConstTest::show调用基类同名成员函数。");
	return 0;
}