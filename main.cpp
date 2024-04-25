#include <iostream>
using namespace std;


int main()
{
	double length, width, height, volume;
	cout << "Calculation of the volume "
		<<"of a parallelepiped." << endl
		<<"Enter the output data:\n"
		<<"Length (cm) -> ";
	cin >> length;
	cout <<"Width (cm) -> ";

	cin >> width;
	cout << "Height (cm) -> ";
	cin >> height;

	volume = length * width * height;

	cout << "Volume: "<< volume <<"0 cubic cm." << endl;
	system("pause");
	return 0;
}