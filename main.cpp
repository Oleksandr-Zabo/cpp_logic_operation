#include <iostream>
using namespace std;

int main()
{
	float num_in;
	int hryvnias, kopecks;
	cout << "Enter your money: ";
	cin >> num_in;
	int num_in2 =num_in * 100;
	hryvnias = num_in2 / 100;
	kopecks = num_in2 %100;


	cout << "You have: " << hryvnias << " grn and " << kopecks << " kop" << endl;

	system("pause");
	return 0;
}