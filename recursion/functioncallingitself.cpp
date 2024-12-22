#include<iostream>
using namespace std;
int greet(){
      cout<<"hello";
      greet();

}
int main(){
    greet();

}