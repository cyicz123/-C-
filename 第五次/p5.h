#include<iostream>
using namespace std;
struct Student
{
	string name;
	int age;
	float score;
};

Student getMaxScore(Student s[], int n)
{
	Student top=s[0];
	for (auto i = 0; i < n; i++)
	{
		if (s[i].score > top.score)top = s[i];
	}
	return top;
}

struct Node
{
	string name;
	int age;
	float score;
	Node* next;
};

class Linklist
{
	Node* head;
public:
	Linklist();
	~Linklist();
	int push_back(Node* Tn);
	int delet_Node(string n);
	int print_Node();
};

Linklist::Linklist()
{
	head = new Node;
	head->age = -1;
	head->name = "";
	head->score = -1;
	head->next = nullptr;
}

Linklist::~Linklist()
{
	for (; head->next != nullptr;)
	{
		Node* p = head->next->next;
		delete head->next;
		head->next = p;
	}
	delete head;
}

int Linklist::push_back(Node* Tn)
{
	Tn->next = head->next;
	head->next = Tn;
	return 0;
}

int Linklist::delet_Node(string n)
{
	int flag = 1;
	for (auto l = head; l->next != nullptr; l = l->next)
	{
		
		if (l->next->name == n)
		{
			auto p = l->next;
			l->next = l->next->next;
			delete p;
			cout << n << "以后的学生信息如下：" << endl;
			for (auto p = l; p->next != nullptr; p = p->next)
			{
				cout << "姓名：" << p->next->name;
				cout << '\t' << "年龄：" << p->next->age;
				cout << '\t' << "成绩：" << p->next->score << endl;
			}
		}
	}
	return 0;
}

int Linklist::print_Node()
{
	for (auto l = head; l->next != nullptr; l = l->next)
	{
		cout << "姓名：" << l->next->name;
		cout << '\t' << "年龄：" << l->next->age;
		cout << '\t' << "成绩：" << l->next->score << endl;
	}
	cout << endl;
	return 0;
}