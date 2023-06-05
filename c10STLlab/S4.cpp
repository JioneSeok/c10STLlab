#include <iostream>
#include <string>
using namespace std;

template <typename T>
bool greater_than(T a, T b) {
	return a > b;
}
void main() {
	cout << greater_than(2, 3) << "\n";
	cout << greater_than(2.7, 3.2) << "\n";
	cout << greater_than(3.2, 2.7) << "\n\n";

	string word1 = "ABC", word2 = "XY";
	cout << greater_than(word1, word2) << "\n";
	cout << greater_than(word2, word1) << "\n";
}