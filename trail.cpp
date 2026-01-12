#include <iostream>        // Header file for input-output (cin, cout)
using namespace std;       // Allows us to use cout, cin without std::

/*
   STRUCTURE (User-defined data type)
   Used to store different types of data together
*/
struct Student
{
    int roll;              // int data type for roll number
    string name;           // string data type for student name
    float marks;           // float data type for marks
};

int main()
{
    /*
       ARRAY OF STRUCTURES
       Can store details of multiple students
       Size = 100 (maximum students)
    */
    Student s[100];

    int choice;             // Stores user's menu choice
    int count = 0;          // Keeps track of how many students are added

    /*
       DO-WHILE LOOP
       Ensures menu runs at least once
    */
    do
    {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;      // Input from user

        /*
           SWITCH CASE
           Used for menu-driven program
        */
        switch (choice)
        {
        case 1:   // ADD STUDENT
            cout << "Enter Roll Number: ";
            cin >> s[count].roll;     // Accessing struct member using dot operator

            cout << "Enter Name: ";
            cin >> s[count].name;

            cout << "Enter Marks: ";
            cin >> s[count].marks;

            count++;                  // Increment count after adding student
            cout << "Student Added Successfully!\n";
            break;

        case 2:   // DISPLAY STUDENTS

            /*
               FOR LOOP
               Used to display all stored students
            */
            for (int i = 0; i < count; i++)
            {
                cout << "\nRoll: " << s[i].roll;
                cout << "\nName: " << s[i].name;
                cout << "\nMarks: " << s[i].marks << endl;
            }
            break;

        case 3:   // EXIT PROGRAM
            cout << "Exiting Program...\n";
            break;

        default:  // INVALID INPUT HANDLING
            cout << "Invalid Choice!\n";
        }
    }
    while (choice != 3);    // Loop runs until user chooses Exit

    return 0;               // Program ends successfully
}


