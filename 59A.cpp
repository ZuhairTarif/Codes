#include<iostream>
#include<string>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int i;
    int upper=0,lower=0;
    for ( i = 0; i < s.length(); i++) {


        if(s[i]>='A'&& s[i]<='Z')
            upper++;
        else
            lower++;

    }
    for(i=0;i<=s.length();i++)
    {
        int c=s[i];

    if(upper>lower)
    {
             s[i] = toupper(c);

    }
    else
    {
        s[i] = tolower(c);
    }
    }

cout << s;

}
