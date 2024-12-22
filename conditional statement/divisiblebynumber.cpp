#include<iostream>
using namespace std;
int main(){
int n;

    cout<<"enter number : ";
    cin>>n;
    if (n%3==0 && n%5==0)
    {
        cout<<"the number is divisible by 3 and 5: "<<n;

    }
    else
    {
        cout<<"the number is not divisible by 3 and 5."<<n;
    }
}
