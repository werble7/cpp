#include <iostream>

using namespace std;

int main() {
	int i, soma = 0;
	for (i = 1; i < 11; i++) {
		cout << "digite um valor: " << endl;
		cin >> i;
		if (i == 0) {
			cout << "digite um numero maior que zero." << endl;
			break;
		}
		else if (i < 0) {
			cout << "nao aceitamos numeros menor que zero!" << endl;
		}
		else {
			soma = soma + i;
		}
	}
	cout << soma << endl;
}
