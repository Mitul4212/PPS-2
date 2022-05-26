#include<bits/stdc++.h>
using namespace std;

class time{
	
	int h,m,s,t;
	
public:
	
	void getdata(){
		cout<<"Enter Seconds : ";
		cin>>t;
	}
	void setdata(int ss){
		t=ss;
	}
	void convert(){
		h=t/3600;
		t=t%3600;
		m=t/60;
		t=t%60;
		s=t;
	}
	void dispdata(){
		cout<<"Hour : "<<h<<endl;
		cout<<"Minite : "<<m<<endl;
		cout<<"Second : "<<s<<endl;
	}
};

int main(){
	class time t1,t2;
	t1.getdata();
	t1.convert();
	t1.dispdata();
	t2.setdata(4000);
	t2.convert();
	t2.dispdata();
}
