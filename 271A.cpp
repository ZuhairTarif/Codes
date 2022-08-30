#include<iostream>
using namespace std;
//distinct number means no repeated digit on the number
int main()
{
    int n;
    cin>>n;
    int x,y,w,z;
    for(;;)
    {
        n++;
        x=n/1000;
        y=(n/100)%10;
        w=(n/10)%10;
        z=n%10;
        if(x!=y && x!=w && x!=z && y!=w && y!=z && w!=z)
    {
        break;

    }


    }

cout<<n;

}
