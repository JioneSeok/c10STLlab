#include <iostream> 
#include <string> 
int main() {
	std::string str{ "The quick brown fox jumps over the lazy dog." };
	str.replace(10, 5, "red"); // (5)   
	str.replace(str.begin(), str.begin() + 3, 1, 'A'); // (6)  
	std::cout << str << "\n\n"; //A quick red fox jumps over the lazy dog.
	
	str.replace(12, 3, "rabbit");
	std::cout << str << "\n";
}