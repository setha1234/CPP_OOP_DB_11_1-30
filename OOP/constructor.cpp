//  Constructor is a special member function of a class that initializes objects of that class.
//  It is called automatically when an object of the class is created.
//  Constructor have 2 types : Default constructor and parameterized constructor.
// #include<iostream>
// using namespace std;
// class Book{
//     private : 
//         string title;
//         string author;
//     public : 
//         // Default constructor
//         Book(){
//             title = "Unknown Title";
//             author = "Unknown Author";
//         }
//         // setter to set title and author
//         void setTitle(string t){ 
//             title = t;
//         }
//         void setAuthor(string a){ 
//             author = a;
//         }
//         void Display(){
//             cout<<"Book Title : "<<title<<endl;
//             cout<<"Book Author : "<<author<<endl;
//         }
// };
// int main(){
//     system("cls");
//     Book b;
//     // By input to setTitle and setAuthor function
//     string t, a;
//     // Title One Piece
//     // Author Eiichiro Oda
//     cout<<"Enter Book Title : ";
//     getline(cin, t);
//     cout<<"Enter Book Author : ";
//     getline(cin, a);
//     b.setTitle(t);
//     b.setAuthor(a);
//     // Display the book details
//     b.Display();
    
//     return 0;
// }


// Constructor with parameters
// #include<iostream>
// using namespace std;
// class Person{
//     private : 
//         string name;
//         int age;
//     public : 
//         // Parameterized constructor
//         Person(string n, int a){
//             name = n;
//             age = a;
//         }
//         void Display(){
//             cout<<"Name : "<<name<<endl;
//             cout<<"Age : "<<age<<endl;
//         }
// };

// int main(){
//     system("cls");
//     // Creating an object of Person class using parameterized constructor
//     Person p("John Doe", 30);
//     // Display the person details
//     p.Display();
    
//     return 0;
// }

// Exercise 1 :
/*
    Create a class named "Car" with attributes "make", "model", and "year".
    Implement a default constructor that initializes these attributes to default values.
    Create a parameterized constructor that allows setting these attributes when creating an object.
    Write a main function to test both constructors.

*/

#include<iostream>
using namespace std;
class Car{
    private : 
    string make;
    string model;
    int year;
    public : 
        // Default constructor
        Car(){
            make = "Unknown Make";
            model = "Unknown Model";
            year = 0;
        }
        // Parameterized constructor
        Car(string m, string mo, int y){
            make = m;
            model = mo;
            year = y;
        }
        void Display(){
            cout<<"Car Make : "<<make<<endl;
            cout<<"Car Model : "<<model<<endl;
            cout<<"Car Year : "<<year<<endl;
        }
        
    
};
int main(){
    system("cls");
    // Create an object of Car class using default constructor
    Car car1;
    car1.Display();
    // Create an object of Car class using parameterized constructor
    Car car2("Toyota", "Supra", 2014);
    car2.Display();
    Car car3("Honda", "Civic", 2020);
    car3.Display();
    return 0;
}