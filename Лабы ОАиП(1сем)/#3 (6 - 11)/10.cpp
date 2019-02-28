
#include "stdafx.h" 
#include <iostream> 
#include <conio.h> 
#include <math.h>
#include <windows.h>

using namespace std;
void main()
{
	double x1, x2, y1, y2, l;
	setlocale(LC_CTYPE, "Russian");
	printf("\n Введите координату x1 \n ");
	cin >> x1;
	printf("\n Введите координату x2 \n ");
	cin >> x2;
	printf("\n Введите координату y1 \n ");
	cin >> y1;
	printf ("\n Введите координату y2 \n ");
	cin >> y2;
	l = (sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)));
	printf("\n Расстояние между точками %f  ", l);
	cout << endl;


	_getch;
}