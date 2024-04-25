#include <iostream>
using namespace std;

int main()
{
	// +, -, *, /, %, ++, --
	// &&(and), ||(or), !(not)
    int year, result;

    cout << "Enter year: ";
    cin >> year;

    result = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));

    cout <<"Days in this year: " << result + 365 << endl;
    system("pause");

    return 0;
}