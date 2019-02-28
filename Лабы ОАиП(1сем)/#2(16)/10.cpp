#include "stdafx.h" 
#include <iostream> 
#include <conio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	int a;
	int p;
	int l;
	cin >> p;
	cin >> a;
	l = a / p;
	cout << l << endl;
	cout << a - l * p;
	std::system("pause");
	return 0;
}