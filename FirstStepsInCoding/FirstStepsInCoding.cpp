#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double rad;
	cin >> rad;

	double degree = rad * 180 / 3.14;

	cout << round(degree) << endl;

	return 0;
}