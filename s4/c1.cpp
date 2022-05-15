#include<iostream>
using namespace std;

class player {

    string name;
    int age,runs[100],hi,lo,tsts,matches;
    float avg;

public:

    void getdata(){

        cout<<"Enter Player Name : ";
        cin>>name;
        
        cout<<"age : ";
        cin>>age;

        cout<<"how many played matches : ";
        cin>>matches;

        cout<<"Enetr all matches runs : ";
        tsts=0;
        for(int i=0;i<matches;i++){
            cin>>runs[i];
            tsts+=runs[i];
        }

    }

    void dispdata(){

        cout<<"Plyer name : "<<name<<endl;
        cout<<"age : "<<age<<endl;

        cout<<"Runs :"<<endl;
        for(int i=0;i<matches;i++){
            cout<<runs[i]<<endl;
        }

        cout<<"highest score : "<<hi<<endl;
        cout<<"lowest score : "<<lo<<endl;
        cout<<"Total score : "<<tsts<<endl;
        cout<<"average score : "<<avg<<endl;

    }

    void calculate(){

        lo=INT_MAX;
        for(int i=0;i<matches;i++){
            if(runs[i]<lo){
                lo=runs[i];
            }
        }

        hi=INT_MIN;
        for(int i=0;i<matches;i++){
            if(runs[i]>hi){
                hi=runs[i];
            }
        }

        avg=tsts/matches;

    }

};

//---------------------------------------------------------------------------

int main(){

    int n;

    cout<<"enter how many player data : ";
    cin>>n;

    player p[n];

    for(int j=0;j<n;j++){
        p[j].getdata();
        p[j].calculate();
        p[j].dispdata();   
    }
    
}