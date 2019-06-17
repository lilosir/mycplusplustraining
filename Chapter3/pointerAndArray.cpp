#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

  // string nums[] = {"1", "2", "3", "4"};

  // string *p = &nums[0];
  // string *p2 = nums;
  // //pointer to an array equals pointer to the first element of the array

  // auto num2 (nums); //auto initialize num2, so num2 is an pointer to nums: same as === auto num2 = &nums[0];
  // // num2 = 10; this is wrong, pointer cannot be signed an int
  // // *num2 = 10; 

  // cout << p << " " << p2 << " " << num2 << endl;

  int arr[] = {1,3,5,7};
  int *p = arr;
  cout << *p << endl;
  cout << *(++p) << endl;
  cout << std::begin(arr) << endl;
  cout << std::end(arr) << endl;
 
  return 0;
}