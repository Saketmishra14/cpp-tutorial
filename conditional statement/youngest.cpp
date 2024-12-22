#include<iostream>
using namespace std;
int main(){
int ram,ajay,shyam;
cout<<"enter age of ram : ";
cin>>ram;
cout<<"enter age of ajay: ";
cin>>ajay;
cout<<"enter age of shyam: ";
cin>>shyam;
if (ram<shyam && ram<ajay)
{
    cout<<ram<<":ram is youngest.";
}
if (ajay<ram && ajay<shyam)
{
    cout<<ajay<<": ajay is youngest.";
}
else
{
    cout<<"shyam is youngest.";
}



}