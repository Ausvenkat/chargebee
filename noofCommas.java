#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    for(int i=0;i<s.length();i++){
        cout<<s[i];
        if(k>0){
            cout<<",";
            k--;
        }
    }
    
    
    return 0;
    
}
