#include<iostream>

int main() {

	// int a {50}, sum {0};

	// while(a <= 100) {
	// 	sum += a;
	// 	++a;
	// }

	// std::cout << "Add 50 to 100 is " << sum << std::endl;
	// int v1 {0}, v2 {0};

	// std::cout << "Input two numbers: " << std::endl;

	// std::cin >> v1 >> v2;

	// if(v1 > v2) {
	// 	if(v1 - 1 == v2) {
	// 		std::cout << "There is no integer between " << v1 << " and " << v2 << std::endl;
	// 	} else {
	// 		while(v2 < v1-1) {
	// 			++v2;
	// 			std::cout << v2 << " " << std::endl;
	// 		}
	// 	}
	// }
	// else if(v1 < v2) {
	// 	if(v1 + 1 == v2) {
	// 		std::cout << "There is no integer between " << v1 << " and " << v2 << std::endl;
	// 	} else {
	// 		while(v1 < v2-1) {
	// 			++v1;
	// 			std::cout << v1 << " " << std::endl;
	// 		}
	// 	}
	// }

	int sum {0}, i{0};

	while(std::cin >> i) {
		sum += i;
	}

	std::cout << "Sum is " << sum << std::endl;
	
	return 0;
}