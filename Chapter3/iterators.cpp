#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {

  string s1 {"hello"};

  auto ib = s1.begin();
  auto ie = s1.end();

  // cout << *ib << endl;
  // cout << *(--ie) << endl;

  // if(ib != ie) {
  //  *ib = toupper(*ib);
  // }
  // cout << s1 << endl;
  
  for(; ib != ie; ++ib) {
    *ib = toupper(*ib);
    cout << *ib << endl;
  }
  cout << s1 << endl;

  return 0;
}