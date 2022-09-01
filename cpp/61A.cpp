#include<iostream>
using namespace std;
int main()
{
    string s,d;
    cin>>s>>d;
    for(int i =0;i<s.length();i++)
    {
        if(s[i]==d[i])
            cout<<"0";
        else
            cout<<"1";
    }
}
