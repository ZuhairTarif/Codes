#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    int n,temp;
    cin>>n;
    int arr[n];

    for(int i=1;i<=n;i++)
    {
        cin>>temp;
        arr[temp]=i;

    }
    for(int j=1;j<=n;j++)
    {
        cout<<arr[j]<<endl;
    }
return 0;
}
