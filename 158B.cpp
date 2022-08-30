#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];


    }
            sort(arr,arr+n);
            for(int i = 0;i<n-1;i++)
            {
                if(arr[i]+arr[i+1]==4)
                    count;
                else if(arr[i]+arr[i+1]<4)
                    count;
                else
                    count++;
            }
    cout<<count;
}

