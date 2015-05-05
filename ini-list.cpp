#include<iostream>

int main()
{
	class foo{
		int val;
		public:
			foo(int i=0) : val(i)
			{
				std::cout << val << std::endl;
			}
	};

	foo f(100);
	foo f2;
}
