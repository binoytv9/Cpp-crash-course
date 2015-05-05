#include<iostream>

int foo(int a = 0, int b = 1, int c = 3)
{
	return a + b + c;
}

int main()
{
	std::cout << foo(1) << std::endl;
	std::cout << foo(1,2) << std::endl;
	std::cout << foo(1,2,3) << std::endl;

	return 0;
}
