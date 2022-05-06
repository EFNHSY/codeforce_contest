#include "complex.h"

void main()
{
	complex a = complex(3, 4); // 3+4i
	complex b = complex(2, 3); // 2+3i;

	complex c = a + b;
	c.print();
	 c = a - b;
	c.print();
	 c = a * b;
	c.print();
	 c = a / b;
	c.print();
	
}