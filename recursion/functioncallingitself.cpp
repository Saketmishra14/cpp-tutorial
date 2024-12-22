#include<iostream>
using namespace std;
int greet(){
      cout<<"hello";
      greet();
    return;
}
int main(){
    greet();

}