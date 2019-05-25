#include<iostream>

int global_var = 10;

int main(){

	std::cout << global_var << std::endl;

	int global_var = 2;
	int j = global_var;
	std::cout << ::global_var << ", " << global_var << ", " << j << std::endl;

	return 0;
}