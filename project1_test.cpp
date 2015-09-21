
#include <iostream>
#include <cmath>

using namespace std;

double sinus(double x, double epsilon)
{
	double sum = 0;
	double element = x;
	int n = 0;
	while (element > epsilon || 0.0 - element > epsilon)
	{
		sum += element;
		n++;
		if (n % 2 == 0)
			element = 1;
		else
			element = -1;
		for (int i = 1; i <= 2 * n + 1; i++)
		{
			element *= x;
			element /= i;
		}
	}
	return sum;
}
void testing(double x, double epsilon)
{
	double true_sin, test_sin;
	true_sin = sin(x);
	test_sin = sinus(x, epsilon);
	if (abs(true_sin - test_sin) - epsilon <= 0.0)
	{
		cout << "OK" << endl;
	}
	else
		cout << "FAIL" << endl;
}
int main()
{
	/*
	double x, epsilon;
	cin >> x >> epsilon;
	double sin = sinus(x, epsilon);
	cout << sin << endl;
	*/

	testing(1, 1);
	testing(2, 0.1);
	testing(3, 0.01);
	testing(4, 0.001);
	testing(5, 0.0001);
	testing(6, 0.00001);
	testing(7, 2);
	testing(3.14, 0.5);
	testing(6.2831, 0.0001);
	testing(10, 1);

	getchar();
	getchar();
	return 0;
}