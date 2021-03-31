#include <iostream>
#include <math.h>

using namespace std;
#define pi 3.1415

int main()
{
    int raio;
    float circunferencia;
    cout << "digite o valor do raio: " << endl;
    cin >> raio;
    circunferencia = raio * pi * 2;
    cout << "a circunferencia eh igual a " << circunferencia;
}
