#include <iostream>
#include <fstream> // header file for create file
using namespace std;
int main(){
    // ofstream file("sample.txt"); // ofstream use for write to the sample file
    // file<<"Hello, I am testing"<<endl;
    // file.close();



    // ifstream file("sample.txt"); // ifstream use for read from the sample file
    // string line;
    // while(getline(file,line)){
    //     cout<<line<<endl;
    // }

    // file.close();


    fstream file;
    string line;
    file.open("sample.txt",ios::in);

    // ios::in mode for show in example file
    // ios::out mode for input to the example file
    // file<<"Hello guy"<<endl;
    while(getline(file,line)){
        cout<<line<<endl;
    }

    // file<<"today is Sunday"<<endl;
    // file<<"Today is sunny"<<endl;
    // file<<"Hello guy"<<endl;
    file.close();

    

    return 0;
}