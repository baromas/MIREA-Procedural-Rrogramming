#include "main.h"
#include <iostream>;
using namespace std;
int main(){
	int a;
	int b;
	cout << "Enter a" << "\n";
	cin >> a;
	cout << "Enter b" "\n";
	cin >> b;

	cout << "Differrence: " << a - b << "\n";
	cout << "Addition: " << a + b << "\n";
	cout << "Multiplication: " << a * b << endl;
	if (b == 0) {
		cout << "Impossible to calculate division (b = 0)";
	}
	else {
		cout << "Divivsion: " << a / b;
	}}