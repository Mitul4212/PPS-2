#include<bits/stdc++.h>
using namespace std;

class book{
	string bookname;
	string authorname;
	float rate;
	int qty;
	float total_price;
public:
	void getdata(){
		cout<<"Enter Book name : ";
		getline(cin,bookname);
		cout<<"Enter authorname : ";
		getline(cin,authorname);
		cout<<"Enter How many book buy : ";
		cin>>qty;
		cout<<"Enter book price : ";
		cin>>rate;
	}
	void calculate(){
		total_price=qty*rate;
	}
	void dispdata(){
		cout<<"Book name 		: "<<bookname<<endl;
		cout<<"Author name 		: "<<authorname<<endl;
		cout<<"Book quantity 		: "<<qty<<endl;
		cout<<"Book Price 		: "<<rate<<endl;
		cout<<"Total price 		: "<<total_price;
	}
};

int main(){
	book b1;
	b1.getdata();
	b1.calculate();
	b1.dispdata();
}
