#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	char yn;
	cout << "Hello my dear. What are the numbers?\n";
	do {
		int n1, n2, ch, res1, res2, a;
		cout << "Number 1:";
		cin >> n1;
		cout << "Number 2:";
		cin >> n2;
		cout << "\nWhat do you want to do?\n1. +\n2. -\n3. *\n4. /\n5. ^2\n6. sqrt\n7. log\nYour answer:";
		cin >> ch;
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
			res1 = log(n1) / log(a);
			res2 = log(n2) / log(a);
		}
		if (ch == 5 || ch == 6 || ch == 7) cout << "Result 1: " << res1 << "\nResult 2: " << res2 << endl;
		else cout << "Result:\n" << res1 << endl;
		cout << "Do you want to try again? y/n\n";
		cin >> yn;
	} while ((yn != 'n' || yn != 'n') && (yn == 'y' || yn == 'Y'));
}