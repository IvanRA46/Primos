#include "Primos.h"
#include <iostream>

using namespace std;

Primos::Primos(int num) {
	this->num = num;
 }

void Primos::EsPrimo(int num) {
	int x;
	if (num != 0 && num != 1 && num != 4 && num < 0) {
		for (x = 2; x <= num; x++) {
			if (num % x == 0) {
				if (num == x) {
					cout << "\nEl numero: " << num << ", es primo\n";
				}
				else {
					cout << "\nEl numero: " << num << ", no es primo\n";
				}
			}
		}
	}
	else {
		cout << "\nEl numero: "<< num << " , no es primo\n";
	}
}