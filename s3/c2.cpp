#include<iostream>
using namespace std;

void matrix(int row=3,int col=3){
	
		int a[row][col],b[row][col],c[row][col];
		
		cout<<"Enter first metrix elements :"<<endl;
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				cin>>a[i][j];
			}
		}
		cout<<"Enter second metrix elements :"<<endl;
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				cin>>b[i][j];
			}
		}
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		cout<<"addition of tow metrixs :"<<endl;
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				cout<<c[i][j];
			}
			cout<<endl;
		}
}

int main(){
	matrix();
}
