#pragma once
#include <iostream>
using namespace std;
#include "functii.h"

//Fie dat un vector x=(x1,x2,x3,...,xn). Sa se modifice vectorul astfel incat in final sa avem 
//a) x=(x2,x3,...,xn,x1)
void pb1() {

	int v[1000], n;
	citire(v, n);
	inserare(v, n, n, v[0]);
	stergere(v, n, 0);
	afisare(v, n);
}

//b)x=(xn,x1,x2,...,xn-1)
void pb2() {

	int v[1000], n;
	citire(v, n);
	int vn = v[n - 1];
	int aux = v[1];
	for (int i = 0; i < n; i++) {
		
		aux = v[i + 1];
		v[i + 1] = aux;	
	}
	inserare(v, n, 0, vn);
	stergere(v, n, n - 1);
	afisare(v, n);

}

//x=(x2,x1,x4,x3,...,xn,xn-1)
void pb3() {

	int v[1000], n, vn=0;
	citire(v, n);
	if ((n-1) % 2 == 0) {
		vn = v[n - 1];
	}
	
	for (int i = 0; i < n; i =i+2) {
		int aux = v[i];
		v[i] = v[i+1];
		v[i + 1] = aux;
		
	}

	if ((n - 1) % 2 == 0) {
		inserare(v, n, n - 1, vn);
		stergere(v, n, n);
	}
	afisare(v, n);
}

//Sctieti un program care elimina toate elementele nule dintr-un vector de numere intregi.
void pb4() {

	int v[1000], n;
	citire(v, n);
	for (int i = 0; i < n; i++) {
		if (v[i] == 0) {
			stergere(v, n, i);
			i--;
		}
	}
	afisare(v, n);

}

//Se da un vector v cu n elemente numere intregi. Fara a folosi un vector auxiliar, sa se mute la sfarsitul lui v elementele sale nule, pastrand 
//ordinea celorlalte elemente.
void pb5() {

	int v[1000], n;
	citire(v, n);
	for (int i = 0; i < n; i++) {
		if (v[i] == 0) {
			
			stergere(v, n, i);
			
			inserare(v, n, n - 1, 0);
		}
	}
	afisare(v, n);
}

//Se considera un sir de n numere reale. Sa se scrie un program care elimina din sir valorile ce se afla in afara intervalului [a, b];
void pb6() {
	int v[1000], n, a, b;
	citire(v, n);
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	if (b < a) {
		int aux = b;
		b = a;
		a = aux;
	}
	for (int i = 0; i < n; i++) {
		if (v[i] < a|| v[i] > b) {
			stergere(v, n, i);
			i--;
		}
	}
	afisare(v, n);
}

//Sa se scrie un program care insereaza intre oricare doua elemente ale vectorului x de numere reale, media aritmetica a vecinilor sai
void pb7() {

	int v[1000], n;
	citire(v, n);
	
	int medie = (v[0] + v[3]) / 2;
	
	for (int i = 0; i < n; i++) {
		int aux = v[2];
		v[2] = aux;
	}
	inserare(v, n, 2, medie);
	afisare(v, n);
}

