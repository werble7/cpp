#include <iostream>

using namespace std;

int main()
{
	int idade;
	cout << "qual a sua idade?" << endl;
	cin >> idade;
	if (idade > 70) {
		cout << "va se vacinar";
	}
	else {
		cout << "ainda nao pode se vacinar.";
	}
}
