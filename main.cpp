#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
	double radius, volume;

	cout << "Calculation of the volume of a sphere\n"
		<<"Enter the radius (cm): ";
	cin >> radius;
	volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
	cout << "Volume of the sphere: "<< volume<<" cm cubic" << endl;
	system("pause");
	return 0;
}