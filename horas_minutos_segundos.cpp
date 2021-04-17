#include <iostream>

using namespace std;

int main() {
	int horas, minutos, segundos;
	for (horas = 00; horas <= 23; horas++) {
		for (minutos = 00; minutos <= 59; minutos++) {
			for (segundos = 00; segundos <= 59; segundos++) {
				cout << horas << ":" << minutos << ":" << segundos << endl;
			}
		}
	}
	return 0;
}
