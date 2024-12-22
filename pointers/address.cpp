#include<iostream>
using namespace std;
int main(){
    int x=9;
    int y=76;
    int* ptr=&x;
    cout<<&x<<endl<<ptr<<endl;
     cout<<&y<<endl<<*ptr;

}