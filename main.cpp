#include <iostream>
using namespace std;

int main()
{
	int hryvnias, kopecks;
	cout << "Enter hryvnias: ";
	cin >> hryvnias;
	cout << "Enter kopecks: ";
	cin >> kopecks;

	hryvnias += kopecks / 100;
	kopecks %= 100;


	cout << "You have: "<< hryvnias<<" grn and " << kopecks << " kop" << endl;
	system("pause");
	return 0;
}