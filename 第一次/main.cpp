#include"p1.h"
int main()
{
	int* a = new int[10];
	for (auto i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	cout <<"前" << 10 << "个中，"<< "a的最大值为：" << *findmax(a, 10) << endl;
	cout <<"前" << 5 <<"个中，"<< "a的最大值为：" << *findmax(a, 5) << endl;
	return 0;
}