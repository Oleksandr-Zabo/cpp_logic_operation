#include <iostream>
using namespace std;

int main()
{
	int sec_in, hours, min, sec;
	cout << "Time conversion from seconds\n"
		<<"Enter time(in seconds: ";

	cin >> sec_in;
	hours=sec_in/3600;
	min = (sec_in / 3600) / 60;
	sec = (sec_in/3600)%60;

	cout << "Hours: "<<hours<<endl
		<< "Minutes: " << hours<<endl
		<< "Seconds: " << sec << endl;
	system("pause");
	return 0;
}