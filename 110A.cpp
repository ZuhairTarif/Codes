#include<iostream>
using namespace std;
int main()
{
    string n;
    int i,k=0;
    cin>>n;
    for(i=0; i<n.size();i++)
    {
        if(n[i]=='4' || n[i]=='7')
        {
            k++;

        }

    }
    if(k==4 || k==7)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";



}
