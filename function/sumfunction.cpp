#include<iostream>
using namespace std;
int sum(int a,int b){
   return a+b;
}
int main(){
    int a,b;
    cout<<"enter first no -:";
    cin>>a;
    cout<<"enter second no -:";
    cin>>b;
    cout<<sum(a,b);
}