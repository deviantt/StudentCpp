#include "pch.h"
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	int f = 0, k = 0, e = 0, j = 0;
	int* con = new int[255];
	char* arr = new char[255];
	cout << "Input numbers:" << endl;
	do {
		cin.getline(arr, 255);
		con[k] = 0;
		for (int i = 0; i < (strlen(arr));) {
			while (i < strlen(arr) && (arr[i]<'0' || arr[i]>'9')) {
				if (arr[i] == 'e' && arr[i + 1] == 'n' && arr[i + 2] == 'd') {
					f = 1;
					break;
				}
				if (arr[i] == '-') {
					e = 1;
					arr[i] = '0';
				}
				i++;
			}
			arr[i] -= '0';
			con[k] += (arr[i] * pow(10, strlen(arr) - (i + 1)));
			i++;
		}
		if (f == 1) break;
		if (e == 1) con[k] *= (-1);
		k++;
	} while (f == 0);
	for (int i = 0; i < 10; i++) cout << con[i] << endl;
	delete[] arr;
	char sym[63];
	char* deistv = new char[255];
	cout << "Input operations:" << endl;
	do {
		cin.getline(deistv, 255);
		for (int i = 0; i < strlen(deistv); i++) {
			if (deistv[i] == '+' || deistv[i] == '-' || deistv[i] == '/' || deistv[i] == '*') {
				sym[i] = deistv[i];
				j++;
			}
			else {
				continue;
			}
		}
		delete[] deistv;
	} while (j <= k);
	//for (int i = 0; i < 2; i++) cout << symb[i] << ' ';
	int res = con[0];
	for (int i = 0; i <= k; i++) {
		switch (sym[i]) {
		case '+':
			res = res + con[i + 1];
			break;
		case '-':
			res = res - con[i + 1];
			break;
		case '/':
			res = res / con[i + 1];
			break;

		case '*':
			res = res * con[i + 1];
			break;
		}
	}
	delete[] con;
	cout << res;
	//return 0;
}	