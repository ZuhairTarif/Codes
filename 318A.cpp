#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,k,a;
    cin>>n>>k;
    //dividing into even or odd
    //a is position variable
    if(n%2==0) //even logic
    {
        a=n/2; //become odd
    }
    else
    {
        a=(n+1)/2; //become even
    }
    //printing position

    if(k<=a)
    {
        cout<<(k*2)-1; //odd position
    }
    else
    {
        cout<<(k-a)*2; //even position
    }

}
