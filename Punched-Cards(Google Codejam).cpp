//codingcompetitions.withgoogle.com/codejam/round/0000000000876ff1/0000000000a4621b
#include<iostream>
using namespace std;
int main()
{
int n,count = 0,count1 = 0;
cin>>n;
for(int row = 0;row<n;row++)
{
    for(int column = 0;column<n;column++)
    {
        int arr[row][column];
        cin>>arr[row][column];
        count = row;
        count1 = column;
        int q = count+count1;
        while(q>0)
        {
            cout<<"+ -"<<endl;
            break;

        }



    }



}
}
