/* Name: NABIL AFLAH BOO BINTI MOHD YOSUF BOO YONG CHONG
   Matric number: A23CS0252
   Date: 2/1/2024 */

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int readFile(const char, float, int&);
int computeC(float, float, int&);
float average(float, int);
int grade(float, char, int&, int&, int&, int&);
void writeFile(float, float, char,int);

// function readFile
int readFile(const char* filename, float dataF[], int& n)
{
	fstream infile(filename, ios::in);
	
	if(!infile)
	{
		cout << "ERROR: Cannot open file.\n";
	}
	
	for(int i=0; infile >> dataF[i]; ++i)
	{
		n++;
	}
	
	infile.close();
	return n;
}

//function computeC
int computeC(float dataF[], float dataC[], int& n)
{
	for(int i=0; i<n; i++)
	{
		dataC[i] = 5.0/9.0 * (dataF[i] - 32.0);
	}
	
	return n;
}

//function average
float average(float dataC[], int n)
{
	float total=0;
	
	for(int i=0; i<n; i++)
	{
		total += dataC[i];
	}
	
	return total/n;
}

//function grade
int grade(float dataC[],char desc[], int& n, int& H, int& M, int& L)
{
	for(int i=0; i<n; i++)
	{
		if(dataC[i]>=35)
		{
			desc[i]='H';
			H++;
			
		} else if(dataC[i]<20)
		{
			desc[i]='L';
			L++;
			
		}else
		{
			desc[i]='M';
			M++;
		}
	}
	return n;
}

//function writeFile
void writeFile(float dataF[], float dataC[], char desc[], int n)
{
	fstream outfile("outputfile.txt", ios::out);
	
	if(!outfile)
	{
		cout << "ERROR: Cannot open the file";
	}
	
	outfile << setw(20) << "C(Celcius)" << setw(20) << "F(Farenheit)" << setw(20) << "Description" << endl;
	outfile << setw(20) << "==========" << setw(20) << "============" << setw(20) << "===========" << endl;
	for(int i=0; i<n; i++)
	{
		outfile << fixed << setprecision(2);
		outfile << setw(20) << dataC[i] << setw(20) << dataF[i] << setw(20) << desc[i] << endl;
	}
	
	outfile.close();
}

//main function
int main()
{
	const char* filename="dataF.txt";
	float dataF[100], dataC[100]; //array for dataF and dataC
	int n, H=0, M=0, L=0;
	float avg;
	char desc[100]; //array for description
	
	readFile(filename, dataF, n);
	
	computeC(dataF, dataC, n);
	
	avg = average(dataC, n);
	cout << fixed << setprecision(1);
	cout << "Average of the temperature in Celcius: " << avg << endl;
	
	grade(dataC, desc, n, H, M, L);
	
	cout << "Number of high temperature: " << H << endl;
	cout << "Number of medium temperature: " << M << endl;
	cout << "Number of low temperature: " << L << endl; 
	
	writeFile(dataF, dataC, desc, n);
	
	return 0;
}


