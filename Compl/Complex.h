#pragma once
using namespace std;
class Complex
{
private:
	double re;
	double img;
public:
	Complex();
	Complex(double, double);
	Complex(const Complex&);
	Complex operator-(Complex)const;
	Complex operator-(double)const;
	Complex operator*(Complex)const;
	Complex operator*(double)const;
	Complex operator/(Complex)const;
	Complex operator/(double)const;
	Complex operator==(Complex)const;
	Complex operator==(double)const;
	Complex operator!=(Complex)const;
	Complex operator!=(double)const;
	Complex operator<(Complex)const;
	Complex operator<(double)const;
	Complex operator>(Complex)const;
	Complex operator>(double)const;

	void afficher() const;
	~Complex();
};