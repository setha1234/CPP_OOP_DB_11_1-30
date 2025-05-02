#include<iostream>
using namespace std;
// OOP - Object Oriented Programming
// Class - A blueprint for creating objects
// Object - An instance of a class

class Student{
    private :
        // Private Access Specifier - Members of the class are not accessible from outside the class
        // Data Member
        string name;
        int age;
        float score;
    public:  // Access Specifier
        // Method Member - A function that is defined inside a class
        // create function inputStudent()
        void inputStudent(){
            cout << "Enter name of the student: ";
            cin >> name;
            cout << "Enter age of the student: ";
            cin >> age;
            cout << "Enter score of the student: ";
            cin >> score;    
        }
        // create function displayStudent()
        void displayStudent(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Score: " << score << endl;
        }
};


int main(){
    system("cls"); // Clear the console screen
    // Create an object of the class Student
    Student stu;
    // Accessing the data members of the class using the object
    // stu.name = "John Smith";
    // stu.age = 20;
    // stu.score = 95.5;
    // // Input dat members of the class using the object
    // cout << "Enter name of the student: ";
    // cin >> stu.name;
    // cout << "Enter age of the student: ";
    // cin >> stu.age;
    // cout << "Enter score of the student: ";
    // cin >> stu.score;    
    // // Displaying the data members of the class using the object
    // cout << "Name: " << stu.name << endl;
    // cout << "Age: " << stu.age << endl;
    // cout << "Score: " << stu.score << endl;


    // Call the function inputStudent() using the object
    stu.inputStudent();
    // Call the function displayStudent() using the object
    stu.displayStudent();

    return 0;
}