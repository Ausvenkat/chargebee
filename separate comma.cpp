#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int l=s.length()-1;
    for(int i=0;i<s.length();i++){
            if(i==l){
            cout<<',';
            }
             cout<<s[i];
        }
      
    
    return 0;
}
