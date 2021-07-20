
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	long int a1 = 25, b1 = 30;

	double a2 = .25, b2 = .30;
	long int ans_1 = (a1 * b1);
	double ans_2 = (a2 * b2);

	cout << "From first multiplication :" << round(ans_1) << "\n";
	cout << "From second multiplication :" << round(ans_2) << "\n";

	_getch();
	return 0;
}
