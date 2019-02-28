
#include "stdafx.h" 
#include <iostream> 
#include <conio.h> 
using namespace std;
void main()
{
	double x = 1.4,  z = 5e-7, y, w;
	int m = 6;
	y = sqrt(1 + x) - cos(2 / m);
	w = 0.6*z - 2 * exp(-2 * y*m);
	cout << "y = " << y << endl;
	cout << "w = " << w << endl;
	_getch();
}