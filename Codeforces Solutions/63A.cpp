#include<iostream>
using namespace std;

int main()
{
    int n, x,y,z;
    int p=0,q=0,r=0;
    cin>>n;

    for (int i=0;i<n; i++)
    {
        cin>>x;
        cin>>y;
        cin>>z;

        p+=x;
        q+=y;
        r+=z;
    }

    if(p==0 && q==0 && r==0)
    {cout<<"YES"<<endl;}
    else
    {cout<<"NO"<<endl;}

    return 0;
}
