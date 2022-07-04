#include<iostream>
using namespace std;

void dispdata(int n){
	cout<<n<<endl;
}
void dispdata(char c){
	cout<<c<<endl;
}
//------------------------------------------------------
int main(){
	int a=1;
	char c='A';
	dispdata(a);
	dispdata(c);
}
