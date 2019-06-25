// VoluemOfWasher.cpp
// CS 4499
// Written By: Katherine Wilsdon
// 20 January 2019
// Dr. Kerby
// Description - Calculates the volume of a washer with 2 radii inputs and a height input

#include <iostream>
#include <math.h>
using namespace std;

// Computes the volume of a washer minus the volume of the hole in the washer
double VolumeOfWasher(double radius1, double radius2, double height) {
	long double pi = 3.14159265358979323846;
	return  pi * pow(radius2, 2) * height - pi * pow(radius1, 2) * height;
}


int main()
{
	// Declare variables
	double radiusOfHole;
	double radiusOfWasher;
	double heightOfWasher;

	// Gets the 2 radii and the height from the user
	cout << "Compute volume of a washer: " << endl;
	cout << "Input the radius of the hole in centimeters: " << endl;
	cin >> radiusOfHole;
	cout << "Input the radius in centimeters: " << endl;
	cin >> radiusOfWasher;
	cout << "Input the height in centimeters: " << endl;
	cin >> heightOfWasher;

	//Calcuates the volume of the washer
	double volume = VolumeOfWasher(radiusOfHole, radiusOfWasher, heightOfWasher);

	// Outputs the volume to the uer
	cout << "The volume of the washer is " << volume << " cubic centimeters." << endl;

	return 0;
}
