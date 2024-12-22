#include<iostream>
using namespace std;
int main(){
    int l,b,area,p;
    cout<<"enter length :";
    cin>>l;
    cout<<"enter bredth :";
    cin>>b;
    area=l*b;
    p= 2*(l+b);
    cout<<"area of rectangle is :"<<area<<endl;
    cout<<"area of perimeter is :"<<p<<endl;
    if (area>p)
    {
        cout<<"the area of rectangle is greater than its perimeter.";
    }
    


}