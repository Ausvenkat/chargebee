#include<iostream>
using namespace std;
int main(){
 string str;
 cin>>str;
 int repeated;
 int len=str.length();
  for(int i = 0; i < len; i++ )
    {
        repeated = 0;
        for(int j = 0; j < len; j++ )
        {
            if( i != j && str[i] == str[j] ) {
                repeated = 1;
                break;
            }
        }         

        if( repeated == 0 ) { 
            cout<< str[i];
        }
    }

}
