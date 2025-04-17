//#include <iostream>
//using namespace std;
//
//// Example : 
///*
//	Datatype  a[sizearr][sizearr];
//
//*/
//
//int main(){
//	int a[3][4] = {
//					{0,1,2,3},
//					{4,5,6,7},
//					{8,9,10,11}
//				  };
//	
//	for(int i=0;i<3;i++){
//		for(int j=0;j<4;j++){
//			cout<<"a = ["<<i<<"]"<<"["<<j<<"]."<<a[i][j]<<endl;
//		}
//		cout<<endl;
//	}
//	
//}

//#include<iostream>
//using namespace std;
//main(){
//	int row,cols;
//	 
//	// Input Value : row and colums
//	cout<<"enter the rows : ";cin>>row;
//	cout<<"Enter the cols : ";cin>>cols;
//	
//		
//	int arr[row][cols];
//	
//	// Input Element from user
//	cout<<"Enter element of the "<<row<<"x"<<cols<<"array :"<<endl;
//	for(int i=0;i<row;++i){
//		for(int j = 0;j<cols;++j){
//			cin>>arr[i][j];
//		}
//	}
//	
//	cout<<"The array 2D is : "<<endl;
//	
//	for(int i =0;i<row;++i){
//		for (int j =0;j<cols;++j){
//			cout<<arr[i][j]<<"  ";
//		}
//		cout<<endl;
//	}
//	
//	
//}


//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main(){
//	int code[100][100];
//	string name[100][100];
//	int qty[100][100];
//	double price[100][100];
//	int row,col;
//	cout<<"Enter Row    : ";cin>>row;
//	cout<<"Enter Column : ";cin>>col;
//	
//	// Input Detail
//	
//	for(int i=0;i<row;i++){
//		for(int j=0;j<col;j++){
//			cout<<"******************************"<<endl;
//			cout<<"Enter Code  : ";cin>>code[i][j];
//			cout<<"Enter Name  : ";cin>>name[i][j];
//			cout<<"Enter Qty   : ";cin>>qty[i][j];
//			cout<<"Enter price : ";cin>>price[i][j];
//		}	
//	}	
//	
//	cout<<"=================Output====================\n"<<endl;
//	// Output Detail
//	cout<<setw(12)<<"Code"
//		<<setw(12)<<"Name"
//		<<setw(12)<<"Price"
//		<<setw(12)<<"Quantity"
//		<<endl;
//	
//	for(int i= 0 ;i<row;i++){
//		for(int j=0;j<col;j++){
//			cout<<setw(12)<<code[i][j]
//				<<setw(12)<<name[i][j]
//				<<setw(12)<<price[i][j]
//				<<setw(12)<<qty[i][j]
//				<<endl;
//			
//		}
//	}
//	
//	return 0;
//	
//}

#include<iostream>
using namespace std;
// create a program for booked seat 0 = X
// Pass by Value : 
/*
	Function paramenter :
	
	DataType Function(int a, parameter, ...){}
	int main(){
		Function(10,argument2,...);	
    }

*/
// Pass by array : 
/*
	arr[] = {10}
	DataType Function(int arr[]){
    }
	
	int main(){
   		
   		Function(10);
   	
   }
*/
#define RED    "\033[31m"
#define GREEN  "\033[32m"
#define YELLOW "\033[33m"
#define RESET  "\033[0m"
const int ROWS     = 10; // const con't change value 
const int COLUMNS  = 15;
void ViewSeat(char seat[ROWS][COLUMNS]){		
	for(int i=0;i<ROWS;i++){
		for(int j=0;j<COLUMNS;j++){
			if(seat[i][j]=='0'){
				cout<<GREEN<<seat[i][j]<<" "<<RESET;
			}else{
				cout<<RED<<seat[i][j]<<" "<<RESET;
			}
		}
		cout<<endl;
	}	
}
void BookedSeat(char seat[ROWS][COLUMNS]){
	int row,columns;
	cout<<"Enter seat rown   [ 0-"<<ROWS-1<<" ] : ";cin>>row;
	cout<<"Enter seat column [ 0-"<<COLUMNS-1<<" ] : ";cin>>columns;
	if(row>=0 && row<ROWS && columns>=0 && columns&&COLUMNS){
		if(seat[row][columns]=='0'){
			seat[row][columns] = 'X';
			cout<<"Complate Seat!!"<<endl;
		}else{
			cout<<"Seat is Booked"<<endl;
		}
	}else{
		cout<<"Invalid Seat!!!"<<endl;
	}	
}
void RemoveSeat(char seat[ROWS][COLUMNS]){
	int row,columns;
	cout<<"Enter seat rown   [ 0-"<<ROWS-1<<" ] : ";cin>>row;
	cout<<"Enter seat column [ 0-"<<COLUMNS-1<<" ] : ";cin>>columns;	
	if(row>=0 && row<ROWS && columns>=0 && columns&&COLUMNS){
		if(seat[row][columns]=='X'){
			seat[row][columns] = '0';
			cout<<"Complate Seat!!"<<endl;
		}else{
			cout<<"Seat is Booked"<<endl;
		}
	}else{
		cout<<"Invalid Seat!!!"<<endl;
	}
}
int main(){
	char seat[ROWS][COLUMNS];
	int op;
	// Change value seat @^@(r2 to 0
	for(int i=0;i<ROWS;i++){
		for(int j=0;j<COLUMNS;j++){
			seat[i][j]= '0';
		}
	}	
	do{
		cout<<"==============[ Movie Seat ]================"<<endl;
		cout<<"[ 1. Views Seat"<<endl;
		cout<<"[ 2. Booked Seat"<<endl;
		cout<<"[ 3. Remove Seat"<<endl;
		cout<<"[ 0. Exit Program"<<endl;
		cout<<"[ => Please choose an option : ";cin>>op;
		switch(op){
			case 0 : {
				cout<< "==============[ Thanks You!!! ]================"<<endl;
				break;
			}
			case 1 :{
				ViewSeat(seat);
				break;
			}
			case 2 :{
				BookedSeat(seat);
				break;
			}
			case 3 :{
				RemoveSeat(seat);
				break;
			}
			default : {
				cout<<"Invalid Choosing. Please try againn."<<endl;
				break;
			}
		}	
	}while(op!=0);
	return 0;
}






