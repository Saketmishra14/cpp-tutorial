#include<iostream>
using namespace std;
int fact(int x){
   
   int f=1;
    for (int i = 1; i <=x; i++)
    {
       f*=i;
    }
    return f;
    
}
int main(){
    int n,r;
    cout<<"enter 1st number :";
    cin>>n;
    cout<<"enter 2nd number :";
    cin>>r;

int a=fact(n);
int b=fact(r);
int c=fact(n-r);
cout<<a/(b*c)<<endl;
cout<<a/c;
}