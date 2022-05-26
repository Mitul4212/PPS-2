//21/4
#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Enter a Number=";
	cin>>a;
	int i,temp=1;
	if(a<1){
		temp=1;s
	}
	for(i=2;i<a;i++){
		if(a%i!=0){
			temp=0;
		}
	}
	if(temp==0){
		cout<<"Number is prime";
	}
	else {
		cout<<"Number is Not prime";
	}
	return 0;
}
