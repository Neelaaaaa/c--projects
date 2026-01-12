#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    Student s[100];
    int choice, count = 0;

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
            cout << "Enter Roll Number: ";
            cin >> s[count].roll;

            cout << "Enter Name: ";
            cin >> s[count].name;

            cout << "Enter Marks: ";
            cin >> s[count].marks;

            count++;
            cout << "Student Added Successfully!\n";
            break;

        case 2:
            for (int i = 0; i < count; i++)
            {
                cout << "\nRoll: " << s[i].roll;
                cout << "\nName: " << s[i].name;
                cout << "\nMarks: " << s[i].marks << endl;
            }
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
