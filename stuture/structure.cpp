// Structure Syntax : 
/*
    struct StructureName {
        DataType Member;
        DataType Menber;
    };

*/

// #include<iostream>
// using namespace std;
// struct Employee
// {
//     /* data */
//     int id;
//     string name;
//     char gender;
//     float salary;
//     /* data */
// }p1,p2;


// int main(){
//     system("clear");
//     // calling for using 
//     // struct StructureName Object;
//     // struct Employee p1,p2,p3,p4;

//     cout<<"==========Input Employee Information==========="<<endl;
//     cout<<"Enter Employee Id : ";cin>>p1.id;
//     cout<<"Enter Employee Name : ";cin>>p1.name;
//     cout<<"Enter Employee Gender : ";cin>>p1.gender;
//     cout<<"Enter Employee Salary : ";cin>>p1.salary;

//     cout<<"==========Output Employee Information==========="<<endl;
//     cout<<"Employee ID : "<<p1.id<<endl;
//     cout<<"Employee Name : "<<p1.name<<endl;
//     cout<<"Employee Gender : "<<p1.gender<<endl;
//     cout<<"Employee Salary : "<<p1.salary<<endl;

//     cout<<"Enter Employee 2 id : ";cin>>p2.id;

//     return 0;
// }


/*
    Create a program with structure;
    Data Member : id_book author create_at title

    input and output 
    2-3
*/


// /*
// Exercise: Student Information System
// Objective: Create a program that stores and displays student data using structures and functions.

// Requirements:

// Define a structure called Student that contains:
// string name
// int age
// float grade
// Write a function void inputStudent(Student &s) to input the student data.
// Write a function void displayStudent(const Student &s) to display student data.
// In the main() function, create an array of students (e.g., 3 students), input their data using the function, and then display the data.

// */


// #include<iostream>
// using namespace std;
// //  Define the structure
// struct Student {
//     string name;
//     int age;
//     float grade;
// };
// // Function to input student data
// void inputStudent(Student &s){
//     cout<<"Enter Student name : ";getline(cin, s.name);
//     cout<<"Enter student age  : ";cin>>s.age;
//     cout<<"Enter Student grade: ";cin>>s.grade;
//     cin.ignore();
// }


// void outputStudent(Student &s){
//     cout<<"Student name : "<<s.name;
//     cout<<"\tStudent age  : "<<s.age;
//     cout<<"\tStudent grade: "<<s.grade;
    
// }

// int main(){
//     system("clear");
//     const int size = 3;
//     Student student[size];
//     cout<<"Input Details for student"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<endl;
//         inputStudent(student[i]);
//     }
//     cout<<"Output Details for student"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<endl;
//         outputStudent(student[i]);
//     }

//     return 0;
// }

#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
struct Books
{
    /* data */
    string title, author, subject;
    int book_id;

};

void inputBook(Books books[],int & count){
    int n;
    cout<<"How many books do you want to add?"<<endl;
    cout<<"Enter book to add : " ;cin>>n;
    cout<<"Input Detail for book"<<endl;
    for(int i = count;i<count + n;++i){
        
        cout<<"Title : ";cin.ignore();
        getline(cin,books[i].title);
        cout<<"Author :";cin.ignore();
        getline(cin,books[i].author);
        cout<<"Subject :";cin.ignore();
        getline(cin,books[i].subject);
        cout<<"Book ID :";
        cin>>books[i].book_id;
    }
    count+=n;
}
void displayBook(Books booksz[],int count){
    cout<<"------------------- Book List -------------------"<<endl;
    cout<<"Title"<<setw(12)
        <<"Aunthor"<<setw(12)
        <<"Subject"<<setw(12)
        <<"Book ID"<<endl;
    for(int i=0;i<count;++i){
        cout<<booksz[i].title<<setw(12)
            <<booksz[i].author<<setw(12)
            <<booksz[i].subject<<setw(12)
            <<booksz[i].book_id<<endl;
    }
}
void searchBook(Books books[],int count){
    string searchTilte;
    bool check = false;
    cout<<"Enter title to search :";cin.ignore();
    getline(cin,searchTilte);
    for (int i=0;i<count;++i){
        if(searchTilte==books[i].title){
            cout<<"Title   : "<<books[i].title<<endl;
            cout<<"Subject : "<<books[i].subject<<endl;
            cout<<"Author  : "<<books[i].author<<endl;
            cout<<"Book ID : "<<books[i].book_id<<endl;
            check = true;
            break;
        }
    }
    if(!check){
        cout<<"Book not found!"<<endl;
    }  
}

void  updateBook(Books books[],int count){
    string updatebook;
    bool check = false;
    cout<<"Enter title book for update :";getline(cin,updatebook);
    for(int i=0;i<count;++i){
        if(updatebook == books[i].title){
            cout<<"Enter New Book Ttile   : ";cin.ignore();getline(cin,books[i].title);
            cout<<"Enter New Book Author  : ";cin.ignore();getline(cin,books[i].author);
            cout<<"Enter New Book Subject : ";cin.ignore();getline(cin,books[i].subject);
            cout<<"Enter New Book Book ID : ";cin>>books[i].book_id;
            check = true;
            break;
        }
    }
    if(!check){
        cout<<"Book Not Found!"<<endl;
    }
    
}
int main(){
    system("clear");
    int MAX_BOOKS = 100;
    Books books[MAX_BOOKS];
    int count = 0;
    int choice;
    do{
        cout<<"---- Book Management Menu ----"<<endl;
        cout<<"1. Add books"<<endl;
        cout<<"2. Display All Books"<<endl;
        cout<<"3. Search Book by Title"<<endl;
        cout<<"4. Update Book by Title"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice : ";cin>>choice;
        
        switch (choice){
            case 1 : {
                // input book
                inputBook(books,count);
                break;
            }
            case 2 : {
                // output books
                displayBook(books,count);
                break;
            }
            case 3 :{
                // search book
                searchBook(books,count);
                break;
            }
            case 4 : {
                // update book]
                updateBook(books,count);
                break;
            }
            case 0 :{
                cout<<"Exiting Program.Goodbye"<<endl;
            }
            default : {
                cout<<"Invalid choice.Please try again."<<endl;
                break;
            }
        }

    }while(choice != 0);

    return 0;

}
