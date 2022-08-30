#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    string rev1="";
    //reverse(s.begin(),s.end()); //;Library function
    //using loop
    for (int i = s.size() - 1; i >= 0; i--)
    {
        rev1 = rev1 + s[i];
    }
    if(rev1==t)
        cout<<"YES";
    else
        cout<<"NO";

}
