#include <bits/stdc++.h>
#include<time.h>
using namespace std;
int main()
{
    int count=0;
    srand(time(NULL));
    int n,x;
    for(int i = 0;i<20;i++)
    {

        cin>>x;
        n = rand() % 9 + 1;
        if(x == n)
        {

            cout<<"Win"<<endl;
            count++;
        }
        else
            cout<<"Lose"<<endl;


    }
    if(count==5)
    {

        cout<<"Game Over";
    }

}
