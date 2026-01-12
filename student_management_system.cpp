#include <iostream>
using namespace std;

// STRUCTURE
struct Student
{
    int roll;
    string name;
    float marks;
};

// FUNCTION TO ADD STUDENT
void addStudent(Student s[], int &count)
{
    cout << "Enter Roll Number: ";
    cin >> s[count].roll;

    cout << "Enter Name: ";
    cin >> s[count].name;

    cout << "Enter Marks: ";
    cin >> s[count].marks;

    count++;   // Updates original count
    cout << "Student Added Successfully!\n";
}

// FUNCTION TO DISPLAY STUDENTS
void displayStudents(Student s[], int count)
{
    if (count == 0)
    {
        cout << "No students to display!\n";
        return;
    }

    for (int i = 0; i < count; i++)
    {
        cout << "\nRoll: " << s[i].roll;
        cout << "\nName: " << s[i].name;
        cout << "\nMarks: " << s[i].marks << endl;
    }
}

int main()
{
    Student s[100];     // Array of structures
    int choice;
    int count = 0;

    do
    {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent(s, count);      // Function call
            break;

        case 2:
            displayStudents(s, count); // Function call
            break;

        case 3:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}
