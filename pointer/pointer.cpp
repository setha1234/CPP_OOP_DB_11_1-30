//  Pointer is a variable that stores the address of anther variable.
//  Pointer is point to value address
// [*] this is a synbol pointer example : *a,*b
// [&] this synbol is catch address


// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int *ptr = &a;

//     cout<<"Value a is = "<<a<<endl; // value a
//     cout<<"Address value a = "<<&a<<endl; // address a
//     cout<<"Value Ptr is = "<<ptr<<endl; // ptr = address a
//     cout<<"Address Ptr is = "<<&ptr<<endl; // address ptr
//     cout<<"Value of Address is = "<<*ptr<<endl;// value of address 



//     return 0;
// }

// calculate value by pointer

// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// int main(){
//     system("clear");// cls
//     int a = 10,b = 20;
//     int *ptrA =  &a,
//         *ptrB =  &b;

//     // simple calculate
//     cout<<"======== [Simple Calculate] ======="<<endl;
//     cout<<"a + b = "<<a+b<<endl;
//     cout<<"a - b = "<<a-b<<endl;
//     cout<<"a * b = "<<a*b<<endl;
//     cout<<"a / b = "<<a/b<<endl;
//     cout<<"a % b = "<<a%b<<endl;
//     cout<<"======== [Calculate by Pointer] ======="<<endl;
//     cout<<"ptr A + ptr B = "<<(*ptrA +  *ptrB)<<endl;
//     cout<<"ptr A - ptr B = "<<(*ptrA -  *ptrB)<<endl;
//     cout<<"ptr A * ptr B = "<<(*ptrA *  *ptrB)<<endl;
//     cout<<"ptr A / ptr B = "<<(*ptrA /  *ptrB)<<endl;
//     cout<<"ptr A % ptr B = "<<(*ptrA %  *ptrB)<<endl;

//     return 0;
// }

// Pointer with loop by input

// #include<iostream> 
// #include<stdlib.h>
// using namespace std;
// int main(){
//     system("clear");
//     int a[10];
//     int *ptrA = a;

//     for (int i = 0;i<10;i++){
//         cout<<"Input value a["<<i<<"] = ";cin>>*(ptrA+i);// input by pointer [*]
//     }
//     cout<<"Output:"<<endl;
//     for (int i=0;i<10;i++){
//         cout<<"a["<<i<<"] = "<<*(ptrA+i)<<endl; // output by using pointer [*]
//     }

//     return 0;
// }


// Pointer with Function 

// #include<iostream>
// using namespace  std;

// // pass by reference
// void Swap(int *x,int *y){ // parameter x = 10,y = 20
//     int temp; 
//     temp = *x; // 10
//     *x    = *y; // 20
//     *y    = temp; // 10

//     cout<<"Inside Function : "<<endl;
//     cout<<"x = "<<*x<<",y ="<<*y<<endl;

//     // 3 cup    : 1 cup = nool, 2 cup =  green water, 3 cup = yellow water
                
// }
// int main(){
//     system("clear");
//     int a = 10,b = 20;
//     cout<<"Value Before in to Funciton : "<<endl;
//     cout<<"a = "<<a<<", b = "<<b<<endl;

//     Swap(&a,&b);// argument // Function

//     cout<<"Value After out from Function : "<<endl;
//     cout<<"a = "<<a<<", b = "<<b<<endl;
//     return 0;
// }


