#include <iostream>
#include <complex>
using namespace std;

int main() {
	complex<float>a(1, 0), b(1, 0), c(1, 0);
	complex<float> x, y;
	x = ((-b) + sqrt((b * b) - ((a * c) + (a * c) + (a * c) + (a * c)))) / ((-a) + (-a));
	y = ((-b) - sqrt((b * b) - ((a * c) + (a * c) + (a * c) + (a * c)))) / ((-a) + (-a));
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}