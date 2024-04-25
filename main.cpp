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

    cout << result +365;

    return 0;
}