#include <iostream>
using namespace std;

void add(int a, int b) {
    a = a + b;
    cout<<a<<endl;
}
void sub(int& c, int& d)
{
    d = d-c;
    cout<<d<<endl;
}

int main() {
    int x, y;
    cin >> x >> y;add(x, y);
    cout <<"Pass by Value: " << x << " " << y<<endl;

    int r,t;
    cin>>r>>t;
    sub(r,t);
    cout <<"Pas by Reference: "<<r<<" "<<t;
}
