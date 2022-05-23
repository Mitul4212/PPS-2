#include<iostream>
using namespace std;

int &zerosmaller(int &x,int &y){
	if(x<y)
		return x;
	else 
		return y;
}

int main(){
	int a,b;
	cout<<"Enetr Two Numbers :"<<endl;
	cin>>a>>b;
	zerosmaller(a,b)=0;
	cout<<a<<" "<<b<<endl;
	
}
