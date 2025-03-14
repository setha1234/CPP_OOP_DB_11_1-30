/*
    Array is like a variable but array can store multiple values in memory

    Syntax: datatype variable_name[size];
    datatype variable_name[] = {value1, value2, value3...};

    Example:
    int arr[5] = {10, 20, 30, 40, 50};
    int arr2[] = {10, 20, 30};
    

*/

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5] = {10, 20, 30, 40, 50};
//     cout << "Array Elements: "<<arr[0] << endl;
//     cout << "Array Elements: "<<arr[1] << endl;
//     cout << "Array Elements: "<<arr[2] << endl;
//     cout << "Array Elements: "<<arr[3] << endl;
//     cout << "Array Elements: "<<arr[4] << endl;
//     return 0;
// }

// * Array Indexing: Array starts from 0

// * Array Size: Array size is defined when it is declared or initialized.


// #include<iostream>

// using namespace std;
// int main(){
//     int arr[5] = {10, 20, 30, 40, 50};
//     for(int i = 0; i < 5; i++){
//         cout << "Array Elements: "<<arr[i] << endl;
//         // arr[i] = arr[i] + 5; // increment each element by 5
//     }
//     return 0;
// }


// exercise : 

// #include<iostream>
// #include<iomanip>
// #include<windows.h>
// using namespace std;
// int code[20],qty[20],size;
// float price[20];
// string name[20];
// int main(){
// 	int options;
	
// 	do{
// 		system("cls");	
// 		cout<<"\t\t=========================================================\n";
// 		cout<<"\t\t1.Input Products."<<endl;
// 		cout<<"\t\t2.Display Product."<<endl;
// 		cout<<"\t\t3.Search Product."<<endl;
// 		cout<<"\t\t4.Update Product."<<endl;
// 		cout<<"\t\t5.Delete Product."<<endl;
// 		cout<<"\t\t6.Insert Product."<<endl;
// 		cout<<"\t\t7.Total of Product."<<endl;
// 		cout<<"\t\t8.Exit [0]"<<endl;
// 		cout<<"\t\tPlease Choose an option :";cin>>options;
		
// 		switch(options){
// 			case 0 :{
// 				cout<<"\t\t====================ByeBye=======================\n";
// 				break;
// 			}
// 			case 1 :{
// 				cout<<"Enter size product : ";cin>>size;
// 				for(int i;i<size;i++){
// 					cout<<"Enter code product :";cin>>code[i];
// 					cout<<"Enter name product :";cin>>name[i];
// 					cout<<"Enter price prodcut :";cin>>price[i];
// 					cout<<"Enter quantity product :";cin>>qty[i];
// 				}
// 				break;
// 			}
// 			case 2 : {
// 				for (int j = 0;j<size;j++){
// 					cout<<"Code product :"<<code[j]<<endl;
// 					cout<<"Name product :"<<name[j]<<endl;
// 					cout<<"Price product :"<<price[j]<<endl;
// 					cout<<"Quantity product :"<<qty[j]<<endl;
// 				}
				
// 				break;
// 			}
//             case 3 : {
//                 int search_code;
//                 cout<<"Enter code product to search : ";cin>>search_code;
//                 bool found = false;
//                 for(int i = 0; i<size; i++){
//                     if(code[i] == search_code){
//                         found = true;
//                         cout<<"Code product :"<<code[i]<<endl;
//                         cout<<"Name product :"<<name[i]<<endl;
//                         cout<<"Price product :"<<price[i]<<endl;
//                         cout<<"Quantity product :"<<qty[i]<<endl;
//                         break;
//                     }
//                 }
//                 if(!found) cout<<"Product not found.\n";
//                 break;
//             }
//             case 4: {
//                 // update
//                 int search
//             }

// 		}
// 	}while(options!= 0);
	
	
// 	return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     cout << arr[6]<<endl;
//     cout<< arr[9]<<endl;
// int arr[5];
// arr[0]=10;
// arr[1]=20;
// arr[2]=30;
// arr[3]=40;
// arr[4]=50;
// arr[5]=60;
// arr[6]=70;
// arr[7]=80;
//  cout<<arr[0]<<endl;
//  cout<<arr[1]<<endl;
//  cout<<arr[2]<<endl;
//  cout<<arr[3]<<endl;
//  cout<<arr[4]<<endl;
//  cout<<arr[5]<<endl;
//  cout<<arr[6]<<endl;


// int i;

// int arr[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};

// // for (i=0;i<13;i++){
// //     cout<<"arr ["<<i<<"] ="<<arr[i]<<endl;
// // }




// int i,size;
// int arr[50];

// cout<<"Input Array Size: "<<endl;cin>>size;

// for (i=0;i<size;i++){
// cout<<"Input Array ["<<i<<"] = "<<endl;cin>>arr[i];

// }
// for (i=0;i<size;i++){
// cout<<"Array ["<<i<<"] = "<<arr[i]<<endl;
// }
// #include<iostream>
// using namespace std;

//     int op,size,search;
//     int k,arr[100];
//     bool check;

// int main(){

// 	system("cls");
//     do{
//         cout<<"\t\t===============Menu Option============="<<endl;
//         cout<<"\t\t1.Input Value in Array.\n";
//         cout<<"\t\t2.Display Value in Array."<<endl;
//         cout<<"\t\t3.Search Value"<<endl;
//         cout<<"\t\t4.Delete Value"<<endl;
//         cout<<"\t\t5.Update Value"<<endl;
//         cout<<"\t\t6.Exit[0]"<<endl;
// 		cout<<"\t\tPlease choose an option : ";cin>>op;
// 		switch(op){
// 			case 0: {

// 				cout<<"\t\t====================ByeBye========================\n";
//                 break;
// 			}
// 			case 1 : {
// 				cout<<"\t\t====================Input========================\n";
// 				cout<<"Enter array size: ";cin>>size;            
//                 for(int i=0;i<size;i++) {
// 					cout<<"Enter elements: ";cin>>arr[i];
// 				}
//                 break;
// 			}
// 			case 2 :{
// 				cout<<"\t\t====================Display========================\n";
//                 for(int i=0;i<size;i++) {
//                     cout<<"Elements: "<<arr[i]<<endl;
//                 }
//                 break;
// 			}
// 			case 3 : {
// 				cout<<"\t\t====================Search========================\n";
//                 cout<<"Enter the element to search: ";cin>>search;
//                 check=false;
//                 for(int i=0;i<size;i++) {
//                     if(arr[i]==search) {
//                         check=true;
//                         cout<<"Element found at position: "<<i+1<<endl;
//                         break;
//                     }
//                 }
//                 if(!check) cout<<"Element not found.\n";
//                 break;
// 			}
// 			case 4: {
// 				int Delete;
// 				cout<<"\t\t====================[Delete]===================="<<endl;
// 				cout<<"Enter the position to delete: ";cin>>Delete;
// 				check=true;
// 				for (int i=0;i<size;i++){
// 					if(Delete == arr[i] ){
// 						for(int j=0;j<size - 1;j++){
// 							arr[j] = arr[j +1];
// 						}
// 						size--;
// 					}
// 					cout<<"Element Delete successfully!!!"<<endl;
// 					check = false;
// 					break;
// 				}
// 				if(check){
// 					cout<<"Element not found.\n";
// 				}
				
// 				break;
// 			}
// 			case 5:{
// 				cout<<"\t\t======================Update========================\n";
// 				int update;
// 				cout<<"Enter the position to update: ";cin>>update;
// 				check = true;
// 				for(int i=0;i<size;i++){
// 					if(update == arr[i]){
// 						int newValue;
// 						cout<<"Enter the new value: ";cin>>newValue;
// 						arr[i] = newValue;
// 						check = false;
// 						cout<<"Element Update successfully!!!"<<endl;
//                         break;
// 					}
// 				}
// 				if(check){
//                     cout<<"Element not found.\n";
//                 }
//                 break;
// 			}
// 			default: {
//                 cout<<"\t\t====================Invalid Option========================\n";
//                 break;
//             }
// 		}
        
//     }while(op!=0);
    

//     return 0;
// }

// Create program about phone - code name price quantity
// 1. Create for storing phone
// 2. Display stock phone
// 3. Payment to Riel
// 4. Payment to Dollar



#include<iostream>
using namespace std;
int code[20],quantity[20],option,size;
string name[20];
float price[20];
double total,payment;
void CreatePhone(){
	int j=0;
	cout<<"=================================================="<<endl;
	cout<<"º\t Create a new phone"<<endl;
	cout<<"=================================================="<<endl;
	cout<<"Enter size of phone to create : ";cin>>size;
	while(j<size){
		cout<<"\nEnter phone code : ";cin>>code[j];
		cout<<"Enter phone name : ";cin>>name[j];
		cout<<"Enter phone price : ";cin>>price[j];
		cout<<"Enter phone quantity : ";cin>>quantity[j];
		j++;
	}
	cout<<"=================================================="<<endl;
	cout<<"\tPhone created successfully!"<<endl;
	cout<<"=================================================="<<endl;
}

void DisplayPhone(){
	int j=0;
	cout<<"=================================================="<<endl;
	cout<<"º\t Display all phone"<<endl;
	cout<<"=================================================="<<endl;
	cout<<"Code Phone \t Name Phone \t Price Phone \t Quantity Phone "<<endl;
	while(j<size){
		cout<<code[j]<<"\t\t"<<name[j]<<"\t\t"<<price[j]<<"\t\t"<<quantity[j]<<endl;
        j++;
	}
	cout<<"=================================================="<<endl;
	cout<<"\t\tEnd Display phone"<<endl;
	cout<<"=================================================="<<endl;

}

void PaymentRiel(){
	float riel = 4000;
	cout<<"=================================================="<<endl;
    cout<<"º\t Payment in Riel"<<endl;
    cout<<"=================================================="<<endl;
	for (int i=0;i<size;i++){
		total += price[i] * quantity[i];
	}
	// vivo = 200 * 1000 = 200,000
	// oppo = 150 * 1000 = 150,000
	// total = 200,000 + 150,000;
	payment = total * riel;
	cout<<"Total price in Riel : "<<fixed<<payment<<" Riel"<<endl;
    cout<<"=================================================="<<endl;
    cout<<"=================================================="<<endl;
}

int main(){
	system("cls");
	do{
		cout<<"\t\t\t Store Phone"<<endl;
		cout<<"1.Create Phone "<<endl;
		cout<<"2.Display Phone"<<endl;
		cout<<"3.Payment in Riel"<<endl;
		cout<<"4.Payment in Dollar"<<endl;
		cout<<"0.Exit"<<endl;
		cout<<"Enter your option : ";cin>>option;
		switch(option){
			case 0 :{
				cout<<"================================================="<<endl;
				cout<<"º\t\t\tThank you!"<<endl;
				cout<<"================================================="<<endl;
                break;
			}
			case 1 : {
				// function create or input 
				CreatePhone();

				break;
			}
			case 2 : {
				DisplayPhone();
				break;
			}
			case 3 : {
                PaymentRiel();
                break;
            }
		}	


	}while(option != 0);
	
}