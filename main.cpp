#include <iostream>
using namespace std;

int main()
{
	int days_in, weeks , days;
	cout << "Enter days: ";
	cin >> days_in;
	weeks = days_in/7;
	days = days_in%7;
	cout << "Weeks: "<<weeks
		<<"\nDays: "<<days << endl;
	system("pause");
	return 0;
}