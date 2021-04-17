#include <iostream>

using namespace std;

int main() {
	int i = 0, soma = 0;
	for (i = 0; i < 5; i++) {
		cout << "digite o peso: " << endl;
		int x;
		cin >> x;
		soma = soma + x;
	}
	soma < 100 ? cout << "peso leve" << endl : cout << "peso pesado" << endl;
	cout << soma << endl;
	return 0;
}
