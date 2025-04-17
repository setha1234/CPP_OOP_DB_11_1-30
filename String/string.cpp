// * String : is a text/character
// char word[] = "H,e,l,l,o, ,w,o,r,l,d";
// char word[2] = 'a' : Hallo world;
// string 


#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;
int main(){
// Example with DataType with Char
//	char word[] = "Hi, Guy";
//	cout<<word<<endl;
//	word[4] = 'H';
//	cout<<word;

// example with string
	
//	string Greeting = "Hello, World";
//	cout<<Greeting<<endl;
	
//	Greeting.replace(7,6, "setha");// Replace is want to change text/character start with index
//	cout<<Greeting<<endl;

	
//	
//	cout<<Greeting.length()<<endl;
//	cout<<Greeting.size()<<endl;
//	cout<<"Empty"<<Greeting.empty();

//	string sub = Greeting.substr(0,8);
//	cout<<"Sub String :"<<sub<<endl;
//	
//	size_t fing = Greeting.find("W");
//	cout<<"FIND WORD : "<<fing<<endl;
//	
//	size_t n = Greeting.rfind("H");
//	cout<<"Find Position : "<<n<<endl;


	// string number = "123456789";
	// int numbers = 123456789;
	
	// reverse(number.begin(), number.end());

	// cout<<number<<endl;
	// // reverse(numbers.begin(), numbers.end());// connot reverse integer
	// // numbers = 987654321;

	// cout<<numbers<<endl;



	// string : 
	// * String : is a text/character
	// char word[] = "H,e,l,l,o, ,w,o,r,l,d";
	// char word[2] = 'a' : Hallo world;
	// * String Function
	// Replace : is used to change the text/character start with index
	// Length : is used to find the length of string
	// Size : is used to find the size of string
	// Empty : is used to check the string is empty or not
	// Substring : is used to find the substring of string
	// Find : is used to find the position of string
	// Reverse : is used to reverse the string
	// Find Position : is used to find the position of string

	// * Create a program to uppercase in string

	string str = "hello world";
	
	for(int i = 0; i < str.length(); i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] - 32;
		}
	}
	
	cout<<str<<endl;

	

	


	return 0;
}