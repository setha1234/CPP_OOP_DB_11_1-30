#include<iostream>
using namespace std;

/*
    syntax function with parameters :
    dataType FunctionName (parameter){
        code block   
    }   
    example :
    void Add(int id,string username){
        code block
    }



*/


void Add(int id,string username){
    cout<<"ID :"<<id<<endl;
    cout<<"Username : "<<username<<endl;
}

int main(){
    
    Add(101,"Setha");


    return 0;
}