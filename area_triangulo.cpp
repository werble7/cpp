#include <iostream>

using namespace std;

int area(float a, float b) {
	int t;
	t = (b * a) / 2;
	return t;
}

int main()
{
	float altura, base;
	cout << "digite a altura: " << endl;
	cin >> altura;
	cout << "digite a base: " << endl;
	cin >> base;
	cout << area(altura, base);
	return 0;
}
