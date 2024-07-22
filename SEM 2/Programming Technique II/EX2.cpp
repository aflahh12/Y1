// ? EXERCISE 2: CLASS AND OBJECT MANIPULATIONS

// Programming Technique II
// Semester 2, 2021/2022

// Section: 01
// Member 1's Name: YASMIN BATRISYIA BINTI ZAHIRUDDIN    Location: SELANGOR (i.e. where are you currently located)
// Member 2's Name: NABIL AFLAH BOO BINTI MOHD YOSUF BOO YONG CHONG    Location: JOHOR
//
// Date and time of pair programming sessions:
//   9/5/2024, 2-4p.m  (Date, time and estimate duration)
//   9/5/2024, 2-4p.m  (Date, time and estimate duration)
//
// Video link:
//   _________

// ? Notes: Choose the debug mode "Console Program" to run the program.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#define MAX_SUBJECT_COUNT 10

class Subject
{
private:
	string name;
	string code;
	int score;

public:
	Subject();
	int getScore() const;
	string getCode() const;
    string getName() const;
	int credit() const;
	string grade() const;
	double point(string) const;
	double print() const;
	bool operator< (const Subject&);
	friend int readUserInput(Subject subjects[], int);
};

int main()
{
	Subject subjects[MAX_SUBJECT_COUNT];
	int num;
	double totalPoint = 0;
	double totalCredit = 0;
	
	cout<<"How many subjects do you want to enter? => ";
	cin>>num;
	cout << endl;
	
   	readUserInput(subjects,num); 
   	
	cout << endl
		 << endl
		 << "THE RESULT"
		 << endl
		 << endl;

	// Print the output table header
	cout << left << setw(15) << "Subject Code";
	cout << left << setw(30) << "Subject Name";
	cout << left << setw(10) << "Credit";
	cout << left << setw(10) << "Score";
	cout << left << setw(10) << "Grade";
	cout << left << setw(10) << "Point";
	cout << left << setw(10) << "Sub Total";
	cout << endl
		 << endl;
		 
	
	for(int i=0; i<num; i++)
	{
		//subjects[i].print();
		totalPoint += subjects[i].print();
		totalCredit += subjects[i].credit();
	}
		double gpa = totalPoint/totalCredit;
	
	cout << endl;
	cout << "TOTAL POINT  : " << totalPoint <<  endl;
	cout << "TOTAL CREDIT : " << totalCredit << endl;
	cout << "GPA          : " << setprecision(3) << gpa << endl;

	cout << endl;
	cout << "LOWEST SUBJECT : " << endl;
	
	Subject lowest = subjects[0];
	Subject lower(Subject a, Subject b);
	for(int i=1; i<num; i++)
	{
		lowest = lower(lowest,subjects[i]);
	}
	
	lowest.print();
	
	cout << endl;

	system("pause");

	return 0;
}

// The definition of the default constructor is fully given
Subject::Subject() : name(""), code(""), score(0) {}


//getter for score
int Subject::getScore() const{ 
	return score;
}

//getter for code
string Subject::getCode() const {
    return code;
}

//getter for subject name
string Subject::getName() const {
    return name;
}

// The definition of the getter for the 'credit()' is fully given
int Subject::credit() const { return code[7] - '0'; }

// The definition of the getter for the 'grade()' is fully given
string Subject::grade() const
{
	if (score >= 90)
		return "A+";
	if (score >= 80)
		return "A";
	if (score >= 75)
		return "A-";
	if (score >= 70)
		return "B+";
	if (score >= 65)
		return "B";
	if (score >= 60)
		return "B-";
	if (score >= 55)
		return "C+";
	if (score >= 50)
		return "C";
	if (score >= 45)
		return "C-";
	if (score >= 40)
		return "D+";
	if (score >= 35)
		return "D";
	if (score >= 30)
		return "D-";
	return "E";
}

// Define a regular function that read a list of subjects from user input
int readUserInput(Subject subjects[], int num)
{

	for (int i = 0; i <num; i++) {
        cout<<"Enter info for subject #" <<i+1<< ":" <<endl;
        cout<<"Subject Code => ";
        cin>>subjects[i].code;
        cin.ignore();
        cout<<"Subject name => ";
        getline(cin,subjects[i].name);
        cout<<"Score earned => ";
        cin>>subjects[i].score;
        cout << endl;
    }

    return num;
}
	

// Define a regular function that determines the lower subject.
Subject lower(Subject a, Subject b)
{
	if (a.getScore() < b.getScore())
		return a;
	else
		return b;
}

// definition accessor method to the class named point()
double Subject::point(string grade) const{
if (grade == "A+")
        return 4.00;
    else if (grade == "A")
        return 4.00;
    else if (grade == "A-")
        return 3.67;
    else if (grade == "B+")
        return 3.33;
    else if (grade == "B")
        return 3.00;
    else if (grade == "B-")
        return 2.67;
    else if (grade == "C+")
        return 2.33;
    else if (grade== "C")
        return 2.00;
    else if (grade == "C-")
        return 1.67;
    else if (grade == "D+")
        return 1.33;
    else if (grade == "D")
        return 1.00;
    else if (grade == "D-")
        return 0.67;
    else 
        return 0.00;
}

// definition accessor method to the class named print ()
double Subject::print() const {

    int c = credit();
    string g = grade();
    double p = point(g);
    double subTotal = c * p;

    // Print information about the subject
    cout << left << setw(15) << getCode();
    cout << left << setw(30) << getName();
    cout << left << setw(10) << c;
    cout << left << setw(10) << getScore();
    cout << left << setw(10) << g;
    cout << left << setw(10) << p;
    cout << left << setw(10) << subTotal;

    cout << endl << endl;
    
    return subTotal;
}

//overloaded operator
bool Subject::operator< (const Subject &s) {
	
	if (score < s.score)
		return true;
	else
		return false;
}

