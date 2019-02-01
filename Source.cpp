


/***********************************************
* Name: Neil Young
* Email: youngn46@students.rowan.edu
***********************************************
* Purpose:
*  In-class assignment 1
*  First part:	Convert given distance in miles into distance in kilometers
*  Second part:	Calculate the circumference of a circle
*  Third part:	Update previous program to display given distance in meters, centimeters, and millimeters
*
*  Homework
*  Fourth part: Calculate fahrenheit from celcius
*  Fifth part:	Calculate months, days, hours, minutes, and seconds from age
*  Sixth part:	Display a block letter of my first initial
***********************************************/

#include <iostream>

using namespace std; 

const float PI = 3.14159;
const float MILE_KM = 1.609;

int main()
{
	/*
		float radius, area, circumference;
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program takes in radius to compute area of circle" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input radius: ";
	cin >> radius;
	
	//Compute area to PI*radius*radius
	area = PI* radius *radius; 
	
	//Display the area 
	cout << " The area is = " << area << "\n\n";
	cout << "Program has ended"<<endl;

	system("pause");
	*/

	//Display purpose of the program
	cout << "  ************************************************\n";
	cout << "  | This program converts miles into kilometers. |\n";
	cout << "  ************************************************\n";

		float miles, km;
	
		//Get user input
		cout << "Part 1: Please input distance in miles: ";
		cin >> miles;
	
		//Convert miles to kilometers
		km = miles * MILE_KM; 
	
		//Display distance in kilometers 
		cout << miles << " miles is equal to " << km << " kilometers." <<endl <<endl;

	//Display purpose of the program
	cout << "  **********************************************************************\n";
	cout << "  | This program takes in diameter to compute circumference of circle. |\n";
	cout << "  **********************************************************************\n";

		float diameter, circumference;

		//Get user input
		cout << "Part 2: Please input diameter in inches: ";
		cin >> diameter;

		//Compute circumference from PI * diameter
		circumference = PI * diameter;

		//Display the circumference 
		cout << "The circumference of a circle with a diameter of ";
		cout << diameter << " inches equals " << circumference << " inches." <<endl <<endl;
	
	//Display purpose of the program
	cout << "  ************************************************************************\n";
	cout << "  | This program converts miles into meters, centimeters, & millimeters. |\n";
	cout << "  ************************************************************************\n";

		float meters;
		int cm, mm;

		//Get user input
		cout << "Part 3: Please input distance in miles: ";
		cin >> miles;

		//Convert miles to meters, centimeters, & millimeters
		km = miles * MILE_KM;
		meters = km * 1000;
		cm = km * 1000 * 100;
		mm = km * 1000 * 1000;

		//Display distance in meters, centimeters, & millimeters 
		cout << miles << " miles equals ";
		cout << meters << " meters, ";
		cout << cm << " centermeters, or ";
		cout << mm << " millimeters." <<endl <<endl;

	//Display purpose of the program
	cout << "  ********************************************************\n";
	cout << "  | This program takes in celsius to compute fahrenheit. |\n";
	cout << "  ********************************************************\n";

		float celsius, fahrenheit;

		//Get user input
		cout << "Part 4: Please input temperature in celsius: ";
		cin >> celsius;

		//Compute fahrenheit from celsius
		fahrenheit = (1.8 * celsius) + 32;

		//Display the temperature in fahrenheit
		cout << celsius << " degress celsius equals " << fahrenheit << " degrees fahrenheit." <<endl <<endl;

	//Display purpose of the program
	cout << "  *********************************************************************************************\n";
	cout << "  | This program takes in age to compute equivalent months, days, hours, minutes, or seconds. |\n";
	cout << "  *********************************************************************************************\n";

		float age;
		int months, days, hours, minutes, seconds;

		//Get user input
		cout << "Part 5: Please input your age in years: ";
		cin >> age;

		//Compute equivalent parts from age
		months = age * 12;
		days = age * 365.25;
		hours = days * 24;
		minutes = hours * 60;
		seconds = minutes * 60;

		//Display the age in years as equivalent parts
		cout << age << " years of age is equivalent to ";
		cout << months << " months, " << days << " days, " << hours << " hours, ";
		cout << minutes << " minutes, or " << seconds << " seconds." <<endl <<endl;

	//Display purpose of the program
	cout << "  ************************************************************\n";
	cout << "  | This program displays my first inital as a block letter. |\n";
	cout << "  ************************************************************\n";

		//Display N as a block letter
		cout << "Part 6: Please enjoy this block letter of my first initial!\n";
		cout << "  *    *\n";
		cout << "  **   *\n";
		cout << "  * *  *\n";
		cout << "  *  * *\n";
		cout << "  *   **\n";
		cout << "  *    *\n";
		cout << "These programs have ended." <<endl;

	system("pause");
	
	return 0;
}