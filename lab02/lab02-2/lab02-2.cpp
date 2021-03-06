#include "pch.h"
#include <iostream>

using namespace std;

bool safe(istream& in)
{
	if (in.peek() != '\n')
	{
		while (in.get() != '\n') in.clear();
		return false;
	}
	return true;
}

int main()
{
	//setlocale(2, "Russian");

	cout << "welcome!" << endl;

	double x; char aux; double y;

	cout << "enter." << endl;
	while (cout << "> " && !safe(cin >> x >> aux >> y) || !(aux == '+' || aux == '-' || aux == '*' || aux == '/'));
	cout << endl;

	cout << "result: ";
	switch (aux)
	{
	case '+': cout << x + y << endl; break;
	case '-': cout << x - y << endl; break;
	case '*': cout << x * y << endl; break;
	case '/': cout << x / y << endl; break;
	}
	cout << endl;

	return 0;
}