#include<iostream>
using namespace std;
int main()
{
    int n,h,i,k=0,sum=0;
    cin>>n>>h;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<=h)
        {
            k++;
        }
        else
        {
            sum+=2;
        }

    }

    cout<<k+sum<<endl;

}
