#include "header.h"

CComplVect& CComplVect :: operator= (const CComplVect& b) {
	for (int i = 0; i < LENGTH; i++) {
		this->a[i] = b.a[i];
	}
	return *this;                               
};
CComplVect CComplVect :: operator+(const CComplVect& b) {
	CComplVect m;
	for (int i = 0; i < LENGTH; i++) {
		m.a[i] = a[i] + b.a[i];
	}
	return m;
};
CComplVect CComplVect :: operator-(const CComplVect& b) {
	CComplVect m;
	for (int i = 0; i < LENGTH; i++) {
		m.a[i] = a[i] - b.a[i];
	}
	return m;
};
CComplVect CComplVect :: Conjugate() {
	CComplVect m;
	for (int i = 0; i < LENGTH; i++) {
		CComplNumb c(a[i].Re(), -a[i].Im());
		m.a[i] = c;
	}
	return m;
};
CComplNumb CComplVect :: operator*(CComplVect& b) {
	CComplNumb m;
	b = b.Conjugate();
	for (int i = 0; i < LENGTH; i++) {
		m = m + this->a[i] * b.a[i];
	}
	return m;
};
void CComplVect :: print() {
	CComplNumb m;
	cout << "(";
	for (int i = 0; i < LENGTH - 1; i++) {
		m = a[i];
		m.print();
		cout << ",";
	}
	m = a[LENGTH - 1];
	m.print();
	cout << ")";
};
