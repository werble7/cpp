#include <iostream>

using namespace std;

int dobro(int x)
{
	x * 2;
	return x;
}

int main()
{
	int x;
	cin >> x;
	cout << dobro(x) << endl;
	return 0;
}
