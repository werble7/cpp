#include <iostream>

using namespace std;

int par(int x)
{
	if (x % 2 == 0) {
		cout << "par ";
	}
	else {
		cout << "impar ";
	}
	return 0;
}

int main()
{
	int x;
	cout << "digite um numero inteiro: " << endl;
	cin >> x;
	cout << par(x);
	return 0;
}
