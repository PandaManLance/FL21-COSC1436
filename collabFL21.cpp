// Menu program for Programming Final Project
// Used with Github to ensure that students know the GitHub process.

// ***************************************************************
// DO NOT MODIFY THIS SECTION
// ***************************************************************
#include <iostream>
#include <iomanip>
#include <cmath>
#include <random>
#include <fstream>
#include <string>
using namespace std;

string semester = "Fall 2021";

// ***************************************************************
// Function Prototypes Section
// Add your function protytpe here.
// ***************************************************************

void showMenu();
void menu18Smiley(int);
void menu8Cutshall(int);
// ***************************************************************
// END OF FUNCTION PROTOTYPE AREA
// ***************************************************************

int main()
{
    int choice;       // To hold a menu choice

    // Constants for the menu choices
    const int MAXCHOICE = 30;
    const int MINCHOICE = 1;
    const int EXIT = 0;

    do
    {
        // Display the menu and get the user's choice.
        showMenu();
        std::cout << "Enter your selection (0 to exit): ";
        std::cin >> choice;

        // Validate the menu selection.
        if (choice == EXIT)
        {
           std:: cout << std::endl;
            std::cout << "Thank for using the semester Menu Program. " << std::endl;
            std::cout << "Have a nice day." << std::endl;
        }
        else
        {
            switch (choice)
            {
            case 1:                 // Akopov - call to function goes here
            cout << "Hello World!\n";
                break;
            case 2:            
            cout << "Hello World!\n";// Belakhoua - call to function goes here
                break;
            case 3:                 
            cout << "Hello World!\n";// Birge - call to function goes here
                break;
            case 4:                 
            cout << "Hello World!\n";// Carpenter - call to function goes here
                break;
            case 5:                 
            cout << "Hello World!\n";// Cervantes - call to function goes here
                break;
            case 6:                 
            cout << "Hello World!\n";// Chairez - call to function goes here
                break;
            case 7:                 
            cout << "Hello World!\n";// Coons - call to function goes here
                break;
            case 8:                 // Cutshall - call to function goes here
            menu8Cutshall(8);
                break;
            case 9:                cout << "Hello World!\n"; // Gilcrease - call to function goes here
                break;
            case 10:                cout << "Hello World!\n"; // Kaiser - call to function goes here
                break;
            case 11:                cout << "Hello World!\n"; // Mukendi - call to function goes here
                break;
            case 12:               cout << "Hello World!\n";  // Naz - call to function goes here
                break;
            case 13:               cout << "Hello World!\n";  // Ricks - call to function goes here
                break;
            case 14:               cout << "Hello World!\n";  // Rodriguez - call to function goes here
                break;
            case 15:                cout << "Hello World!\n"; // Syed - call to function goes here
                break;
            case 16:                cout << "Hello World!\n"; // Underwood - call to function goes here
                break;
            case 17:                cout << "Hello World!\n"; // Whispell - call to function goes here
                break;
            case 18:                // Smiley - call to function goes here
                menu18Smiley(11);
                break;
            }
        }
    } while (choice != EXIT);

    return 0;
}

//*****************************************************************
// Definition of function showMenu which displays the menu.       *
//*****************************************************************
void menu8Cutshall(int numot)
{
          int options;
            std::cout << "Hello I'm Function 8 other wise known as function Cutshall\n" << " How are you doing today?\n";
            std::cout << "1: Great\n" << "2: Fine\n" << "3: Not Good :(\n";
            std::cin >> options;
            if (options == 1){
                std::cout << "I'm glad that you are having a great day. I wish nothing but the best for you today. You are loved!\n";
            } else if (options == 2){
                std::cout << "I hope you find more joy as the day goes on, have a lovely rest of your day\n";
            } else if (options == 3){
                std::cout << "I'm so sorry that you're not feeling good today, remember you are loved and you MATTER. Remember sadness is like a storm, it's only here for a little while and things always clear up :)\n";
            } else if ( options > 1 || options < 3){
                std::cout << "invalid answer sorry!";
            }

}
void showMenu()
{
    cout << "*******************************************************************" << endl;
    cout << "*   Welcome to the " << semester << " Program!                     *" << endl;
    cout << "*      Make a selection from the list below to see student output *" << endl;
    cout << "*                                                                 *" << endl;
    cout << "*      Enter 0 and press Enter to Quit.                           *" << endl;
    cout << "*******************************************************************" << endl;

    cout << "1.  Apokov" << endl;
    cout << "2.  Belakhoua" << endl;
    cout << "3.  Birge" << endl;
    cout << "4.  Carpenter" << endl;
    cout << "5.  Cervantes" << endl;
    cout << "6.  Chairez" << endl;
    cout << "7.  Coons" << endl;
    cout << "8.  Cutshall" << endl;
    cout << "9.  Gilcrease" << endl;
    cout << "10. Kaiser" << endl;
    cout << "11. Mukendi" << endl;
    cout << "12. Naz" << endl;
    cout << "13. Ricks" << endl;
    cout << "14. Rodriguez" << endl;
    cout << "15. Syed" << endl;
    cout << "16. Underwood" << endl;
    cout << "17. Whispell" << endl;
    cout << "18. Smiley" << endl;
    cout << endl;
}

// *****************************************************************************************
// Function Definitions Section
// *****************************************************************************************
// Add your function below.  
//    Things to check:
//          Function prototype added at the top
//          Available "includes" that could be used
//          Function documentation updated -REQUIRED!
//          Function called from showMenu()
//          All return types MUST be void.
//  
// FunctionName:  menuXXYYYYYYYYYYYY(your parameters)
//                     where XX is your menu number and
//                           YY is your last name with no spaces (camel case)           
// *****************************************************************************************

// *****************************************************************************************
// MENU ID:          18
// FUNCTION:         menu24Smiley
// DESCRIPTION:      prints the Fibonacci series as defined by the input value
// OUTPUT EXAMPLE:   User enters 9
//                   Program outputs the following:
//                      Fibonacci Sequence (9 iterations): 0, 1, 1, 2, 3, 5, 8, 13, 21
// *****************************************************************************************
void menu18Smiley(int numberOfTimes)
{
    int current = 0;
    int next = 1;
    int nextTerm;

    cout << endl;
    cout << endl;

    cout << "Fibonacci Sequence (" << numberOfTimes << " iterations): ";

    for (int i = 1; i <= numberOfTimes; i++)
    {

        if (i == 1)                    // Prints the first term
        {
            cout << current;
        }
        else if (i == 2)               // Prints the second term
        {
            cout << next;
        }
        else                          // Prints all subsequent terms
        {
            nextTerm = current + next;
            current = next;
            next = nextTerm;

            cout << nextTerm;
        }

        if ((i + 1) <= numberOfTimes)
        {
            cout << ", ";
        }
    }

    cout << endl;
    cout << endl;
}
