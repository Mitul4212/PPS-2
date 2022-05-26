#include<iostream>
using namespace std;

int main(){

    // normal init
    int r;
    cout<<"Enter Value of Radius in cm: ";
    cin>>r;

    //dynamic init
    float area = 3.14 * r * r;
    cout<<"Area of Circle: "<<area<<" cm^2"<<endl;
    
    return 0;
}
