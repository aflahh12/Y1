//NABIL AFLAH BOO BINTI MOHD YOSUF BOO YONG CHONG (A23CS0252)
// LUBNA AL HAANI BINTI RADZUAN (A23CS0107) 
// 23/11/2023

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

float calc( float a,float b, int c, char d)
{
	float result;
	if (d == 'f' || d == 'F')
	{
		result = (10*a) + (6.25*b) -(5*c) - 161;
	}
	else
	{
		result = (10*a) + (6.25*b) -(5*c) + 5;
	}
	
	return result;
}


int main ()
{
	char data = 'y';
	do
	{
		cout << "\nBasal Metabolic Rate (BMR) Calculator\n\n";
		
		int age = 0;
		char g;
		float bmr = 0.00,h,w;
		
		// Read the user input
		while (age < 15 || age > 80)
		{
			cout << "Age [15 - 80] : ";
			cin >> age;
		}
		
		cout << "Gender [F @ M] : ";
		cin >> g;
		
		while (((g != 'f')&&(g != 'F')) && ((g != 'm')&&(g != 'M')))
		{
			cout << "Gender [F @ M] : ";
			cin >> g;
		}
		
		cout << "Height (cm) : ";
		cin >> h;
		cout << "Weight (kg) : ";
		cin >> w;
		
		//To calculate the bmr
		bmr = calc(w,h,age,g);
		
		cout << "\nBMR = " << fixed << setprecision(2) << bmr << "  Calories/ day (using Mifflin-St Jeor Equation)\n\n";
		
		// To display the daily calories need based on activity level
		cout << "Daily calorie needs based on activity level\n\n";
		
		int e1 = 1.2 * bmr
		, e2 = 1.375 *bmr
		, e3 = 1.465 * bmr
		, e4 = 1.5497 * bmr
		, e5 = 1.725 * bmr
		, e6 = 1.9 * bmr;
		
		ios_base::fmtflags flags = cout.flags();
		cout << left << setw(70) << "Activity Level" << "Calorie"<< endl;
		cout << left << setw(70) << "Sedentary: little or no exercise" << e1 << endl;
		cout << left << setw(70) << "Exercise 1-3 times/week" << e2 << endl;
		cout << left << setw(70) << "Exercise 4-5 times/week" << e3 << endl;
		cout << left << setw(70) << "Daily exercise or intense exercise 3-4 times/week" << e4 << endl;
		cout << left << setw(70) << "Intense exercise 6-7 times/week" << e5 << endl;
		cout << left << setw(70) << "Very intense exercise daily, or physical job" << e6 << endl;
		
		cout.flags(flags);
		
		cout <<"\nExercise: 15-30 minutes of elevated heart rate activity."
		<< "\nIntense exercise: 45-120 minutes of elevated heart rate activity." 
		<< "\nVery intense exercise: 2+ hours of elevated heart rate activity.";
		
		// To repeat or not the whole calculation
		cout << "\n\nDo you want to enter other data? [Y @ N] : ";
		cin >> data;
	}while (data == 'y' || data == 'Y');
	
	cout << "\nThank you :)";
	
	return 0;
}

