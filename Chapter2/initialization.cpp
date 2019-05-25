#include<iostream>

int o;

int main () {

	long double ld = 3.1415926;

	// int a{ld};
	// int b = {ld};
	int c(ld);
	int d = ld;
	int x;
	char z;

	std::cout << c << ", " << d << ", " << z << ", " << x << std::endl;

	return 0;
}