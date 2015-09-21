#include "iostream"
#include "math.h"

const double pi = 3.1415926535;

using namespace std;

double count_pi(double);

void test (double epsilon)
{
	double my_pi = count_pi (epsilon);
	if (my_pi < pi + epsilon && my_pi > pi - epsilon)
		cout << "OK" << endl;
	else
		cout << "False" << endl;
}

int main()
{
	test (10);
	test (5);
	test (3.14);
	test (1);
	test (0.5);
	test (0.1);
	test (0.05);
	test (0.01);
	test (0.005);
	test (0.001);
	test (0.0005);
	test (0.0001);
	test (0.00001);
	system("PAUSE");
	return 0;
}
double count_pi(double eps)
{
	double my_pi = 0;
	double a = 4;
	int n = 1;
	int one = 1;
	while ((abs(a) - eps) > 0)
	{
		my_pi += a;
		n += 2;
		one *= -1;
		a = double(one * 4. / double(n));
	}
	return my_pi;
}