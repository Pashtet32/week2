// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "math.h"

using namespace std;

double count_pi(double);

int _tmain(int argc, _TCHAR* argv[])
{
	double x;
	cin >> x;
	cout << count_pi(x) << endl;
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

