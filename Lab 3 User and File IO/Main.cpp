/*
Muhammad Salman
Fall 2021
Due: September 15
Lab 3: User and File I/O
Description: To learn how to creat and input values in a file and retrieve that info and calculate it and save it into another file.
*/


#include <iostream>   // including necessary liberaries
#include <math.h>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int data1;
	int data2;
	int data3;
	int data4;
	int i;
	float data[4];


	string inputfilename = "inMeanStd.dat";   // Assuming inMeanStd.data is in the same folder
	string outputfilename = "outMeanStd.dat";  // 

	ifstream infile;
	ofstream outfile;
	infile.open(inputfilename);
	outfile.open(outputfilename);

	infile >> data1 >> data2 >> data3 >> data4;
	outfile << data1 << data2 << data3 << data4;

	float mean = (data1 + data2 + data3 + data4) / 4;

	
	

	cout << "The data values are:" << data1 << ","  << data2<< "," << data3 << ", and "  << data4 << endl;
	cout << "Your Mean is: " << mean << endl;
	


	infile.close();
	outfile.close();

	

	return 0;
}

