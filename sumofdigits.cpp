#include<iostream>
using namespace std;

int main()
{
    int n,split,sum=0;
    cin>>n;
    while(n>0){
        while(n!=0){
        split=n%10;
        sum=sum+split;
        n=n/10;
        }
        if(sum>9){
            n=sum;
            sum=0;
        }
    }
        
    cout<<sum;

    return 0;
}
