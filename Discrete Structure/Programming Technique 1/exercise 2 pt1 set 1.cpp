// set 1
// NABIL AFLAH BOO BINTI MOHD YOSUF BOO YONG CHONG (A23CS0252) 4/11/2023

# include <iostream>
using namespace std;
int main() {

	int number;
	int sum = 0;
	int digit;
	int firstdigit;
	
	do{
	cout << "Enter an integer number: ";
	cin >> number;
	
	
	while (number != 0) {
	 digit = number % 10;
	 
	 if ( !firstdigit) {
     cout << " + ";
     }
     cout << digit;
	
	sum += digit;
	number /= 10;
	
	firstdigit = false;
    }

    cout << " = " << sum << endl;
	
	int isMultipleof3, isMultipleof4, isMultipleof5;
	 
	 isMultipleof3 = (sum % 3 == 0);
	 isMultipleof4 = (sum % 4 == 0);
	 isMultipleof5 = (sum % 5 == 0);
	
	
	if (isMultipleof3 && isMultipleof4 && isMultipleof5)
	{
		cout << sum << " is multiples of 3, 4 and 5";
	} 
	else if (isMultipleof3 && isMultipleof4)
	{
		cout << sum << " is multiples of 3 and 4";
	}
	else if (isMultipleof3 && isMultipleof5)
	{
		cout << sum << " is multiples of 3 and 5";
	}
	else if (isMultipleof4 && isMultipleof5)
	{
		cout << sum << " is multiples of 4 and 5";
	}
	else if (isMultipleof3)
	{
		cout << sum << " is multiples of 3";
	}
	else if (isMultipleof4)
	{
		cout << sum << " is multiples of 4";
	}
	else if (isMultipleof5)
	{
		cout << sum << " is multiples of 5";
	}
	else 
	{
		cout << sum << " is not multiples of 3, 4 and 5";
	}
	
    } while ( number != 0);
	
	return 0;
}
