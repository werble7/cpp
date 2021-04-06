#include <iostream>

using namespace std;

int main()
{
	bool hora, chuva;
	cout << "ja passou das 22 ?" << endl;
	cin >> hora;
	cout << "ainda esta chovendo?" << endl;
	cin >> chuva;
	if (chuva == true || hora == true) {
		cout << "nao posso sair hoje";
	}
	else {
		cout << "vou ao mercado";
	}
}
