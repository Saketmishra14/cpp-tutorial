#include<iostream>
using namespace std;
int singleplus(int x, int y){
    return x+y;
}
double doubleplus(double x,double y){
    return x+y;
}
int main(){
    int num1=singleplus(6,8);
    double num2=doubleplus(6.87,8.6);
    cout<<num1<<"  "<<num2;

}