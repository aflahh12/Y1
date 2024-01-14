//set 3
//NABIL AFLAH BOO BINTI MOHD YOSUF BOO YONG CHONG (A23CS0252) 4/11/2023

#include <iostream>
using namespace std;
int main(){
	int number;
	
	cout << "Enter an integer number: ";
	cin >> number;
	
	int digit;
	int product = 1;
	int firstdigit;
	
	while ( number != 0){
		digit = number % 10;

		if (!firstdigit){
			cout << " * ";
		}
		cout << digit;
		
		number /= 10;
		product *= digit; 
		
		firstdigit = false;
	}
	
	cout << " = " << product << endl;
	
	int isMultipleof4, isMultipleof5, isMultipleof7;
	
	 isMultipleof4 = (product % 4 == 0);
	 isMultipleof5 = (product % 5 == 0);
	 isMultipleof7 = (product % 7 == 0);
	
	if (isMultipleof4 && isMultipleof5 && isMultipleof7){
		cout << product << " is multiples of 4, 5 and 7";
	} else if (isMultipleof4 && isMultipleof5){
	    cout << product << " is multiples of 4 and 5";
	} else if (isMultipleof4 && isMultipleof7){
		cout << product << " is multiples of 4 and 7";
	} else if (isMultipleof5 && isMultipleof7){
		cout << product << " is multiples of 5 and 7";
	} else if (isMultipleof4){
		cout << product << " is multiples of 4";
	} else if (isMultipleof5) {
		cout << product << " is multiples of 5";
	} else if (isMultipleof7){
		cout << product << " is multiples of 7";
	} else{
		cout << product << " is not multiples of 4, 5 and 7";
	}
	
	return 0;
}
