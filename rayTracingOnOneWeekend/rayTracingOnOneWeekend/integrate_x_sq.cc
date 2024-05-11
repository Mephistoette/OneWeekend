#include "rtweekend.h"

#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>

//double f(double d)
//{
//	return 2.0 * d;
//}
//
//double pdf(double x)
//{
//	return 0.5;
//}

double f(double d)
{
	return sqrt(4.0 * d);
}

double pdf(double x)
{
	return x / 2.0;
}

int main()
{
	int N = 1000000;
	auto sum = 0.0;
	for (int i = 0; i < N; i++)
	{
		auto x = f(random_double());
		sum += x * x / pdf(x);
	}

	std::cout << std::fixed << std::setprecision(12);

	std::cout << "I = " << sum / N << "\n";
}