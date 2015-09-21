#include <iostream>
#include <vector>

using namespace std;

int quantity(int n)
{
	int zeros = 0;
	for (int i = 5; i <= n; i += 5)
	{
		int a = i;
		while (a % 5 == 0)
		{
			a /= 5;
			zeros++;
		}
	}
	return zeros;
}
void testing(int true_result, int x)
{
	int test_result = quantity(x);
	if (test_result == true_result)
	{
		cout << "OK" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
		

}

int main()
{
	/*
	int n;
	cin >> n;
	cout << quantity(n) << endl;
	*/
	testing(0, 1);
	testing(0, 2);
	testing(1, 5);
	testing(1, 6);
	testing(2, 10);
	testing(2, 11);
	testing(3, 15);
	testing(3, 16);
	testing(3, 17);
	testing(3, 18);
	getchar();
	getchar();
	return 0;
}
