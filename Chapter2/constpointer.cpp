#include<iostream>

int main(){

	int errNumb = 0, errNumb2 = 2;

	int *const eptr = &errNumb;
	const int *eptr2 = &errNumb2;;

	// eptr = &errNumb2; error: cannot assign to variable 'eptr' with const-qualified type 'int *const'
	*eptr = 9; //ok

	eptr2 = &errNumb; //ok
	// *eptr2 = 9; error: read-only variable is not assignable

	std::cout << *eptr << ", " << *eptr2 << std::endl;
}