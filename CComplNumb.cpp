#include "header.h"

double CComplNumb :: Re() const {
	return re;
};
double CComplNumb:: Im() const {
	return im;
};
CComplNumb& CComplNumb :: operator=(const CComplNumb& b) {   
	this->re = b.Re();
	this->im = b.Im();
	return *this;
};
CComplNumb CComplNumb :: operator+(const CComplNumb& b) {
	CComplNumb m(this->re + b.Re(), this->im + b.Im());
	return m;
};
CComplNumb CComplNumb :: operator-(const CComplNumb& b) {
	CComplNumb m(re - b.Re(), im - b.Im());
	return m;
};
CComplNumb CComplNumb :: operator*(const CComplNumb& b) {
	CComplNumb m(re * b.Re() - im * b.Im(), re * b.Im() + im * b.Re());
	return m;
};
void CComplNumb ::print() {
	if (im >= 0)
		printf("%lg+%lgi", re, im);
	else
		printf("%lg%lgi", re, im);
};
