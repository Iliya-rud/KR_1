#include "header.h"

void raschet() {
	CComplVect vect1, vect2, vect3;
	CComplNumb a;
	vect1 = input();
	vect2 = input();
	cout << "\n______________________________________________\n" << endl;
	cout << "Summa vectorov= ";
	vect3 = vect1 + vect2;
	vect3.print();
	vect3 = vect1 - vect2;
	cout << "\nRaznost' vectorov= ";
	vect3.print();
	a = vect1 * vect2;
	cout << "\nScalProizv vectorov= ";
	a.print();
	cout << "\n______________________________________________\n\n" << endl;
};