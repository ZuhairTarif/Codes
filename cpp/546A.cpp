#include<iostream>
using namespace std;
int main()
{
int k,n,w,c=0;
cin>>k;
cin>>n;
cin>>w;
for(int i=1;i<w;i++)
{
    c+=i;

}
int e=(k*c)-n;
cout<<e<<endl;
return 0;
}
