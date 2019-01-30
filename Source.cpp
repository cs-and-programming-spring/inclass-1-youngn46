


/***********************************************
* Name: Neil Young
* Email: youngn46@students.rowan.edu
***********************************************
* Purpose:
*  In-class assignment 1
*  First part:	Convert given distance in miles into distance in kilometers
*  Second part:	Calculate the circumference of a circle
*  Third part:	Update previous program to display given distance in meters, centimeters, and millimeters
***********************************************/

#include <iostream>

using namespace std; 

const float PI = 3.14159;
const float KMCONVERSION = 1.609;
const float MCONVERSION = 1000;
const float CMCONVERSION = 100000;
const float MMCONVERSION = 1000000;


int main()
{

	float miles, km;
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program convert given distance in miles into distance in kilometers" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Part 1: Please input miles: ";
	cin >> miles;
	
	//Convert miles to kilometers
	km = miles * KMCONVERSION; 
	
	//Display distance in kilometers 
	cout << miles << " miles is equal to " << km << " kilometers" <<endl <<endl;
	cout << "Program has ended" << endl << endl;

	system("pause");

	float diameter, circumference;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in diameter to compute circumference of circle" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Part 2: Please input diameter in inches: ";
	cin >> diameter;

	//Compute circumference from PI * diameter
	circumference = PI * diameter;

	//Display the circumference 
	cout << "The circumference of a circle with a diameter of " << diameter << " inches equals " << circumference << " inches\n" <<endl;
	cout << "Program has ended" << endl << endl;

	system("pause");

	float meters, cm, mm;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program converts given distance in miles into meters, centimeters, & millimeters" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Part 3: Please input miles: ";
	cin >> miles;

	//Convert miles to meters, centimeters, & millimeters
	km = miles * KMCONVERSION;
	meters = km * MCONVERSION;
	cm = km * CMCONVERSION;
	mm = km * MMCONVERSION;

	//Display distance in meters, centimeters, & millimeters 
	cout << miles << " miles equals:\n";
	cout << meters << " meters\n";
	cout << cm << " centermeters\n";
	cout << fixed << mm << " millimeters" <<endl;
	cout << "Program has ended" << endl << endl;

	system("pause");
	
	return 0;
}