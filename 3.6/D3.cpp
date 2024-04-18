#include"D3.h"

using namespace std;

D3::D3(int x, int y, int z) : D1(y,z) {
	d3 = x;
}

void D3::show_D3() {
	cout << "class D3:" << endl;
	show_D1();
	cout << "show_D3()" << endl
		<< "D3::d3 = " << d3 << endl << endl;
};