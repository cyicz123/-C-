#include<iostream>
using namespace std;
struct Student
{
	string name;
	int age;
	float score;
};

int sort(Student *s,int n)
{
	Student temp;
	for (auto i = 0; i < n-1; i++)
	{
		for (auto j = 0; j < n-1-i; j++)
		{
			if (s[j].score < s[j + 1].score)
			{
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
			else if (s[j].score == s[j + 1].score && s[j].age > s[j + 1].age)
			{
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
	return 0;
}

float getAve(Student s[], int n)
{
	float sum = 0;
	for (auto i = 0; i < n; i++)
	{
		sum += s[i].score;
	}
	return sum / n;
}

void addscore5(Student* ps)
{
	ps->score += 5;
	return;
}