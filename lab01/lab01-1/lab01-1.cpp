#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	char yn;
	cout << "Hello my dear. What are the numbers?\n";
	do {
		int n1, n2, ch, res1;
		cout << "Number 1:";
		cin >> n1;
		cout << "Number 2:";
		cin >> n2;
		cout << "\nWhat do you want to do?\n1. +\n2. -\n3. *\n4. /\nYour answer:";
		cin >> ch;
		if (ch == 1) res1 = n1 + n2;
		if (ch == 2) res1 = n1 - n2;
		if (ch == 3) res1 = n1 * n2;
		if (ch == 4) res1 = n1 / n2;
		cout << "Result:\n" << res1 << endl;
		cout << " Do you want to try again? y/n\n";
		cin >> yn;
	} while ((yn != 'n' || yn != 'n') && (yn == 'y' || yn =='Y'));
	return 0;
}