#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter side a: ";
cin>>a;
cout<<"enter side b: ";
cin>>b;
cout<<"enter side c: ";
cin>>c;
if (a<b && a<c)
{
    cout<<a<<"is least number.";
}
if (b<a && b<c)
{
    cout<<b<<"is least number.";
}
if (c<b && c<a)
{
    cout<<c<<"is least number.";
}


}