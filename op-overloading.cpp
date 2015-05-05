#include<iostream>

class foo{
	private:
		int l;
		int b;
		int h;
	public:
		foo(int i=0, int j=0, int k=0) : l(i), b(j), h(k){}

		int getVol(void)
		{
			return l*b*h;
		}

		foo operator+(foo &other)
		{
			return foo(this->l + other.l, this->b + other.b, this->h + other.h);
		}

		foo operator*(foo &other)
		{
			return foo(this->l * other.l, this->b * other.b, this->h * other.h);
		}
};

int main()
{
	foo a(1,2,3);
	foo b(10,20,30);
	foo c, d;

	c = a + b;
	d = a * b;

	std::cout << c.getVol() << std::endl;
	std::cout << d.getVol() << std::endl;

	return 0;
}
