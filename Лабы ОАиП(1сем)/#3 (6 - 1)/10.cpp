#include "stdafx.h" 
#include <iostream> 
#include <conio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;
void main()
{
	char p, t = ' ';
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите символ: ";
	cin >> p;
	cout << endl;

	cout << setw(14) << setfill(t) << t;
	cout << setw(1) << setfill(p) << p << endl;

	cout << setw(13) << setfill(t) << t;
	cout << setw(3) << setfill(p) << p << endl;

	cout << setw(12) << setfill(t) << t;
	cout << setw(5) << setfill(p) << p << endl;

	cout << setw(11) << setfill(t) << t;
	cout << setw(7) << setfill(p) << p << endl;

	cout << setw(10) << setfill(t) << t;
	cout << setw(9) << setfill(p) << p << endl;

	cout << setw(9) << setfill(t) << t;
	cout << setw(11) << setfill(p) << p << endl;

	//Большая часть

	cout << setw(3) << setfill(t) << t;
	cout << setw(23) << setfill(p) << p << endl;
	cout << setw(4) << setfill(t) << t;
	cout << setw(21) << setfill(p) << p << endl;
	cout << setw(5) << setfill(t) << t;
	cout << setw(19) << setfill(p) << p << endl;
	cout << setw(6) << setfill(t) << t;
	cout << setw(17) << setfill(p) << p << endl;

	//Ноги

	cout << setw(5) << setfill(t) << t;
	cout << setw(7) << setfill(p) << p;
	cout << setw(5) << setfill(t) << t;
	cout << setw(7) << setfill(p) << p << endl; 

	cout << setw(4) << setfill(t) << t;
	cout << setw(6) << setfill(p) << p;
	cout << setw(9) << setfill(t) << t;
	cout << setw(6) << setfill(p) << p << endl;

	cout << setw(3) << setfill(t) << t;
	cout << setw(5) << setfill(p) << p;
	cout << setw(13) << setfill(t) << t;
	cout << setw(5) << setfill(p) << p << endl;

	cout << setw(2) << setfill(t) << t;
	cout << setw(4) << setfill(p) << p;
	cout << setw(17) << setfill(t) << t;
	cout << setw(4) << setfill(p) << p << endl;

	cout << setw(1) << setfill(t) << t;
	cout << setw(3) << setfill(p) << p;
	cout << setw(21) << setfill(t) << t;
	cout << setw(3) << setfill(p) << p << endl;
	cout << endl;

	// Концовка

	cout << endl;
	cout << endl;
	cout << setw(0) << setfill(t) << t;
	cout << "Звезда готова, Ваше Высочество";
	cout << endl;
	cout << endl;
	cout << endl;

	_getch;
}