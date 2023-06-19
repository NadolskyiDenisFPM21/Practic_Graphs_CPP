#include <cmath>
#include "functions.h"
double f(double x) {
	double y;

	if (x > 6 && x < 8)
		y = pow(exp(-3 + x), 1 / 3) * (1 / (sqrt(x * x + pow(x, 4) + log10(abs(x - 1.2)))));
	else if (x > -3 && x < 0)
		y = pow(x, -6);
	else
		y = pow(x, 15) - 2;

	return y;
}

//double f(double x) {
//	return cos(x);
//}