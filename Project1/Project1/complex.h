#include <iostream>
using namespace std;
class complex
{
private:
	double real; double imag;

public:
	complex()
	{
		real = 0;
		imag = 0;
	}
	complex(double r, double i)
	{
		real = r;
		imag = i;
	}
	void print()
	{
		if(imag>=0)cout << real << " + " << imag << "i\n";
		else cout << real << " " << imag << "i\n";
	}
	complex operator+(complex& ref)
	{
		return complex(real + ref.real, imag + ref.imag);
	}
	complex operator-(complex& ref)
	{
		return complex(real - ref.real, imag - ref.imag);
	}
	complex operator*(complex& ref)
	{
		return complex(real * ref.real-imag*ref.imag, real*ref.imag+imag*ref.real);
	}
	complex operator/(complex& ref)
	{
		double new_real = (real * ref.real + imag * ref.imag) / (ref.real * ref.real + ref.imag * ref.imag);
		double new_imag = (imag*ref.real-real*ref.imag)/ (ref.real * ref.real + ref.imag * ref.imag);
		return complex(new_real, new_imag);
	}
	complex operator+=(complex& ref)
	{
		return complex(real + ref.real, imag + ref.imag);
	}
	complex operator-=(complex& ref)
	{
		return complex(real - ref.real, imag - ref.imag);
	}
	complex operator*=(complex& ref)
	{
		return complex(real * ref.real - imag * ref.imag, real * ref.imag + imag * ref.real);
	}
	complex operator/=(complex& ref)
	{
		double new_real = (real * ref.real + imag * ref.imag) / (ref.real * ref.real + ref.imag * ref.imag);
		double new_imag = (imag * ref.real - real * ref.imag) / (ref.real * ref.real + ref.imag * ref.imag);
		return complex(new_real, new_imag);
	}
};