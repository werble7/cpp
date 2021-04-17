#include <iostream>

using namespace std;

int main() {
	int x;
	cout << "escreva um numero de um a cem: " << endl;
	cin >> x;
	if (x < 1 || x > 100) {
		cout << "nao eh possível fazer o calculo";
	}
	else {
		int y;
		for (y = 1; y < 101; y += 1) {
			cout << x * y << endl;
		}
	}
}
