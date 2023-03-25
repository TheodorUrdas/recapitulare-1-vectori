#pragma once
#include <iostream>
using namespace std;

void citire(int v[], int& n) {

	cout << "n=";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
}

void afisare(int v[], int n) {

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

}

void inserare(int v[], int&n, int p, int nou) {

	for (int i = n - 1; i >=p;i--) {
		v[i + 1] = v[i];
	}
	n++;
	v[p] = nou;
}

void stergere(int v[], int& n, int p) {

	for (int i = p; i < n; i++) {
		v[i] = v[i + 1];

	}
	n--;
}