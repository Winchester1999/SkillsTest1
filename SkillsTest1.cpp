#include <iostream>
#include <conio.h> 
using namespace std;

int main ()

{
	double wageperhour;
	cout << "Pay Rate per Hour: ";
	cin >> wageperhour;
	cout << wageperhour << "$ " << "per hour" << endl;

	int hours;
	cout << "Hours of Work per Week: ";
	cin >> hours;
	cout << hours << " " << "hours a week" << endl;
	cout << "                             " << endl;

	int beforeincome;
	cout <<	"A. Total Income: $"; 
    cout << wageperhour*hours << " " << endl;
	cout << "                             " << endl;


	int taxincome;
	cout << "   Income After Taxes: $";
	cout << wageperhour*hours-wageperhour*hours*0.14 << "  " << endl;
	cout << "                             " << endl;

	int clothes;
	cout << " Net Income Spent on Clothes: $";
	cout << (wageperhour*hours-wageperhour*hours*0.14)-((wageperhour*hours-wageperhour*hours*0.14)*0.10) << "  " << endl;
	cout << "                             " << endl;

	int school;
	cout << " Net Income Spent on School Supplies: $";
	cout << (wageperhour*hours-wageperhour*hours*0.14)-((wageperhour*hours-wageperhour*hours*0.14)*0.01) << "  " << endl;
	cout << "                             " << endl;

	int savings;
	cout << " Savings: $";
	cout << (wageperhour*hours-wageperhour*hours*0.14)-((wageperhour*hours-wageperhour*hours*0.14)*0.10)*0.25 << "  " << endl;
	cout << "                             " << endl;


_getch ();
return 0;

}