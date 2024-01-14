// NABIL AFLAH BOO BINTI MOHD YOSUF BOO YONG CHONG (A23CS0252)
// LUBNA AL HAANI BINTI RADZUAN (A23CS0107) 
// 23/11/2023

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

float loan ( float p, float i, int y)
{
	float totalLoan, month;
	totalLoan = p + (p * (i/100) * y);
	month = totalLoan / (y*12);
	
	return month;
}

int main ()
{
	char data;
	int model = 4, var, region, year;
	float  down_p, int_rate, price;
	do
	{
		cout << "Proton Car Loan Calculator\n\n";
		
		while (model > 3)
		{
			cout << "Model [ 1-X50, 2-Exora, 3-Persona] : ";
			cin >> model;
		}
		
		switch (model)
		{
			case 1 : cout << "Variants [1-1.5T Standard, 2-1.5T Premium] : ";
					 cin >> var; 
					 break;
			case 2 : cout << "Variants [1-1.6T Executive CVT, 2-1.6T Premium CVT] : ";
					 cin >> var; 
					 break;
			case 3 : cout << "Variants [1-1.6L Standard CVT, 2-1.6L Premium CVT] : ";
					 cin >> var; 
					 break;
		}
		
		cout << "Region [1-Peninsular Malaysia, 2-East Malaysia] : ";
		cin >> region;
		
		cout << "\nCar Info" << endl;
		
		switch (model)
		{
			case 1 : cout << "Model : X50" << endl;
			{
				switch (var)
				{
					case 1 : cout << "Variants : 1.5T Standard" << endl;
					{
						switch (region)
						{
							case 1 : cout << "Region : Peninsular Malaysia\n" <<
									"Paint Type : Metallic\n" <<
									"Price (MYR) : 86,300.00" << endl;
									price = 86300;
								break;
							case 2 : cout << "Region : East Malaysia\n" <<
									"Paint Type : Metallic\n" <<
									"Price (MYR) : 88,300.00" << endl;
									price = 88300;
								break;
						}
					}break;
					case 2 : cout << "Variants : 1.5T Premium" << endl;
					{
						switch (region)
						{
							case 1 : cout << "Region : Peninsular Malaysia\n" <<
									"Paint Type : Metallic\n" <<
									"Price (MYR) : 101,800.00" << endl;
									price = 101800;
								break;
							case 2 : cout << "Region : East Malaysia\n" <<
									"Paint Type : Metallic\n" <<
									"Price (MYR) : 103,800.00" << endl;
									price = 103800;
								break;
						}
					}break;
				}
			}break;
			case 2 : cout << "Model : Exora" << endl;
			{
				switch (var)
				{
					case 1 : cout << "Variants : 1.6T Executive CVT" << endl;
					{
						switch (region)
						{
							case 1 : cout << "Region : Peninsular Malaysia\n" <<
									"Paint Type : Metallic\n" <<
									"Price (MYR) : 62,800.00" << endl;
									price = 62800;
								break;
							case 2 : cout << "Region : East Malaysia\n" <<
									"Paint Type : Metallic\n" <<
									"Price (MYR) : 65,300.00" << endl;
									price = 65300;
								break;
						}
					}break;
					case 2 : cout << "Variants : 1.6T Premium CVT" << endl;
					{
						switch (region)
						{
							case 1 : cout << "Region : Peninsular Malaysia\n" <<
									"Paint Type : Metallic\n" <<
									"Price (MYR) : 69,800.00" << endl;
									price = 69800;
								break;
							case 2 : cout << "Region : East Malaysia\n" <<
									"Paint Type : Metallic\n" <<
									"Price (MYR) : 72,300.00" << endl;
									price = 72300;
								break;
						}
					}break;
				}
			}break;
			case 3 : cout << "Model : Persona" << endl;
			{
				switch (var)
				{
					case 1 : cout << "Variants : 1.6L Standard CVT" << endl;
					{
						switch (region)
						{
							case 1 : cout << "Region : Peninsular Malaysia\n" <<
									"Paint Type : Metallic\n" <<
									"Price (MYR) : 47,800.00" << endl;
									price = 47800;
								break;
							case 2 : cout << "Region : East Malaysia\n" <<
									"Paint Type : Metallic\n" <<
									"Price (MYR) : 49,800.00" << endl;
									price = 49800;
								break;
						}
					}break;
					case 2 : cout << "Variants : 1.6L Premium CVT" << endl;
					{
						switch (region)
						{
							case 1 : cout << "Region : Peninsular Malaysia\n" <<
									"Paint Type : Metallic\n" <<
									"Price (MYR) : 58,300.00" << endl;
									price = 58300;
								break;
							case 2 : cout << "Region : East Malaysia\n" <<
									"Paint Type : Metallic\n" <<
									"Price (MYR) : 60,300.00" << endl;
									price = 60300;
								break;
						}
					}break;
				}
			}break;
		}
		
		cout << "\nDown Payment (MYR) : ";
		cin >> down_p;
		cout << "Interest Rate (%) : ";
		cin >> int_rate;
		cout << "Repayment period (in year/s) : ";
		cin >> year;
		
		float newPrice = price - down_p;
		
		float monthly = loan(newPrice,int_rate,year);
		cout << "\nMONTHLY INSTALLMENT (MYR) : " << fixed << setprecision(2) << monthly;
		
		
		
		cout << "\n\nDo you want to enter other data : ";
		cin >> data;
		cout << "\n\nThank You :)" << endl;
	 }while (data == 'y' || data == 'Y');
	
	return 0;
}





















