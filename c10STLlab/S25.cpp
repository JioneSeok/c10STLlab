#include <iostream>
#include <string>
using namespace std;

int main() {
	string A = "It is";
	string B = " a box.";
	string C = " a cup.";
	string D;

	D = A + B;
	cout << D << endl;
	D += C;
	cout << D << endl;
}