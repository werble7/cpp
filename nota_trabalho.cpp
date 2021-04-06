#include <iostream>

using namespace std;

int main()
{
	float trabalho, nota_final, nota1;
	nota1 = 4.5;
	cout << "qual a nota do trabalho?" << endl;
	cin >> trabalho;
	nota_final = nota1 + trabalho;
	if (trabalho < 0.5) {
		cout << nota_final << " voce esta reprovado";
	}
	else {
		cout << nota_final << " voce esta aprovado";
	}
	return 0;
}
