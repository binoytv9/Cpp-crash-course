#include<iostream>

int fun(int a, int b)
{
	return a+b;
}

double fun(double a, double b)
{
	return a+b;
}

int main()
{
	std::cout << fun(1,2) << std::endl;
	std::cout << fun(2.0,5.0) << std::endl;

	return 0;
}
