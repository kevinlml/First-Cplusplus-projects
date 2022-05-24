//Kevin Murillo
/*
SECTION II : Programing in C++ (70 points

Student Management Application

Create an application that keeps track of students, knowing that a student is
defined by : a number, a first name, a last name, an email and a phone number
where first name and last name are defined as a structure Person and phone
number is a structure Phone with the following properties :

1 - international code : 1digit
2 - country code : 2 digits
3 - regional code : 3 digit
4 - home code : 7 digits

Question 4 (5 points) : Display the student management menu that returns the
chosen option by the user.
Question 5 (10 points) : Create the students(add yourself as student).
Question 6 (20 points) : Search for a student by his number.
Question 7 (15 points) : Display the students list.
Question 8 (5 points) : Exit the application.

The menu is as follows :
Student Management Application
1. Create and add a student.
2. Search for a student by number
3. Display the student list
4 Exit the application
Enter your choice : _
Include the execution output
*/




#include "stdafx.h"
#include <iostream> 
#include <string>
using namespace std;



struct Person //first structure 
{
	string first_name, last_name;
};
struct Fhone //second structure; I know that it should be "P" but I rather to use "F"
{
		int int_code, country_code, regional_code;
	char home_code[8];
};
struct student // third structure
{
	int number;
	Person FS;
	Fhone phone;
	string email;


};
void GetStudentinformation(student s[],int size);
int studentsearch(student s[], int, int); //functions to display the student information
void DisplayStudentlist(student s[], int); // functions to display the student list



int main()
{
	char ans = 'y';
	int selection, size=0; 
	student s[100];
	
	do{
		cout << "_____________________ Student Management Application_____________________\n";
		cout <<"	(1) Create and add a student.\n";
		cout <<"	(2) Search for a student by number\n";
		cout <<"	(3) Display the student list\n";
		cout<< "	(4) Exit the application\n";
		
		cin >> selection;
		
		system("cls");
	switch(selection) // the beggining of the switch 
	{
	case 1://the beggining of the case 1
	{
		size = 0;
	do {
 GetStudentinformation(s, size);

			size = size + 1;// formula for size
			cout << "Do you want to put another student? (Press Y) ->";
			cin >> ans;
		} while (ans == 'Y' || ans == 'y');
		}
	break;
	case 2: //the beggining of the case 2
	{ int student_number;
	 do{
	cout << "Enter the student number please: \n";
		cin >> student_number;
		studentsearch(s,size,student_number);
		cout << "Do you want to repeat this operation? (Press Y) ->";
		cin >> ans;
	} while (ans == 'Y' || ans == 'y');
	}
	break;
	case 3://the beggining of the case 3
	{
		do {
			DisplayStudentlist(s, size);
			cout << "Do you want to show it again? (Press Y) ->";
			cin >> ans;
		} while (ans == 'Y' || ans == 'y');
		}
		case 4: //the beggining of the case 4
		{return 0;
		}// end of case 4
		default:
			return 0;
} //end of switch 
cout << " \n";
cout << " If you want to do another option , press Y \n";
cin >> ans;
	}//end of the first do
	while (ans == 'y' || ans == 'Y');
    return 0;
}

void GetStudentinformation(student s[],int size)
{
	
	cout << "Please enter the student number: ";
	
	cin >> s[size].number; 
	
	cout << "Enter the student's name: ";
	
	cin >> s[size].FS.first_name;
	
	cout << "Enter the student's family name: ";
	
	cin >> s[size].FS.last_name;
	
	cout << "Enter the student's e-mail adress: ";
	
	cin >> s[size].email;

	cout << "Enter the student's international code (1 digits): ";
	
	cin >> s[size].phone.int_code;
	
	cout << "Enter the student's country code (2 digits): ";
	
	cin >> s[size].phone.country_code;
	
	cout << "Enter the student's regional code (3 digits): ";
	
	cin >> s[size].phone.regional_code;
	
	cout << "Enter the student's phone (7 digits): ";

	cin >> s[size].phone.home_code;
	
	
	



};
int studentsearch(student s[], int size, int searchvalue) //searchvalue is the variable that it will found and size is how big the information is
{ 
		
for (int i = 0; i < size; i++)
{
	
	if (s[i].number == searchvalue)
	{
		cout << "Student's first name: ";
		 cout <<  s[i].FS.first_name << "\n";
		cout << "Student's family name: ";
		cout << s[i].FS.last_name << "\n";
		cout << "Student's e-mail adress: ";
		cout << s[i].email << "\n";
		cout << "Enter the student's international code#: ";
		cout << s[i].phone.int_code << "\n";
		cout << "Enter the student's country code#: ";
		cout << s[i].phone.country_code << "\n";
		cout << "Enter the student's regional code #: ";
		cout << s[i].phone.regional_code << "\n";
		cout << "Student's phone #: ";
		cout << s[i].phone.home_code << "\n";
		system("pause");
		return i;
	}
	else
	{
		cout << "Wrong student number \n";
	}
};
}
void DisplayStudentlist(student s[], int size)
{
	cout << "________________Student list____________________\n";

	for (int i = 0; i < size; i++)
	{		cout << "Student's first name: ";
	cout <<  s[i].FS.first_name <<"\n"; 
	cout << "Student's family name: ";
	cout << s[i].FS.last_name << "\n";
	cout << "Student's e-mail adress: ";
	cout << s[i].email << "\n";
	cout << "Enter the student's international code#: ";
	cout << s[i].phone.int_code << "\n";
	cout << "Enter the student's country code#: ";
	cout << s[i].phone.country_code << "\n";
	cout << "Enter the student's regional code #: ";
	cout << s[i].phone.regional_code << "\n";
	cout << "Student's phone #: ";
	cout << s[i].phone.home_code << "\n";
	
}

}