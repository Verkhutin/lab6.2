#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int a[], const int n) {
	for (int i = 0; i < n; i++) {
		a[i] = -50 + rand() * 101/ RAND_MAX;
	}
}

void PrintArr(int a[], const int n) {
	for (int i = 0; i < n; i++)
		cout << "| " << setw(4) << a[i] << " |";
}

int Amount(int a[], const int n) {
	int am = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0)
			am++;
	}
	return am;
}

int main() {
	const int n = 25;
	int a[n];

	srand((unsigned)time(NULL));

	cout << "Array: " << endl;
	Create(a, n);
	PrintArr(a, n);
	cout << endl;
	cout << endl;
	cout << "Amount = " << Amount(a, n) << endl;

	return 0;
}
