#include<iostream>
using namespace std;
int main(){
    /*
    syntax do while loop :
    do{
        code block
    }while(condition);
    
    */
    int num = 1;
    do{
        cout << num << " ";
        num++;
    }while(num <= 10); // condition is checked after the block of code is executed.



    return 0;
}