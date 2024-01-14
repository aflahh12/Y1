//NABIL AFLAH BOO BINTI MOHD YOSUF BOO YONG CHONG
//A23CS0252

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void dispStatus(int);
void getInput(int&, int&, int&, int&);
void dispOutput(int);
int calcAverage(int, int);

//task 1 
void dispStatus(int activeCases)
{
	
	if (activeCases > 40){
		cout << "Status" <<setw(10) << ": Red zone" <<endl;
	} else if ( (activeCases >= 21) && (activeCases <= 40) ){
		cout << "Status" <<setw(10) << ": Orange zone" << endl;
	} else if ( (activeCases >=1) && (activeCases <= 20) ){
		cout << "Status" <<setw(10) << ": Yellow zone" << endl;
	} else{
		cout << "Status" <<setw(10) << ": Green zone" << endl; 
	}
}

//task 2 
void getInput(int &total_cases, int &new_cases, int &totalDeath, int &totalRecovered)
{
	cout << "Total cases" << setw(6) << ": ";
	cin >> total_cases;
	
	cout << "New cases" <<setw(8) << ": "; 
	cin >> new_cases;
	
	cout <<"Total death" <<setw(6) << ": ";
	cin >> totalDeath;
	
	cout <<"Total recovered: ";
	cin >> totalRecovered;
}

//task 3 
void dispOutput(int activeCases)
{
	dispStatus(activeCases);	
}

//task 4 
int calcAverage(int numStates, int totalActivecases)
{
	int average = totalActivecases / numStates;
	return average;
}

//main function
int main()
{
	int activeCases, totalActivecases=0, numStates=0, total_cases, new_cases, totalDeath, totalRecovered, highest=-999;
	string state, highestState;
	char result;
	
  do
  {	
	cout << "<<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>>> \n";
	cout << "State name" << setw(7) << ": ";
	getline(cin,state);
	getInput(total_cases, new_cases, totalDeath, totalRecovered);
	activeCases = total_cases + new_cases - totalDeath - totalRecovered;
	if(activeCases > highest){
		highest = activeCases;
		highestState = state;
	}
	
	cout << "\n<<<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>>>>>\n";
	cout << "Active cases" << setw(5) << ": " << activeCases << endl;
	dispOutput(activeCases);
	totalActivecases += activeCases;
	numStates += 1;
	cin.ignore();
	cout << "\nPress <ENTER> to continue...";
  }while(cin.get() == '\n');
  
        calcAverage(numStates, totalActivecases);
		cout << "\n<<<<<<<<<<<<<<< ACTIVE CASES >>>>>>>>>>>>\n";
		cout << "Total" << setw(10) << ": " << totalActivecases << endl;
		cout << "Highest"<< setw(8) << ": " << highest <<" ("<< highestState <<")" << endl;
		cout << "Average for " << numStates << " states: " << calcAverage(numStates, totalActivecases);
	
	return 0;
}
