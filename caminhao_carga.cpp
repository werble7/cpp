#include <iostream>

using namespace std;

int main() {
	int peso, soma = 0;
	for (int x = 0; x < 5; x++) {
		cout << "digite o peso: " << endl;
		cin >> peso;
		soma = soma + peso;
		cout << soma << endl;
		if (peso <= 0) {
			cout << "pesos nulos ou negativos nao existem" << endl;
			break;
		}
	}
	if (soma < 500) {
		cout << "o caminhao pode ir";
	}
	else {
		cout << "o caminhao esta muito pesado";
	}
}

// deu erro, rever depois

