#include "header.h"

void autotest(void) {
	CComplVect vect1, vect2, vect3;
	CComplNumb arr1[LENGTH];
	CComplNumb arr2[LENGTH];
	CComplNumb m;
	CComplNumb a(1, 2);
	CComplNumb b(2, 3);
	CComplNumb c(1, 2);
	CComplNumb d(3, 4);
	arr1[0] = a; arr1[1] = b;
	arr2[0] = c; arr2[1] = d;
	vect1 = arr1;
	vect2 = arr2;
	m = vect1 * vect2;
	if ((m.Re() == 23) && (m.Im() == 1))
		cout << "Autotest sdan" << endl;
	else
		cout << "Autotest provalen" << endl;
};
