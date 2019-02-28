
#include "stdafx.h" 
#include <iostream> 
#include <conio.h> 
#include <math.h>
#include <iomanip> 

using namespace std;
char p, t = ' ';
void cat();
void heart();
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	while (true) {
		cout << "1-Сердце\n2-кот\n";
		cin >> k;
		switch (k)
		{
		case 1:heart(); break;
		case 2:cat(); break;
		case 0:exit(0); break;
		default: cout << "Вы проебались, такой цифры нет\n";
			break;
		}
	}
}
void heart() {
	cout << "Введите символ: " ;
	cin >> p;
	cout << setw(15) << setfill(t) << t;
	cout << setw(3) << setfill(p) << p;
	cout << setw(3) << setfill(t) << t;
	cout << setw(3) << setfill(p) << p << endl;
	cout << setw(11) << setfill(t) << t;
	cout << setw(5) << setfill(p) << p;
	cout << setw(1) << setfill(t) << t;
	cout << setw(5) << setfill(p) << p<<endl;
	cout << setw(10) << setfill(t) << t;
	cout << setw(13) << setfill(p) << p << endl;
	cout << setw(10) << setfill(t) << t;
	cout << setw(13) << setfill(p) << p << endl;
	cout << setw(10) << setfill(t) << t;
	cout << setw(13) << setfill(p) << p << endl;
	cout << setw(11) << setfill(t) << t;
	cout << setw(11) << setfill(p) << p << endl;
	cout << setw(12) << setfill(t) << t;
	cout << setw(9) << setfill(p) << p << endl;
	cout << setw(13) << setfill(t) << t;
	cout << setw(7) << setfill(p) << p << endl;
	cout << setw(14) << setfill(t) << t;
	cout << setw(5) << setfill(p) << p << endl;
	cout << setw(15) << setfill(t) << t;
	cout << setw(3) << setfill(p) << p << endl;
	cout << setw(16) << setfill(t) << t;
	cout << setw(1) << setfill(p) << p << endl;
	cout << endl;	
	cout << endl;
	cout << setw(4) << setfill(t) << t;
	cout << "Special for my KOZA Lera <3";
	cout << endl;
	cout << endl;
	cout << endl;
}
void cat() {
	cout << "Введите символ: ";
	cin >> p;
	cout << setw(5) << setfill(t) << t;
	cout << setw(8) << setfill(t) << t;
	cout << setw(2) << setfill(p) << p<<endl;
	cout << setw(5) << setfill(t) << t;
	cout << setw(1) << setfill(p) << p;
	cout << setw(2) << setfill(t) << t;
	cout << setw(1) << setfill(p) << p;
	cout << setw(5) << setfill(t) << t;
	cout << setw(1) << setfill(p) << p << endl;
	cout << setw(5) << setfill(t) << t;
	cout << setw(4) << setfill(p) << p;
	cout << setw(5) << setfill(t) << t;
	cout << setw(1) << setfill(p) << p << endl;
	cout << setw(5) << setfill(t) << t;
	cout << setw(10) << setfill(p) << p << endl;
	cout << setw(5) << setfill(t) << t;
	cout << setw(10) << setfill(p) << p << endl;
	cout << setw(5) << setfill(t) << t;
	cout << setw(1) << setfill(t) << t;
	cout << setw(9) << setfill(p) << p << endl;
	cout << setw(6) << setfill(t) << t;
	cout << setw(3) << setfill(p) << p;
	cout << setw(3) << setfill(t) << t;
	cout << setw(3) << setfill(p) << p << endl;
	cout << setw(6) << setfill(t) << t;
	cout << setw(1) << setfill(p) << p;
	cout << setw(1) << setfill(t) << t;
	cout << setw(1) << setfill(p) << p;
	cout << setw(3) << setfill(t) << t;
	cout << setw(1) << setfill(p) << p;
	cout << setw(1) << setfill(t) << t;
	cout << setw(1) << setfill(p) << p<<endl;
	cout << setw(6) << setfill(t) << t;
	cout << setw(1) << setfill(p) << p;
	cout << setw(1) << setfill(t) << t;
	cout << setw(1) << setfill(p) << p;
	cout << setw(3) << setfill(t) << t;
	cout << setw(1) << setfill(p) << p;
	cout << setw(1) << setfill(t) << t;
	cout << setw(1) << setfill(p) << p << endl;
	cout << "Special for my KOZA Lera <3";
	cout << endl;
	cout << endl;
	cout << endl;
}