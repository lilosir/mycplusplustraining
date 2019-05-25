#include<iostream>

int main() {

	typedef int wage;
	wage mine = 99;

	using salary = double;
	salary yours = 50000.00;

	std::cout << mine << ", " << yours << std::endl;
	return 0;
}