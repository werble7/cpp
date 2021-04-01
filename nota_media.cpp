#include <iostream>

using namespace std;

int main()
{
	float nota1, nota2, nota3;
	cout << "quais as suas notas? ";
	cin >> nota1 >> nota2 >> nota3;
	float media;
	media = (nota1 + nota2 + nota3) / 3;
	if (media < 3) {
		cout << "ME";
	}
	else if (media >= 3 && media < 8) {
		cout << "ME";
	}
	else if (media >= 8) {
		cout << "MS";
	}
	else {
		cout << "SS";
	}
}
