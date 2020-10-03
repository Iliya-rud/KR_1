#include "header.h"

CComplVect input() {
	CComplNumb arr[LENGTH];
	double re, im;
	for (int i = 0; i < LENGTH; i++) {
		cout << "Vvedite " << i + 1 << "-yu koordinatu (paru chisel)\t";
		cin >> re;
		cin >> im;
		CComplNumb m(re, im);
		arr[i] = m;

	}
	CComplVect vect(arr);
	cout << "Vy vveli vector";
	vect.print();
	cout << endl;
return vect;
};