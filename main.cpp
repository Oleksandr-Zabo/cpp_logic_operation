#include <iostream>
using namespace std;

int main()
{
	double lenth, time_a,time_min, time_s, time_sec, speed;
	cout << "Calculation of running speed.\n"
		<<
		"Enter distance length (meters) = ";
	cin >> lenth;
	cout << "Enter time (min.sec) = ";
	cin >> time_a;
	cout << "Distance: " << lenth << " m.\n";

	int time_a2=time_a*100;
	time_min = time_a2/100;
	time_s = time_a2 % 100;

	time_sec = time_min * 60 + time_s;
	cout << "Time: " << time_min << " min "<< time_s
		<<" sec = "<<time_sec<<"sec.\n";
	speed = 3.6 * lenth / time_sec;
	cout << "You ran at a speed of "<< speed <<"km/h."<<endl;

	system("pause");
	return 0;
}