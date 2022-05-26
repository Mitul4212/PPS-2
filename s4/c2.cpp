#include<bits/stdc++.h>
using namespace std;

class item{
	double code;
	float cost;
	int qty;
	float total_price;
public:
	void getdata(){
		cout<<"Enter product code : ";
		cin>>code;
		cout<<"Enter How many Product buy : ";
		cin>>qty;
		cout<<"Enetr product price : ";
		cin>>cost;
	}
	void calculate(){
		total_price=qty*cost;
	}
	void dispdata(){
		cout<<"product code 	: "<<code<<endl;
		cout<<"product qty	: "<<qty<<endl;
		cout<<"product price 	: "<<cost<<endl;
		cout<<"Total price 	: "<<total_price<<endl;
	}
};

int main(){
	item p1;
	p1.getdata();
	p1.calculate();
	p1.dispdata();
}
