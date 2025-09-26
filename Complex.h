#pragma once
struct Complex
{
private:
	double a, b;
public:
	Complex Init(double k, double l);
	void Read();
	void Display();
	Complex add(Complex other);            
	Complex sub(Complex other);            
	Complex mul(Complex other);            
	Complex div(Complex other);            
	bool equ(Complex other);               
	Complex conj();
};

