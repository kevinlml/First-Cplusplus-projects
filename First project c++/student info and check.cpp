//Kevin Murillo
// Define pre-fompiled headers

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <stdio.h>

using namespace std;

int check = 0;   // Input validation statement.
// int final = 0;  // Input validation statement.
int limit = 99;
struct StudentRec  // Structure to define variables in the Student Records.
{
    string Name;                        // String data for the Name of studnet.
    string ID;                         // String name for the ID # of the student.
    double GPA;                       // Define GPA of students.
    bool compare(StudentRec valid)   // Validate data
    {
        if(Name == valid.Name && ID == valid.ID && GPA == valid.GPA) // If statment to validate data
            return true;                                            // If correct, return true
                return false;                                      // If incorrect, return false.
    }
};

void read_a_record(StudentRec students[100], int &limit)  // Void function for reading the .txt file of the student records.
{
    // Define string variables.
    StudentRec cow;
    int check = 0;
    string full, // Full name of the student
    lastnm,      // Last name of the student.
    firstnm,     // First name of student.
    id,          // ID number of student
    name;        // Name.
    double gpa;  // Define gpa.
    ifstream file; // Pre-pare opening of file.
    file.open("StudentRecords.txt"); // Open StudentRecords.txt
    if (!file) // Validation statement
    {
        cout << "Can't open input file " << endl; // Tell user that the file could not be read correctly.
        exit(1); // End program.
    }
    for(int x = 0;x <= check; x++)  // Make sure data is not displayed past amont of students.
    {
        file >> firstnm >> lastnm >> id >> gpa; // Call variables.
    }
    name = lastnm + ", " +firstnm;
    // Take variable from struct
    cow.Name = name;   // Name
    cow.ID = id;      // ID
    cow.GPA = gpa;   // GPA
    file.close();    // Close file
    check++;        // Add 1 to check
}

void print_a_record(StudentRec show) // Function to display data
{
    // Display data in orderly and readable fashion.  Left center data.
    cout
    << left << setw(15) << show.Name
    << setw(11) << show.ID
    << setw(7) << fixed << setprecision(2) <<  show.GPA << endl;
}
// Function to call Menu to display to user.

// Function to end program if user enters 5.
int end()
{
    return 0;
}
void addsrecord (StudentRec students[100], int &limit)
{
StudentRec apple;

string full; // Full name.
string lname; // Last name
string fname; // First name
string id; // ID
double gpa; // GPA

int location=limit+1;
if(location == 99)
{
    cout << "Error, array has been exceded!!" << endl;
    return;
}
limit ++;

cout << "Please enter the students last name.." << endl;
    cin >> lname;
cout << "Please enter the students first name.." << endl;
    cin >> fname;
    full = lname + ", " + fname;
    apple.Name = full;
cout << "Please enther the student Id number beginning with M" << endl;
    cin >> id;
    apple.ID = id;
cout << "Please enter the students GPA" << endl;
    cin >> gpa;
    apple.GPA = gpa;
students[location]= apple;

}
void disall (StudentRec students[100], int limit)
{

    int x;                                // Define variable
                               
    
    // Display all definition of data. Left center all data and display variables in
    cout << left << setw(5) << "No." << left << setw(15) << "Name" << setw(11) << "ID" << setw(7) << "GPA" << endl;
    cout << "--------------------------------------------------------------------\n";
    for(x = 0; x <= limit; x++)          // For statement to display 1 through 10, but is x has to be limited by number of studnets.
    {
        cout << x+1 << ".   ";          // Display 1 through 10 with a ".", with for statment parameters, will only diaplay till 7.
        print_a_record(students[x]);   // Call print_a_function to display all data read from file.
    }

}
void delsrecord ()
{
}

void findsrecord(StudentRec students[100], int limit)
{
    string input;
    cout << "Enter the ID number of the student you wish to find (M########) " << endl;
    cin >> input;
    // loop to compare strings for the search
    int count;
    for (count=0; count <= limit; count++)
    {
        if(students[count].ID == input)
        {
        cout << "Student has been found." << endl;
        cout << "Name: " << students[count].Name << endl << "GPA: " << students[count].GPA << endl <<
        "ID: " << students[count].ID << endl;
        return;
        }
        cout << count << limit << endl;
        if (count==limit)
        {
            cout << "Can't find student!" << endl;
        }
        else
        {
            continue;
        }
    }
}
void save (StudentRec students [], int limit)
{
    ofstream file;
    file.open("StudentRecords.txt");
    string temper; // A convertName for students[p].Name
    for(int p =0; p <=limit; p++)
    {
        file << students[p].Name<< " " << students[p].ID << " " << students[p].GPA << endl;
    }
    file.close ();
}
// Void statement to display menu to user.
void displayMenu(StudentRec students [100])
{
    cout << "Student Records / Shawn Razek / Copyright 2010" << endl;
    cout << endl;
    cout << "Please Choose:" << endl;
    cout << "(1) Add a student record" << endl;
    cout << "(2) Delete a student record" << endl;
    cout << "(3) Find a studnet's information" << endl;
    cout << "(4) Display all information in the database" << endl;
    cout << "(5) Exit Program" << endl;
    int input;
    cin >> input;

    // Input validation.
    while (input < 1 || input > 5)
    {
        cout << "You did not enter a correct choice!!" << endl;
            cin >> input;
    }
    // Switch statement to call function user has chosen.
    switch(input)
    {
        case 1: addsrecord(students,limit);
            save(students,limit);
        break;
        case 2: delsrecord;
        break;
        case 3: findsrecord(students,limit);
        break;
        case 4: disall(students, limit);
        break;
        case 5: end ();
        break;
        default: cout << "You did not enter a correct choice!!" << endl;
        break;
    }
}


int main()  // Open up program
{
char loop;
StudentRec students[100];
read_a_record(students, limit);
do
{
    displayMenu(students);
    cout << "To continue, Please press Y, otherwise any key to quit" << endl;
    cin >> loop;
}
while(loop =='Y' || loop =='y');
{
return 0;
}

return 0;
}