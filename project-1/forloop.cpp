#include<iostream>

int main() {

	int sum {0};

	for(int a = 1; a<=10; a++) {
		sum += a;
	}

	std::cout << sum <<std::endl;
	return 0;
}