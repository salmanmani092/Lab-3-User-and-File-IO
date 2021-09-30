/*
Muhammad Salman
Fall 2021
Due: September 15
Lab 3: User and File I/O
Description: To learn how to creat a .dat file and input values in it. And then retrieve that info and calculate it and save it into another file in
the same folder.
*/


#include <iostream>   // including necessary liberaries
#include <math.h>
#include <fstream>
#include <string>

using namespace std;

float standardDev(float varstr[])    // using code for calculating standard deviation from https://www.youtube.com/watch?v=TeM7-35RVbg
{
	float mean, sum = 0, SD = 0;
	int m;
	for (m = 0; m < 4; ++m)
	{
		sum += varstr[m];
	}
	mean = sum / 4;
	for (m = 0; m < 4; ++m)
		SD += pow(varstr[m] - mean, 2);
	return sqrt(SD / 4);                       // completing standard deviation calculations
}
int main()
{
	float data1;   // declaring values from inMeanStd.dat
	float data2;
	float data3;
	float data4;

	string inputfilename = "inMeanStd.dat";   // Assuming inMeanStd.data is in the same folder
	string outputfilename = "outMeanStd.dat";  //  output file created in the same folder

	ifstream infile;          // declaring in and out files
	ofstream outfile;
	infile.open(inputfilename);                // opening both input and output files
	outfile.open(outputfilename);

	infile >> data1 >> data2 >> data3 >> data4;
	outfile << data1 << data2 << data3 << data4;

	float mean = data1 + data2 + data3 + data4 / 4;   // calculating mean with values in the file.

	int k;
	float varstr[40];
	cout << "Input your four values here: ";     // asking user to input values for standard deviation calculations
	for (k = 0; k < 4; ++k)
		cin >> varstr[k];

	cout << endl << "Standard Deviation for your values is: " << standardDev(varstr) << endl;  // Displaying Standard Deviation from values input by user	
	cout << "Your data values for Mean are:" << data1 << ","  << data2<< "," << data3 << ", and "  << data4 << endl;  // data values inputed in the file.
	cout << "Your Mean is: " << mean << endl;      // displaying result of mean calculation on screen.
	


	infile.close();       // closing files.
	outfile.close();

	

	return 0;
}

