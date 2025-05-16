#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    fstream file;
    int code,choose;
    char name[50];
    char sex;
    float score;
    

    do
    {
        
        cout << "|==============================================================|" << endl;
        cout << "| 1. Create a data student                                     |" << endl;
        cout << "| 2. Display the data form file                                |" << endl;
        cout << "| 0. Exit" << endl;
        cout << "| => Please choose an option : ";cin>>choose;
        switch (choose)
        {
            case 1:
            {
                file.open("exercise.txt", ios::app);
                cout << "|==============================================================|" << endl;
                cout << "|                         Input Data                           |" << endl;
                cout << "|==============================================================|" << endl;
                cout << "| Enter the code   : ";
                cin >> code;
                cout << "| Enter the name   : ";
                cin.ignore();
                cin.getline(name, 50);
                cout << "| Enter the gender : ";
                cin >> sex;
                cout << "| Enter the score  : ";
                cin >> score;
                cout << "|==============================================================|" << endl;
                // this is for input to the other file ("exercise.txt");
                file << code << "\t" << name << "\t\t" << sex << "\t" << score << endl;
                file.close();
                break;
            }
            case 2 : 
            {
                file.open("exercise.txt",ios::in);
                cout << "|==============================================================|" << endl;
                cout << "\tCode\tName\t\tGender\tScore"<<endl;
                cout << "|==============================================================|" << endl;
                string line;
                while(getline(file,line)){
                    cout<<'\t'<<line<<endl;
                    cout << "|--------------------------------------------------------------|" << endl;
                }
                cout << "|==============================================================|" << endl;

                break;
            }
        }

    } while (choose !=0);

    return 0;
}
