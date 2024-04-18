#include"D1.h"
#include<iostream>

using namespace std;

D1::D1(int x, int y) : B(y) {
	d1 = x;
}

void D1::show_D1()
{
	cout << "class D1:" << endl;
	show_B();
	cout << "show_D1()" << endl
		<< "D1::d1 = " << d1 << endl << endl;
}