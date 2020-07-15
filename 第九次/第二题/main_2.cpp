#include"p9_2.h"
int main()
{
	/*CopyTest_1 test1(5),test2=test1;
	cout << "test1的array地址是：" << &test1.array << "	,复制于test1的test2的array地址是：" << &test2.array << endl;
	cout << endl;*/

	CopyTest_2 test3(5), test4 = test3;
	cout << "test3的array地址是：" << &test3.array << "	,复制于test3的test4的array地址是：" << &test4.array << endl;
	
	cout << endl;
	printObject(test4);
	return 0;
}