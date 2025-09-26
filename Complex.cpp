#include "Complex.h"
#include <iostream>
using namespace std;

Complex Complex::Init(double k, double l)
{
    Complex tmp;
    tmp.a = k;
    tmp.b = l;
    return tmp;
}

void Complex::Read()
{
    cout << "¬вед≥ть д≥йсну частину:";
        cin >> a;
        cout << "¬вед≥ть у€вну частину:";
        cin >> b;
}

void Complex::Display()
{
    if (b >= 0)
        cout << a << " + " << b << "i" << endl;
    else
        cout << a << " - " << -b << "i" << endl;
}

Complex Complex::add(Complex other)
{
    Complex tmp;
    tmp.a = a + other.a;
    tmp.b = b + other.b;
    return tmp;
}

Complex Complex::sub(Complex other)
{
    Complex tmp;
    tmp.a = a - other.a;
    tmp.b = b - other.b;
    return tmp;
}

Complex Complex::mul(Complex other)
{
    Complex tmp;
    tmp.a = a * other.a - b * other.b;
    tmp.b = b * other.b + b * other.b;
    return tmp;
}

Complex Complex::div(Complex other)
{
    Complex tmp;
    double denom = other.a * other.a + other.b * other.b;
    tmp.a = (a * other.a + b * other.b) / denom;
    tmp.b = (b * other.a - a * other.b) / denom;
    return tmp;
}

bool Complex::equ(Complex other)
{
    return (a == other.a && b == other.b);
}

Complex Complex::conj()
{
    Complex tmp;
    tmp.a = a;
    tmp.b = -b;
    return tmp;
}
