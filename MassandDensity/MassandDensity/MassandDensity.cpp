/*
* Name: Maximiliano Neaves
* Section: COSC/ITSE 1307
* Homework: MassandDensity
* This program accepts as input Input.dat (mass and density) and
* outputs the volume of an object using the formula:
* volume = mass / density.
*/

/*
 * Pseudo Code
 * 1. File name = "Output.txt"
 * 2. Define mass, density, and volume
 * 3. Open fileInput ("Input.dat") and 
 * fileOutput ("Output.txt")
 * 4. Set manipulators fixed and showpoint to fileOutput and set
 * precision to 2 decimal places
 * 5. Read mass and density from fileInput
 * 6. Output mass and density to fileOutput
 * 7. Find volume (volume = mass / density)
 * 8. Output volume and equation to fileOutput
 * 9. Close fileInput and fileOutput
 * 10. Output "Wrote Output.txt" to console
 */

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	// Variables
	string strFileName = "Output.txt";
	ifstream fileInput;
	ofstream fileOutput;
	double dblMass;
	double dblDensity;
	double dblVolume;

	// Algorithm
	fileInput.open("Input.dat");
	fileOutput.open(strFileName);

	fileOutput << fixed << showpoint;
	fileOutput << setprecision(2);

	fileInput >> dblMass;
	fileInput >> dblDensity;

	fileOutput << "Mass = " << dblMass << " g" << endl;
	fileOutput << "Density = " << dblDensity
		<< " g/cm^3" << endl;

	dblVolume = dblMass / dblDensity;

	fileOutput << "Volume = " << dblVolume << " cm^3" << endl;

	fileOutput << dblVolume << " = " << dblMass << " / "
		<< dblDensity << endl;

	fileInput.close();
	fileOutput.close();

	//Console output
	cout << "Wrote " << strFileName << endl;

	return 0;
}