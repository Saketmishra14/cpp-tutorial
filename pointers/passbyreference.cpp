#include<iostream>
using namespace std;
int main(){
    int a=9;
    int b=6;
    int *ptr=&a;
    cout<<a<<endl;
    *ptr=6;
    cout<<a;

}