#include<iostream>
using namespace std;
int pow(int a,int b){
    if (b==0) return 1;

   
    return a*pow(a,b-1);
}

int main(){
    int a,b;
    cout<<"enter number -:";
    cin>>a;
   cout<<"enter power -:";
    cin>>b;
    cout<<pow(a,b);
}