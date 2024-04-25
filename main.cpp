#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.141592;
	double radius, volume;

	cout << "Calculation of the volume of a sphere\n"
		<<"Enter the radius (cm): ";
	cin >> radius;
	volume = (4.0 / 3.0) * PI * pow(radius, 3);
	cout << "Volume of the sphere: "<< volume<<" cm cubic" << endl;
	system("pause");
	return 0;
}