#include"p4.h"
int main()
{
	Student s[5];
	for (auto i = 0; i < 5; i++)
	{
		cout << "同学" << i+1 << "姓名 "; cin >> s[i].name;
		cout << "     年龄："; cin >> s[i].age;
		cout << "     成绩："; cin >> s[i].score;
		cout << endl;
	}
	sort(s, 5);
	for (auto i = 0; i < 5; i++)
	{
		cout << "同学" << i + 1 << "姓名 " << s[i].name;
		cout << "     年龄：" << s[i].age;
		cout << "     成绩：" << s[i].score;
		cout << endl;
	}
	cout <<endl<< "平均分为：" << getAve(s, 5) << endl;
	addscore5(&s[0]);
	cout <<endl<< "增加" << s[0].name << "同学5分后，其成绩如下：" << endl;
	cout <<"姓名：" << s[0].name<<" ";
	cout <<"年龄：" << s[0].age<<" ";
	cout <<"成绩：" << s[0].score<<endl<<endl;
	cout << "新平均分为：" << getAve(s, 5) << endl;
	return 0;
}

