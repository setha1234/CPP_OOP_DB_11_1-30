// // object array : is a collection of objects of the same class.
// #include<iostream>
// using namespace std;
// class Student{
//     private : 
//         string name;
//         int age;
//     public : 
//         // Default constructor
//         Student(){
//             name = "Unknown Name";
//             age = 0;
//         }
//         // Parameterized constructor
//         Student(string n, int a){
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
//     Student students[3]; // Array of 3 Student objects

//     // set data for each student
//     students[0] = Student("Alice", 20);
//     students[1] = Student("Bob", 22);
//     students[2] = Student("Charlie", 21);

//     // Display data for each student
//     students[0].Display();
//     students[1].Display();
//     students[2].Display();


// }
#include<iostream>
using namespace std;
class Book{
    private : 
        string title, author;
        float price;
    public : 
        Book(){
            title = "Unknown Title";
            author = "Unknown Author";
            price = 0.0;
        }
        Book(string t, string a, float p){
            title = t;
            author = a;
            price = p;
        }
        void Display(){
            cout<<"Book Title : "<<title<<endl;
            cout<<"Book Author : "<<author<<endl;
            cout<<"Book Price : "<<price<<endl;
        }
};

int main(){
    system("cls");
    int size;
    cout<<"Enter number of books : ";
    cin>>size;
    Book books[size]; // Array of Book objects
    string t, a;
    float p;
    cout<<"=========================="<<endl;
    cout<<"       Book Details       "<<endl;
    cout<<"=========================="<<endl;
    // set data for each book
    for(int i=0; i<size; i++){
        cout<<"Book "<<i+1<<" : "<<endl;
        cout<<"Enter Book Title : ";
        cin.ignore(); // To ignore the newline character left in the buffer
        getline(cin, t);
        cout<<"Enter Book Author : ";
        getline(cin, a);
        cout<<"Enter Book Price : ";
        cin>>p;
        books[i] = Book(t, a, p); // Assigning each book object
    }
    cout<<"=========================="<<endl;
    cout<<"       Book List         "<<endl;
    cout<<"==========================\n"<<endl;
    // Display data for each book
    for(int i=0; i<size; i++){
        cout<<"Book "<<i+1<<endl;
        books[i].Display();
        cout<<endl;
    }
}