#include <iostream>
using namespace std;

int main()
{
	int score = 0;
	cout << "��������ķ�����" << endl;
	cin >> score;

	if (score > 600)
	{
		if (score > 700)
		{
			cout << "����" << endl;
		}
		else if (score > 650)
		{
			cout << "�廪" << endl;
		}
		else
		{
			cout << "�˴�" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "������ѧ" << endl;
	}
	else if (score > 400)
	{
		cout << "������ѧ" << endl;
	}
	else
	{
		cout << "ë������" << endl;
	}

	return 0;
}