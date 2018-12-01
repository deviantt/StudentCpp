#include "pch.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int f = 0, k = 0, min = 0, j=0;
	int* con = new int[255];
	char* arr = new char[255];
	do {
		cin.getline(arr, 255);
		for (int i = 0; i < strlen(arr);) {
			while (i < strlen(arr) && (arr[i]<'0' || arr[i]>'9')) {
				if (arr[i] == 'e' && arr[i + 1] == 'n' && arr[i + 2] == 'd') {
					f = 1;
					break;
				}
				if (arr[i] == '-' && arr[i + 1] >= '0' && arr[i + 1] <= '9') min = 1;
				arr[i] = '0';
				i++;
			}
			if (f == 1) break;
			con[k] = atoi(arr);
			if (min == 1) con[k] = con[k] * (-1);
			while (arr[i] >= '0' && arr[i] <= '9') {
				arr[i] = 0;
				i++;
			}
			min = 0;
			k++;
		}
	} while (f == 0);
	k = k - 2;
	//for (int i = 0; i < k; i++) cout << con[i] << ' ' << endl;
	delete[] arr;
	char sym[63];
	char* deistv = new char[255];
	do {
		cin.getline(deistv, 255);
		for (int i = 0; i < strlen(deistv);i++) {
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
	int res=con[0];
	for (int i = 0; i <= k; i++) {
		switch (sym[i]) {
		case '*':
			res = res * con[i + 1];
			break;
		case '+':
			res = res + con[i + 1];
			break;
		case '-':
			res = res - con[i + 1];
			break;
		case '/':
			res = res / con[i + 1];
			break;
		}
	}
	delete[] con;
	cout << res;
	return 0;
}	