#include <iostream>

using namespace std;

int main() {
	int dezenas, unidades;
	for (dezenas = 0; dezenas <= 9; dezenas++) {
		for (unidades = 0; unidades <= 9; unidades++) {
			cout << dezenas << unidades << endl;
		}
	}
}
