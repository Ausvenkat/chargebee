#include<iostream>
using namespace std;
int main(){
    int a=5,i,j,first,second,int_min;
    int arr[a];
    for(i=0;i<a;i++){
        cin>>arr[i];
    }
    first=second=int_min;
    for(i=0;i<a;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second &&arr[i]!=first){
            second=arr[i];
        }
    }
    if(second==int_min){
        cout<<" ";
    }
    else{
        cout<<second;
    }
    return 0;
}
