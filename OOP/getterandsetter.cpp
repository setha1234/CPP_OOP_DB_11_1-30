// #include<iostream>
// using namespace std;
// class Emloyee{

//     private : 
//         int id;
//         string name;
//     public : 
//     // setter function with parameter
//         void setId(int i){ 
//             id = i;
//         } 
//         void setName(string n){ 
//             name = n;
//         }
//     // getter function with return type
//         int getId(){
//             return id;
//         }
//         string getName(){
//             return name;
//         }

// };

// int main(){
//     Emloyee e;
//     e.setId(1001);
//     e.setName("John Doe");
//     cout<<"Employee ID : "<<e.getId()<<endl;
//     cout<<"Employee Name : "<<e.getName()<<endl;
// }


// Exercise 1 : Create a class called "Book" with private attributes "title" and "author". 
// Implement getter and setter methods for these attributes. 
// In the main function, create an object of the Book class, 
// set its title and author using the setter methods, 
// and then retrieve and print them using the getter methods.

#include<iostream>
using namespace std;
class Book{
    private : 
        string title;
        string author;
    public :
        void setTitle(string t){ 
            title = t;
        } 
        void setAuthor(string a){ 
            author = a;
        }
        string getTitle(){
            return title;
        }
        string getAuthor(){
            return author;
        }

};

int main(){
    Book b;
    // By input to setTitle and setAuthor function
    string t, a;
    // Title One Piece 
    // Author Eiichiro Oda
    cout<<"Enter Book Title : ";
    getline(cin, t);
    cout<<"Enter Book Author : ";
    getline(cin, a);
    b.setTitle(t);
    b.setAuthor(a);
    cout<<"Book Title : "<<b.getTitle()<<endl;
    cout<<"Book Author : "<<b.getAuthor()<<endl;
    // By hard code to setTitle and setAuthor function
    b.setTitle("The Great Gatsby");
    b.setAuthor("F. Scott Fitzgerald");
    cout<<"Book Title : "<<b.getTitle()<<endl;
    cout<<"Book Author : "<<b.getAuthor()<<endl;
    return 0;
}