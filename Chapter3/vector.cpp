#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {

  // vector<int> ivec;
  // vector<int> ivec2 = ivec;
  // vector<int> ivec3(ivec2);

  // vector<string> svec(ivec); error: svec holds strings, not ints

  // vector<string> v1 = {"a", "b", "c"}; //list initialization
  // vector<string> v2 ("a", "b", "c"); error


  // vector<vector<int>> iivec;
  // vector<string> svec = iivec;

  // vector<string> v6{10};

  // for(auto s : v6) {
  //  cout << s << ", ";
  // }

  // string word;
  // vector<string> wvec;

  // while(cin >> word) {
  //  wvec.push_back(word);
  // }

  // vector<int> ivec {1,2,3,4,5,6,7,8};

  // for(auto &i : ivec) {
  //   i *= i;
  // }
  // ivec.push_back(9);
  // for(auto i : ivec) {
  //   cout << i << ",";
  // }

  vector<int> iv;
  for(decltype(iv.size()) i; i<10; ++i)
    iv.push_back(i);

  for(auto i : iv) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}