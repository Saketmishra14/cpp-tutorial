#include<iostream>
using namespace std;
int main(){
  int a,b; 
  char op; 
    cout<<"enter number first : ";
    cin>>a;
    cout<<"enter operator : ";
    cin>>op;
    cout<<"enter number second: ";
    cin>>b;
    switch (op)
    {
    case '+':
    cout<<a+b;
       
        break;
    case '-':
    cout<<a-b;
       
        break;
    case '*':
    cout<<a*b;
       
        break;
    case '/':
    cout<<a/b;
       
        break;
    
    default:
    cout<<"invalid operator";
        break;
    }
    
}