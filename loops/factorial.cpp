#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number :";
    cin>>n;
    int fact=1;
    for (int i = 1; i <=n; i++)
    {
        fact *=i;
        cout<<fact;
    }
    
}