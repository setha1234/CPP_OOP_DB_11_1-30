// Array N D
// Array 3D
// [Block][Row][Column]
// * Syntax : DataType ArrayName[Block][Row][Column]
// Example : int arr[2][3][4];




#include<iostream>
using namespace std;
int main(){
	// Example : 
	int row,col,block;
	
	cout<<"Enter Block : ";cin>>block;
	cout<<"Enter Row : ";cin>>row;
	cout<<"Enter Columns : ";cin>>col;
	
	int arr[block][row][col];
	

	for(int i=0;i<block;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				cout<<"Enter value : ";cin>>arr[i][j][k];
			}
		}
	}

	
	for(int i=0;i<block;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				cout<<arr[i][j][k]<<" ";
			}
			cout<<endl;
		}
	}
	
	
}