#include<iostream>
using namespace std;
int main()
    {
        string a,b="",c="",d="";
        cin>>a;
        int i,j;
        for(i=0;i<a.length();i++)
        {
        for(j=i;j<a.length();j++)
        {
        b+=a[j];
        for(int k=j;k>=i;k--)
        {
        c+=a[k];
        }
        if((b==c)&&c.length()>d.length())
        {
        d=c;
        }
        c="";
        }
        b="";
        }
        cout<<d;

	return 0;
}
