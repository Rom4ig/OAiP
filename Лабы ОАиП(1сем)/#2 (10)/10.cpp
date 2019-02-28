
#include "stdafx.h" 
#include <iostream> 
#include <conio.h> 
using namespace std;
void main()
{
	double z = 1.7,  a = 4e-8, y, s;
	int n = 3, m = 3;
	y = (z + log(z)) / (exp(-3) + sqrt(a));
	s = (1 + m*n) / log(1 + z);
  cout << "y = " << y << endl;
  cout << "s = " << s << endl;
  _getch();
}
