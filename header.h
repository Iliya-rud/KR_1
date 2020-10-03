#pragma once
#include <string>
#include <iostream>
#include <iostream>
#define LENGTH 2
using namespace std;

class CComplNumb {
private:
	double re, im;
public:
	CComplNumb() {
		re = 0;
		im = 0;
	};
	CComplNumb(double re, double im) {
		this->re = re;
		this->im = im;
	};
	double Re() const;
	double Im() const;
	CComplNumb& operator=(const CComplNumb& b);
	CComplNumb operator+(const CComplNumb& b);
	CComplNumb operator-(const CComplNumb& b);
	CComplNumb operator*(const CComplNumb& b);
	void print();
};
class CComplVect {
private:
	CComplNumb a[LENGTH];
public:
	CComplVect() {
		for (int i = 0; i < LENGTH; i++) {
			CComplNumb m;
			a[i] = m;
		};
	}
	CComplVect(const CComplNumb *b) {
		for (int i = 0; i < LENGTH; i++) {
			a[i] = b[i];
		}
	};
	CComplVect& operator=(const CComplVect& b);
	CComplVect operator+(const CComplVect& b);
	CComplVect operator-(const CComplVect& b);
	CComplVect Conjugate();
	CComplNumb operator*(CComplVect& b);
	void print();
};
CComplVect input(void);
void raschet(void);
void autotest(void);
