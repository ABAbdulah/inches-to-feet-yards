#include <iostream>
#include <iomanip>
using namespace std;
 int  main ()
{
	
	int inches;
	int yards;
	int feet;
	cout<<"Enter the value in inches: ";
	cin >> inches;
	yards= inches/36;
	cout<<"Inches in yards= "<<yards<<endl;
	feet= inches/12;
	cout << "inches into feet= "<<  feet << endl ;
	inches=inches%12;
	
	
	return 0;
}

