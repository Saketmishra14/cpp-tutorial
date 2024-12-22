#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter x -:";
    cin>>x;
    cout<<"enter y -:";
    cin>>y;
    // temp=x;
    // x=y;
    // y=temp;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y;
}