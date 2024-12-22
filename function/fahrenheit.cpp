#include<iostream>
using namespace std;
float tocelcius(float fahrenheit){
    return (5.0/9.0)*(fahrenheit-32.00);
}
int main(){
    float f_value,c_value;
    cout<<"enter f_value -:";
    cin>>f_value;
    c_value=tocelcius(f_value);
      cout<<"celcius value -:"<<c_value;
}