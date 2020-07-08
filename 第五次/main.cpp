#include"p5.h"
#include <iomanip>
int main()
{
	Student s[10];
	string name[10] = { "Alice","Ben","Cryin","David","Eliza","Frand","Holly","Ingo","Jack","Kali" };
	for (auto i = 0; i < 10; i++)
	{
		s[i].name = name[i];
		s[i].age = rand() % 5+18;
		s[i].score = rand() % 100;
	}
	for (auto i = 0; i < 10; i++)
	{
		cout << setiosflags(ios::right);
		cout << "同学" << i + 1 << '\t' << "姓名:" << s[i].name;
		cout <<setw(10)<< '\t' << "年龄：" << s[i].age;
		cout << setw(8) << '\t' << "成绩：" << s[i].score;
		cout << endl;
	}
	cout << endl << "最好成绩学生信息如下：" << endl;
	cout << "姓名：" << getMaxScore(s,10).name;
	cout << '\t' << "年龄：" << getMaxScore(s, 10).age;
	cout << '\t' << "成绩：" << getMaxScore(s, 10).score<<endl<<endl;

	Linklist slist;
	for (auto i = 0; i < 10; i++)
	{
		auto p = new Node;
		p->age = s[i].age;
		p->name = s[i].name;
		p->score = s[i].score;
		slist.push_back(p);
	}

	slist.print_Node();

	slist.delet_Node("Holly");

	return 0;
}