#include"p11.h"
int main()
{
	/*Point left_top(20, 10.5);
	Rectangle square(left_top, 10, 10);
	square.printInfo();*/

	Book b1, b2, b3;
	b1.push_back("随机数学", "程依明", 48.6);
	b2.push_back("电工学", "秦曾煌", 41.3);
	b3.push_back("机器学习", "周志华", 88.0);

	Student s("程越", 20, 89.5);
	s.getBook(vector<Book>{b1, b2, b3});
	s.studentInfo();
	return 0;
}