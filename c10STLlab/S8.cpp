#include <iostream>
#include <string>
using namespace std;

template <typename T>
class test {
public:
	test() {}; // basic constructor
	//test(T xx, T yy) { a = xx; b = yy; }// Ok, too.
	test(T xx, T yy) :a(xx), b(yy) {	}
	T a, b;
	T plus() { return a + b; }
	T plusplus() { return a + b + a + b; }
};
void main() {
	test <int> inT(2, 8);
	cout << inT.plusplus() << endl;
	string aa = "I am ";
	string bb = "a boy.";
	test<string> str(aa, bb);
	cout << str.plusplus() << endl;
	
}