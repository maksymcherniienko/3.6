#include"D2.h"
using namespace std;

D2::D2(int x, int y) : B(y) {
	d2 = x;
}

void D2::show_D2() {
	cout << "class D2:" << endl;
	show_B();
	cout << "show_D2()" << endl
		<< "D2::d2 = " << d2 << endl << endl;
}
