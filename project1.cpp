#include <iostream>
#include <cmath>

using namespace std;

double sinus (double x, double epsilon)
{
	double sum = 0;
	double element = x;
	int n = 0;
	while (element > epsilon || 0.0 - element > epsilon)
	{
		sum += element;
		n ++;
		if (n % 2 == 0)
			element = 1;
		else
			element = -1;
		for (int i = 1; i <= 2 * n + 1; i ++)
		{
			element *= x;
			element /= i;
		}
	}
	return sum;
}

int main()
{
	double x, epsilon;
	cin >> x >> epsilon;
	double sin = sinus (x, epsilon);
	cout << sin << endl;
	getchar();
	getchar();
	return 0;
}