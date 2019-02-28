
#include "stdafx.h" 
#include <iostream> 
#include <conio.h> 
using namespace std;
void main()
{
	double d = 5e-9, a = 1.5, t, y;
	int  c = 9, j = 4;
	t = d*c + a*sqrt(c-1);	
	y = ((0.5*t)/d) +exp(a);
	cout << "t = " << t << endl;
	cout << "y = " << y << endl;
	_getch();
}