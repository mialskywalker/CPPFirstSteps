#include <iostream>
using namespace std;

int main()
{
	double sqmeters;
	cin >> sqmeters;

	double forone = 7.61;
	double result = sqmeters * forone;
	double discount = result * 0.18;
	result -= discount;

	cout << "The final price is: " << result << " lv." << endl;
	cout << "The discount is: " << discount << " lv." << endl;

	return 0;
}