#include <iostream>

using namespace std;

int main() {
	int num;
	for (num = 1; num < 101; num++) {
		if (num % 2 == 0) {
			cout << num << endl;
		}
	}
	return 0;
}
