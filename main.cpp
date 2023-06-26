/*
Student Name : Sameera Khan
Class : CS 210 23EW5
Assignment - Working with Files
Description - Read city name and given temperature in Farenheit and convert the temperature of those cities 
				to Celsius. Output the new information in a new .txt file.
*/

#include <iostream>
#include <string>
#include<fstream>
#include<cmath>
using namespace std;

int main() {

	//Declare variables to store city name and temperature
	string city;
	int tempF, tempC;

	//Object to read from input file
	ifstream readInFile;
	//Open file FahrenheitTemperature.txt
	readInFile.open("FahrenheitTemperature.txt");

	//declare object to write contents to output file
	ofstream writeOutFile;
	//Create and open output file CelsiusTemperature.txt
	writeOutFile.open("CelsiusTemperature.txt");

	//loop to open file and read the contents
	// loop will also convert the Farenheit temp to Celsius Temp

	if (!readInFile.is_open()) {
		cout << "Not able to access the file." << endl;
		return 1;
		}
	else {
		//If inout file is open read city name and farenheit temp
		//convert the farenheit to celsius 
		//Write the city and celsius temp to output file
		//the loop will read till end of the file
		while (readInFile >> city >> tempF) {
			tempC = (int)round(((tempF - 32) * 5) / (double)9);
			writeOutFile << city << " " << tempC << endl;
		}

	}

	//close the input file and output file

	readInFile.close();
	writeOutFile.close();

	return 0;




}
