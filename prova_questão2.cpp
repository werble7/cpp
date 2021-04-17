#include <iostream>

using namespace std;

int main() {
	float imc,altura,peso;
	cout << "digite a sua altura: " << endl;
	cin >> altura;
	cout << "digite o seu peso: " << endl;
	cin >> peso;
	imc = peso / (altura * altura);
	if (imc < 18.5) {
		cout << imc << endl << "magreza";
	}
	else if (imc >= 18.5 && imc < 24.9) {
		cout << imc << endl << "normal";
	}
	else if (imc >= 24.9 && imc < 29.9) {
		cout << imc << endl << "sobrepeso";
	}
	else if (imc >= 29.9 && imc < 39.9) {
		cout << imc << endl << "obesidade";
	}
	else {
		cout << imc << endl << "obesidade grave";
	}
	return 0;
}
