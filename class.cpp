#include<iostream>

int main()
{
	class foo{
		public:
		int attribute;
		int function(void)
		{
			std::cout << "foo::function\n";
		}

		~foo(void)
		{std::cout << "foo destructor called\n";}

		foo(void)
		{std::cout << "foo c1 called\n";}

		foo(int value)
		{std::cout << "foo c2 called with "<< value << "\n";}
	};

	struct bar{
		int attribute;
		int function(void)
		{
			std::cout << "bar::function\n";
		}
	};

	foo f, f2(2);
	f.attribute = 1;
	f.function();

	bar b;
	b.attribute = 1;
	b.function();

	std::cout << "end of main\n";
	return 0;
}
