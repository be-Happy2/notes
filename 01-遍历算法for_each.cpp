//STL常用算法
/*
for_each
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//普通回调函数
void printV(char v)
{
	cout << v << " ";
}

//仿函数回调
class MyPrint{
public:
	void operator()(char v)
	{
		cout << v << " ";
	}
};

//for_each遍历算法
void test()
{
	std::vector<char> v;
	for (int i = 67; i < 77; ++i)
	{
		/* code */
		v.push_back(i);
	}
	//可以传入一个普通函数来回调也可以传入仿函数
	for_each(v.begin(), v.end(), printV);
	cout << endl;
	//传入仿函数
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
}

int main()
{
	test();
	return 0;
}