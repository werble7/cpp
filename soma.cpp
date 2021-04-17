#include <iostream>

using namespace std;

int main()
{
	int x, soma;
	soma = 0;
	do {
		cin >> x;
		soma = soma + x;
	} 	while (x != 0);
	cout << soma;
	return 0;
}
