#include <iostream>

using namespace std;

float imc(float p, float a) {
	float i = p / (a * a);
	return i;
}

int main() {
	float peso, altura;
	cin >> peso >> altura;
	cout << imc(peso, altura) << endl;
	return 0;
}
