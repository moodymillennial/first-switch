////////////////////////////////////////////////////////////////////////////////////
// Joshua Stromberg
// Input: User inputs letter grade
// Output: User receives message telling them their grade percentage and
//         confirmation of their letter grade that they had input
// Process: Through switch statements the program reads the user input and outputs
//          a statement related to what was inputed, valid or not.
////////////////////////////////////////////////////////////////////////////////////
 
#include <iostream>
using namespace std;
 
int main()
{
    // prompt user to enter their letter grade
    cout << "Please enter your letter grade: ";
    // declare grade as a character input and store user input
    char grade;
    cin >> grade;
     
    // switch statements to display percentage grade based on letter input
    switch(grade)
    {
        case 'A' :
            cout << "You have a grade between 90 and 100 percent." << endl << "Your letter grade is " << grade << endl;
            break;
        case 'B' :
            cout << "You have a grade between 80 and 89.99 percent." << endl << "Your letter grade is " << grade << endl;
            break;
        case 'C' :
            cout << "You have a grade between 70 and 79.99 percent." << endl << "Your letter grade is " << grade << endl;
            break;
        case 'D' :
            cout << "You have a grade between 60 and 69.99 percent." << endl << "Your letter grade is " << grade << endl;
            break;
        case 'F' :
            cout << "You have a grade that's less than 60 percent" << endl << "Your letter grade is " << grade << endl;
            break;
             
            // if user enters an invalid letter grade like "J", this will be displayed
        default :
            cout << "Invalid grade" << endl;
    }
     
    return 0;
     
}
