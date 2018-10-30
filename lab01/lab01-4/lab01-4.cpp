#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

void wrongInput() {
	cout << "Wrong input. Try again\nNumber 1:";
	cin.clear();
	cin.ignore(10000, '\n');
}

int logarithm(int a, int b) {
	return log(a) / log(b);
}

int main()
{
	float n1, n2, ch, res1, res2, a;
	char yn;
	cout << "Hello my dear. What are the numbers?\n";
	cout << "Number 1:";
	cin >> n1;
	while (cin.fail()) {
		wrongInput();
		cin >> n1;
	}
	cout << "Number 2:";
	cin >> n2;
	while (cin.fail()) {
		wrongInput();
		cin >> n2;
	}
	cout << "\nWhat do you want to do?\n1. +\n2. -\n3. *\n4. /\n5. ^2\n6. sqrt\n7. log\nYour answer:";
	cin >> ch;
	while (cin.fail() || ch < 1 || ch>7) {
		wrongInput();
		cin >> ch;
	}
	if (ch == 1) res1 = n1 + n2;
	if (ch == 2) res1 = n1 - n2;
	if (ch == 3) res1 = n1 * n2;
	if (ch == 4) res1 = n1 / n2;
	if (ch == 5) {
		res1 = n1 * n1;
		res2 = n2 * n2;
	}
	if (ch == 6) {
		res1 = sqrt(n1);
		res2 = sqrt(n2);
	}
	if (ch == 7) {
		cout << "Base of the logarithm:";
		cin >> a;
		while (cin.fail() || a <= 0) {
			wrongInput();
			cin >> a;
		}
		res1 = logarithm(n1,a);
		res2 = logarithm(n2,a);
	}
	if (ch == 5 || ch == 6 || ch == 7) cout << "Result 1: " << res1 << "\nResult 2: " << res2 << endl;
	else cout << "Result:\n" << res1;
	cout << "Do you want to try again? y/n\n";
	cin >> yn;
	while (yn != 'Y' && yn != 'y' && yn != 'N' && yn != 'n') {
		wrongInput();
		cin >> yn;
	}
	if (yn == 'Y' || yn == 'y') main();
	if (yn == 'N' || yn == 'n') return 0;
}