#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    int n = a.size();
    int x = 0,sum=0;
    for(int i = 0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            x++;

        }


    }
    sum+=x;
    cout << sum << endl;
}
