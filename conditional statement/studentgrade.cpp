#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter marks :";
    cin>>n;
    if (n>80 && n<=100)
    {
        cout<<"VERY GOOD."<<endl;
    }
    else if (n>60 && n<=80)
    {
        cout<<"GOOD."<<endl;
    }
    else if (n>40 && n<=60)
    {
        cout<<"AVERAGE"<<endl;

    }
    
    else
    {
        cout<<"FAIL."<<endl;
    }
    
}