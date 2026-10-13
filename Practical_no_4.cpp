
#include <iostream>
#include <string>
using namespace std;

class Student
{
    int rollNo;
    string name;
    float marks;

public:
    void accept()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void updateMarks(float &m)
    {
        marks = m;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // User input
    Student s1;

    cout << "--- Enter Student Details ---" << endl;
    s1.accept();

    // Reference
    float newMarks;
    cout << "\nEnter updated marks: ";
    cin >> newMarks;

    float &ref = newMarks;

    // Pointer
    float *ptr = &ref;

    s1.updateMarks(*ptr);

    cout << "\n--- Updated Student Details ---" << endl;
    s1.display();

    // Dynamic memory allocation
    Student *s2 = new Student;

    cout << "\n--- Enter Another Student Details ---" << endl;
    s2->accept();

    cout << "\n--- Second Student Details ---" << endl;
    s2->display();

    // Release dynamic memory
    delete s2;
    s2 = NULL;

    cout << "\nDynamic memory released successfully."
         << endl;

    return 0;
}
