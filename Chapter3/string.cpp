#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {

	// string s1 = "lll";
	// string s2 {"123"};
	// string s3(3, 's');
	// cout << s1 << ", " << s2 << ", " << s3 << endl;

	//------------------------------------------------------

	// string s1;
	// string s2(s1);  //s2 is copy of s1.
	// string s3 = s1; //s3 is copy of s1, same as above
	// string s4("Value"); //s4 is copy of string literal, not including the null
	// string s5 = "Value"; //same as above
	// string s6(6, 's'); //initialize s6 with 6 copies of the character 's';

	// string s7 = string(5, 'o');

	// cout << s4.size() << endl;
	// cout << s5.size() << endl;
	// cout << s7[0] << endl;

	//------------------------------------------------------
	
	// string s1, s2;
	// cin >> s1 >> s2;
	// cout << "Two strings are: \"" << s1 << "\" and \"" << s2 <<"\""<< endl ; 

	//------------------------------------------------------

	// string word;
	// while(cin >> word) {
	// 	cout << word << endl;
	// }

	// string line;
	// while(getline(cin, line)){
	// 	cout << line << endl;
	// }

	// string s1 = "new";
	// string s = "hello" + s1;

	// string str("Hello world!!...");
	// decltype(str.size()) punc_size = 0;
	
	// for(auto c : str) {
	// 	if(ispunct(c)) 
	// 		++punc_size;
	// }
	// cout << "There are " << punc_size << " punctuation charaters in " << str << endl;

	string str("what a day!");
	// for(auto &c : str) {
	// 	c = toupper(c);
	// }
	for(int i=0; i<str.size(); ++i) {
		str[i] = toupper(str[i]); //it already returns a reference to the character at the position
	}

	cout << str << endl;

	return 0;
}