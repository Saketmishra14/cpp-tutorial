#include<iostream>
using namespace std;
int Binarysearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

}
int main(){
    int arr[]={4,5,6,7,8,9,12,34,56,78,89};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Give Target-:";
    cin>>target;
    int Indexoftarget=Binarysearch(arr,size,target);
    if (Indexoftarget==-1)
    {
       cout<<"Element is not found."<<endl;
    }
    else{
        cout<<"Element found at "<<Indexoftarget<<" Index";
    }
    

    return 0;
}