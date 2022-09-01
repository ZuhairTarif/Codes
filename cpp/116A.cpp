#include<iostream>
using namespace std;
int main()
{
    int n,a,b,sum=0,k=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        sum=b-a+sum;
        if(sum>k)
        {
            k=sum;
        }

    }
    cout<<k;

}
