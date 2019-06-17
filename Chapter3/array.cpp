#include<iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {

  // const unsigned len = 40;
  // string arr[len] {"a", "b"};

  // char carr[6] = "hello"; 
  // cout << sizeof(carr) << endl;

  // char carr2 = carr; //cannot initialize one array with another

  // unsigned scores[] = {1, 3, 10, 19};
  // for(auto &s : scores) {
  //   s = 0;
  // }

  // for(auto s : scores) {
  //   cout << s << endl;
  // }

  // int iarr[10];
  // for(size_t i=0; i<10; i++) {
  //   iarr[i] = i;
  // }

  // for(auto i : iarr) {
  //   cout << i << endl;
  // }

  int ia[] = {1,2,3,4};
  auto ia2(ia); // same as auto ia2(&ia[0]);

  return 0;
}