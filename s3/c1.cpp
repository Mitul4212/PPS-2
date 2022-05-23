#include<iostream>
using namespace std;

repchar(char c='*',int n=45){
	for(int i=0;i<n;i++ ){
		cout<< c <<endl;
	}	
}

int main(){
	repchar();
	repchar('=');
	repchar('+',30);
}

