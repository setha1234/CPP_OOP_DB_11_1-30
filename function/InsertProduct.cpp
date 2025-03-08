
#include<iostream>
using namespace std;

int code,quantity;
float price,tax,dis,total,riel,pay;
string name;

void InsertProduct(){
	cout<<"\t\t===================[Insert Data]===================\n";
	cout<<"\t\tEnter code of product     :";cin>>code;
	cout<<"\t\tEnter name of product     :";cin.ignore();getline(cin,name);
	cout<<"\t\tEnter Quantity of product :";cin>>quantity;
	cout<<"\t\tEnter Price of product    :";cin>>price;
	cout<<"\t\t===================[End Insert]====================\n";
}

float TotalProduct(){
	return price*quantity;
}

float DisProduct(){
	total = TotalProduct();
	dis = 	(total > 1   && total <= 100) ? 0.1 : // 0.1 = 10 /100 => 10%
			(total > 100 && total <= 200) ? 0.2 :
			(total > 200 && total <= 300) ? 0.3 : 
			(total > 300 && total <= 400) ? 0.4 :
			(total > 400 && total <= 500) ? 0.5 :
			(total > 500)                 ? 0.6 :
			0.0;
	
	return total * dis;
}

float TaxProduct(){
	tax = 0.05;
	return total * tax;
}

float Payment(){
	return TotalProduct() + TaxProduct() - DisProduct();
}

void Header(){
	total = TotalProduct();
	pay = Payment();
	cout<<"\t\t=================================[Display Product]======================================\n";
	cout<<"\t\tCode\tName\tPrice\tDiscount\tQuantity\tTax\tTotal\tPayment"<<endl;
	cout<<"\t\t========================================================================================\n";
}
void Display(){
	cout<<"\t\t"<<code<<'\t'<<name<<'\t'<<price<<'\t'<<dis<<"\t\t"<<quantity<<"\t\t"<<tax<<'\t'<<total<<'\t'<<pay<<endl;
}



int main(){
	int op;
	float riel;
	pay = Payment();
	total = TotalProduct();
	do{
		cout<<"\t\t=============================[Menu]================================\n";
		cout<<"\t\t1.Insert Product."<<endl;
		cout<<"\t\t2.Display Product."<<endl;
		cout<<"\t\t3.Display Product in Reil."<<endl;
		cout<<"\t\t4.Display Product in Dollar."<<endl;
		cout<<"\t\t5.Exit [0]"<<endl;
		cout<<"\t\t=> Please choose an option [1-5] :";
		cin>>op;
		switch(op){
			case 0 : {
				cout<<"\t\t=================[Thank you for using our Program]=====================\n";
				break;
			}
			case 1 :{
				InsertProduct();
				break;
			}
			case 2 :{
				Header();
				Display();
				break;
			}
			case 3 : {
				riel = 4000.00;
				cout<<"\t\t=======================[Total & Payment]=============================\n";
				cout<<"\t\t Total in Reil   : "<<total* riel<<endl;
				cout<<"\t\t Payment in Reil : "<<pay * riel<<endl;
				break;
			}
			case 4 : {
				
				cout<<"\t\t=======================[Total & Payment]=============================\n";
				cout<<"\t\t Total in Dollar   : "<<total<<endl;
				cout<<"\t\t Payment in Dollar : "<<pay<<endl;
				
				break;
			}
			default : {
				cout<<"\t\tInvalid Options.Please Try again."<<endl;
				break;
			}
		}
		
	}while(op != 0);
	
	return 0;
}

