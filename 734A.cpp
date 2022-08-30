#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {

        if(s[i]=='A')
            x++;
        else
            y++;

    }
    if(x>y)
        cout<<"Anton";
    else if (y>x)
        cout<<"Danik";
    else if (x==y)
        cout<<"Friendship";
}
