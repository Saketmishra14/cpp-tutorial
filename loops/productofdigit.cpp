#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number :";
    cin>>n;
    int sum=1;
    while (n!=0)
    {
        int ld=n%10;
        n=n/10;
        sum*=ld;
    }
    cout<<sum;
    
}