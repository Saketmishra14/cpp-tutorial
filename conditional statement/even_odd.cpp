#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the positive integer number:";
    cin>>x;
    if (x%2==0)
    {
        cout<<"the number is even:";
        cout<<x;
    }
    else
    {
        cout<<"the number is odd:";
        cout<<x;
    }
    
}