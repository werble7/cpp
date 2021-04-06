#include <iostream>

using namespace std;

int main()
{
	float nota1, nota2, media;
	bool x;
	cout << "quais foram as suas notas? " << endl;
	cin >> nota1 >> nota2;
	media = (nota1 + nota2) / 2;
	if (media > 5) {
		cout << "aluno aprovado";
	}
	else {
		cout << "aluno reprovado";
	}
}
// sem operador ternário, complicado demais.
