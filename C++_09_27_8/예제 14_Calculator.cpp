#include <iostream>
using namespace std;

#include "예제 14_Calculatorr.h"
#include "예제 14_Adder.h"

void Calculator::run()
{
	cout << "두 수를 입력하시오: >>";
	int a, b;

	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.process();
}