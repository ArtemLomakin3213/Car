#include <iostream>
#include <Windows.h>
#include <string>
#include "Car.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	Car a(250, 2001, "S00SS");
	Car b(123, 1990, "S00SS");
	a.print();
	b.print();
	return 0;
}