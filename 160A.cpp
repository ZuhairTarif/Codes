#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0,sum2=0,count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    sort(arr,arr+n);
    sum=sum/2;

    for(int j = n-1;j>=0;j--)
    {
        sum2+=arr[j];
        count++;
        if(sum<sum2)
        {
            break;
        }

    }
    cout<<count;

}
