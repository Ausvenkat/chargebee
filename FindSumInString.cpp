#include<iostream>
using namespace std;
int find(string str){
    string temp=" ";
    int sum=0;
    for(char ch:str){
        if(isdigit(ch)){
            temp+=ch;
        }
        else{
            sum=sum+atoi(temp.c_str());
            temp ="";
        }
        
    }
    return sum+atoi(temp.c_str());
}
int main(){
    string str;
    cin>>str;
    cout<<find(str);
    return 0;
}
