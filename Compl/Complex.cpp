#include "Complex.h"
#include <iostream>
using namespace std;
Complex::Complex() : re(0), img(0) {}
Complex::Complex(double r, double i) : re(r), img(i) {}

Complex::Complex(const Complex& c)
{
    this->re = c.re;
    this->img = c.img;
}

Complex Complex::operator-(Complex c) const
{
    Complex r;
    r.re = this->re - c.re;
    r.img = this->img - c.img;
    return r;
}
Complex Complex::operator-(double d) const
{
    Complex r;
    r.re = this->re - d;
    r.img = this->img;
    return r;
}
Complex Complex::operator*(Complex c) const
{
    Complex r;
    r.re = this->re * c.re - this->img * c.img;
    r.img = this->re * c.img + this->img * c.re;
    return r;
}

Complex Complex::operator*(double d) const
{
    Complex r;
    r.re = this->re * d;
    r.img = this->img * d;
    return r;
}

// ---------- Division ----------
Complex Complex::operator/(Complex c) const
{
    double den = c.re * c.re + c.img * c.img;
    if (den == 0)
    {
        cout << "Division impossible car le denominateur est nul" << endl;
        return *this;
    }
    Complex r;
    r.re = (this->re * c.re + this->img * c.img) / den;
    r.img = (this->img * c.re - this->re * c.img) / den;
    return r;
}

Complex Complex::operator/(double d) const
{
    if (d == 0)
    {
        cout << "Division impossible" << endl;
        return *this;
    }
    Complex r;
    r.re = this->re / d;
    r.img = this->img / d;
    return r;
}
Complex Complex::operator==(Complex c) const
{
    Complex r;
    if (this->re == c.re && this->img == c.img)
        r.re = 1;
    return r;
}

Complex Complex::operator==(double d) const
{
    Complex r;
    if (this->re == d && this->img == 0)
        r.re = 1;
    return r;
}

Complex Complex::operator!=(Complex c) const
{
    Complex r;
    if (this->re != c.re || this->img != c.img)
        r.re = 1;
    return r;
}

Complex Complex::operator!=(double d) const
{
    Complex r;
    if (this->re != d || this->img != 0)
        r.re = 1;
    return r;
}
Complex Complex::operator<(Complex c) const
{
    Complex r;
    if (this->re * this->re + this->img * this->img <
        c.re * c.re + c.img * c.img)
        r.re = 1;
    return r;
}

Complex Complex::operator<(double d) const
{
    Complex r;
    if (this->re * this->re + this->img * this->img < d * d)
        r.re = 1;
    return r;
}

Complex Complex::operator>(Complex c) const
{
    Complex r;
    if (this->re * this->re + this->img * this->img >
        c.re * c.re + c.img * c.img)
        r.re = 1;
    return r;
}

Complex Complex::operator>(double d) const
{
    Complex r;
    if (this->re * this->re + this->img * this->img > d * d)
        r.re = 1;
    return r;
}

// Affichage 
void Complex::afficher() const
{
    if (this->img >= 0)
        cout << this->re << " + " << this->img << "i" << endl;
    else
        cout << this->re << " - " << -this->img << "i" << endl;
}

//  Destructeur 
Complex::~Complex() {}