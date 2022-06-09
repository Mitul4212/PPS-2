#include<bits/stdc++.h>
using namespace std;

class item{
	double code;
	float cost;
	int qty;
	float total_price;
    static float sum;
public:
    item(){
        sum=0;
    }
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
        sum+=total_price;
	}
	void dispdata(){
		cout<<"product code 	: "<<code<<endl;
		cout<<"product qty	: "<<qty<<endl;
		cout<<"product price 	: "<<cost<<endl;
		cout<<"Total price 	: "<<total_price<<endl;
        
    }
    void disptotal(){
        cout<<"All over Total Amount : "<<sum;
    }
};

float item::sum=0;

int main(){
    int n;
    cout<<"How many Books diteils : ";
    cin>>n;
	item p[n];
	for(int i=0;i<n;i++){
        p[i].getdata();
	    p[i].calculate();
	    p[i].dispdata();
    }
    p[0].disptotal();
}
