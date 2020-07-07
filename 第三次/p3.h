#include<iostream>
using namespace std;
int getMax_Min(int a[], int n, int&mi)
{
	int max = a[0];
	mi = a[0];
	for (auto i = 0; i < n; i++)
	{
		if (a[i] > max)max = a[i];
		if (a[i] < mi)mi = a[i];
	}
	cout <<"mi="<< mi << endl;
	return max;
}

class Student
{
public:
	string name[5];
	float grade[5];
	Student()
	{
		for (auto i = 0; i < 5; i++)
		{
			cout << "同学"<<i+1<<"姓名："; cin >> name[i];
			cout << "     成绩："; cin >> grade[i];
			cout << endl;
		}
	}
	int getTop()
	{
		int max=grade[0];
		int index = 0;
		for (auto i = 1; i < 5; i++)
		{
			if (grade[i] > max)
			{
				max = grade[i];
				index = i;
			}
		}
		cout << "成绩最好的学生为：" << name[index] << ",分数为：" << grade[index] << endl;
		return 0;
	}
};