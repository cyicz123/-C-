#include<iostream>
#include<math.h>
using namespace std;
#define TRUE  1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1



class Sqlist
{
public:
	int** elem;
	int length;
	Sqlist();//创建空线性表

	~Sqlist();


	int setList();//给线性表赋值。


	int listMax();//求线性表最大值

};

Sqlist::Sqlist()
{
	elem = new int* [3];
	for (auto i = 0; i < 3; i++)
	{
		elem[i] = new int[5];
	}
	length = 0;
}

Sqlist::~Sqlist()
{
	for (auto i = 0; i < 3; i++)
	{
		delete[]elem[i];
	}
	delete[]elem;
}

int Sqlist::setList()
{
	int num;
	int i = 0, j, l=15;
	while (length < l)
	{
		cout << "the value:"; cin >> num;
		j = length % 5;
		elem[i][j] = num;
		length++;
		if (length % 5 == 0)
			i++;
	}
	return OK;
}

int Sqlist::listMax()
{
	int rows = 3,cols=5;
	int max = elem[0][0];
	for (auto i = 0; i < rows; i++)
	{
		for (auto j = 0; j < cols; j++)
		{
			cout << "elem[" << i << "][" << j << "]=" << elem[i][j] << "	";
			if (elem[i][j] > max)max = elem[i][j];
		}
		cout << endl;
	}
	return max;
}

long int charToint(const char* str)
{
	int sign = -1;
	int i = strlen(str)-1,j=0;
	long int num = 0;
	//cout << i << endl;
	while (i >= 0 && str[i] >= '0'&& str[i] <= '9')
	{
		//cout << str[i]<<endl;
		num += (str[i]-48) * pow(10, j);
		j++;
		i--;
	}
	if (i == 0 && str[i] == '-')num *= -1;
	return num;
}

int* findmax(int* a, int n)
{
	int* max = new int;
	*max = a[0];
	for (auto i = 0; i < n; i++)
	{
		if (a[i] > * max)*max = a[i];
	}
	return max;
}