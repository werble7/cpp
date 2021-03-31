#include <iostream>

using namespace std;

int main()
{
    float peso, altura;
    cout << "qual o seu peso e sua altura?" << endl;
    cin >> peso >> altura;
    float imc;
    imc = peso / (altura * altura);
    cout << imc;
    return 0;
}
