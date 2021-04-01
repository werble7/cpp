#include <iostream>
#include <math.h>

using namespace std;

int main()
#define pi 3.14
{
	float raio;
	cout << "digite o raio: ";
	cin >> raio;
	float circuferencia;
	circuferencia = raio * pi * 2;
	float area;
	area = (raio * raio) * pi;
	cout << "a area eh: " << area << " e a circunferencia eh " << circuferencia;
}
