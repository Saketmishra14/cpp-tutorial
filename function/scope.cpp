#include<iostream>
using namespace std;
int x=6;
int scope(){
    int x=8;
    cout<<x<<endl;
}
int main(){
    scope();
    cout<<x;

}