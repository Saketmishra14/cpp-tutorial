#include<iostream>
using namespace std;
int fact(int x){
   int f=1;
    for (int i = 1; i <=x; i++)
    {
       f*=i;
    }
    return f;
}
int ncr(int n, int r){
    int a=fact(n);
int b=fact(r);
int c=fact(n-r);
return a/(b*c);
}
int main(){
    int n;
    cout<<"enter N -:";
    cin>>n;
    for (int i=1; i <=n; i++)
    {
        for (int j=1;j<=n-i; j++)
        {
           cout<<" ";
        }
        
       for (int j =1; j <=i; j++)
       {
       cout<<ncr(i,j)<<" ";
       }
       cout<<endl;
       
    }
}
    