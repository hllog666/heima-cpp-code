#include <iostream>
using namespace std;
#include <vector>

void test01()
{
	vector<int> v;
	v.reserve(100000);
	int num = 0;
	int* p = nullptr;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;
}

int main()
{
	test01();

	return 0;
}