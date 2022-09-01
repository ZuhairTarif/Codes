#include<iostream>
using namespace std;

int main()
{
    int count=0, n,x,y, sum=0;

    for (int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>n;
            if(n==1)
            {
                x=i;
                y=j;
            }

        }
    }

    // for (int i=0; i<=3; i++)
    // {
    //     for(int j=0; j<=3; j++)
    //     {

    //     }
    // }

    while(x!=2)
    {
        count++;
        if(x>=3)
        {
            x--;
        }
        else{
            x++;
        }
    }

    while(y!=2)
    {
        count++;
        if(y>=3)
        {
          y--;
        }
        else{
            y++;
        }
    }

cout<<count<<endl;

    return 0;
}
