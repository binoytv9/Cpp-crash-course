#include<iostream>

int main()
{
	int x = 20;
	int &foo = x;

	std::cout << "x : " << x << std::endl; 
	foo = 100;
	std::cout << "x : " << x << std::endl; 

	return 0;
}
