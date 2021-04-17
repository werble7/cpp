#include <iostream>
#include <math.h>

using namespace std;

int bhaskara(int a, int b, int c)
{
	int delta = (b * b) + 4 * a * c;
	if (delta > 0) {
		int raizdelta = sqrt(delta);
		int x1 = (-b + raizdelta) / (2 * a);
		int x2 = (-b - raizdelta) / (2 * a);
		cout << x1 << endl << x2 << endl;
	}
	else {
		int x = (b + delta) / (2 * a);
		cout << x << endl;
	}
	return 0;
}

int main()
{
	int a, b, c;
	cout << "digite tres numeros: " << endl;
	cin >> a >> b >> c;
	cout << bhaskara(a, b, c) << endl;
	return 0;
}
