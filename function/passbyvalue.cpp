#include<iostream>
using namespace std;
void swap(int& x,int& y){
    int temp=x;
     x=y;
    y=temp;
}
int main(){
    int x,y;
    cout<<"enter x -:";
    cin>>x;
    cout<<"enter y -:";
    cin>>y;
    swap(x,y);
    cout<<x<<" "<<y;



}