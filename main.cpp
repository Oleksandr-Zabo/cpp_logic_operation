#include <iostream>
using namespace std;

int main()
{
	double scale, distance, res;
	cout << "Calculation of the distance"
		<< "between settlements.\n" 
		<< "Enter the output data:\n"
		<< "Map scale (number of kilometers in one centimeter) -> ";
	cin >> scale;
	cout << "Distance between points"
		<<" representing settlements (cm) -> ";
	cin >> distance;

	res = scale * distance;
	cout << "The distance between settlements is "<<res
		<<" km."<<endl;
	system("pause");
	return 0;
}