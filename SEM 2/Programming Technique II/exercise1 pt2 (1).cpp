// ? EXERCISE 1: INTRODUCTION TO CLASSES AND OBJECTS

// Programming Technique II
// Semester 2, 2023/2024

// Section: 01
// Member 1's Name: YASMIN BATRISYIA BINTI ZAHIRUDDIN    Location: SELANGOR (i.e. where are you currently located)
// Member 2's Name: NABIL AFLAH BOO BINTI MOHD YOSUF BOO YONG CHONG   Location: JOHOR
//
// Date and time of pair programming sessions:
//   8/4/2024  (Date, time and estimate duration)
//   8/4/2024 (Date, time and estimate duration)
// 
// Video link:
//   _________  

// ? Notes: Choose the debug mode "Console Program" to run the program.

#include <iostream>
#include <string>

using namespace std;

//declare class
class Subject
{
	private:
		string name; //subject name
		string code; //subject code
		int score,	//score earned for the subject
			creditHour;
		double	gradePoint,
				point;
		string grade;

		
	public:
		Subject(string n, string c, int s) : name(n), code(c), score(s), creditHour(0), gradePoint(0.0) {} //para constructure
		
		Subject() : score(0), creditHour(0), gradePoint(0.0) {} //default constructure
		
		~Subject() {} //empty destructure
		
		
		//getter
		string getName() const 
			{ return name; }

		string getCode() const
			{ return code; }

		int getScore() const
			{ return score; }


		//setter
		void setName(const string& n){
			name = n;
		}

		void setCode(string& c){
			code = c; 
		}

		void setScore(int s){
			score = s;
		}

		int getCreditHour() const{
			char lastCode = code[code.length() - 1];
			int creditHour = lastCode - '0';
			return creditHour;
		}


		
	string getGrade(int s) const {
    if (s >= 90 && s <= 100)
        return "A+";
    else if (s >= 80 && s <= 89)
        return "A";
    else if (s >= 75 && s <= 79)
        return "A-";
    else if (s >= 70 && s <= 74)
        return "B+";
    else if (s >= 65 && s <= 69)
        return "B";
    else if (s >= 60 && s <= 64)
        return "B-";
    else if (s >= 55 && s <= 59)
        return "C+";
    else if (s >= 50 && s <= 54)
        return "C";
    else if (s >= 45 && s <= 49)
        return "C-";
    else if (s >= 40 && s <= 44)
        return "D+";
    else if (s >= 35 && s <= 39)
        return "D";
    else if (s >= 30 && s <= 34)
        return "D-";
    else
        return "E";
        
}

	double getGradePoint (string g) const{
	
	if (g == "A+")
        return 4.00;
    else if (g == "A")
        return 4.00;
    else if (g == "A-")
        return 3.67;
    else if (g == "B+")
        return 3.33;
    else if (g == "B")
        return 3.00;
    else if (g == "B-")
        return 2.6;
    else if (g == "C+")
        return 2.33;
    else if (g == "C")
        return 2.00;
    else if (g == "C-")
        return 1.67;
    else if (g == "D+")
        return 1.33;
    else if (g == "D")
        return 1.00;
    else if (g == "D-")
        return 0.67;
    else 
        return 0.00;
        
    return gradePoint;
	}

};



//main function
int main()
{
	Subject course;

	string name, code;
	int score;

	double point = 0;
	
	cout << "Enter the following data: " << endl;
	cout << "  Subject name => ";
	getline(cin,name);
	course.setName(name);
	cout << endl;

	cout << "  Subject code => ";
	getline(cin,code);
	course.setCode(code);
	cout << endl;

	cout << "  Score earned => ";
	cin >> score;
	course.setScore(score);
	cout << endl;

	cout << endl
		 << endl;
	
    int creditHour = course.getCreditHour();
    double gradePoint = course.getGradePoint(course.getGrade(score));
    point = creditHour * gradePoint;
    
	cout << "THE RESULT" << endl
		 << endl;

	cout << "Subject Code : " << course.getCode() << endl;
	cout << "Subject Name : " << course.getName() << endl;
	cout << "Credit Hour  : " << course.getCreditHour()<< endl;
	cout << "Score Earned : " << course.getScore() << endl;
	cout << "Grade Earned : " << course.getGrade(score)<<endl;
	cout << "Grade Point  : " << gradePoint<<endl;
	cout << "Point Earned : " << point<< endl;
	cout << endl;

	system("pause");

	return 0;
}

