#include <iostream>
#include <vector>

using namespace std;

int quantity (int n)
{
	int zeros = 0;
	for (int i = 5; i <= n; i += 5)
	{
		int a = i;
		while (a % 5 == 0)
		{
			a /= 5;
			zeros ++;
		}
	}
	return zeros;
}

int main()
{
	int n;
	cin >> n;
	cout << quantity (n) << endl;
	getchar ();
	getchar ();
	return 0;
}