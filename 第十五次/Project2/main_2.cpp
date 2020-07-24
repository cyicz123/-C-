#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	ifstream data_file("data.txt", ios::in);
	int x;
	while (data_file >> x)
		v.push_back(x);
	cout << "data.txt中整型数据个数为：" << v.size() << endl;
	data_file.close();
	return 0;
}