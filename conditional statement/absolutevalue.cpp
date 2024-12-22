#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the value :";
    cin>>x;
    if (x>0) cout<<"the absolute value is :"<<x;
    if (x<0) {
        int y=-1*x;
        cout<<"the absolute value is :"<<y;
    }
    
}