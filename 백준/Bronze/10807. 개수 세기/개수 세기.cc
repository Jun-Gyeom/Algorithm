#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int list[n];
	for (int i = 0; i < n; i++)
	{
		int data;
		cin >> data;
		list[i] = data;
	}

	int v;
	int result = 0;
	cin >> v;

	for (int j = 0; j < n; j++)
	{
		if (list[j] == v)
		{
			result++;
		}
	}

	cout << result;

	return 0;
}