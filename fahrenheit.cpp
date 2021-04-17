#include <iostream>

using namespace std;

float conversor(float c)
{
	float f;
	f = c * (9 / 5) + 32;
	return f;
}

int main()
{
	float temp;
	cout << "digite uma temperatura: " << endl;
	cin >> temp;
	cout << conversor(temp) << endl;
	return 0;
}

