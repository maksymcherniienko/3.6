#include"D1.h"
#include"D2.h"
#pragma once
class D4 : public D2, private D1 {
	int d4;
public:
	D4(int x, int y, int z, int i, int j);
	void show_D4();
};