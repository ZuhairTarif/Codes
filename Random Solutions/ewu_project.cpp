#include<iostream>
#include<conio.h>
using namespace std;

void start()
{
    cout<<"Hello"<<endl;


}
void rules()
{

    cout<<"Rules"<<endl;
}
void score()
{

    cout<<"Score"<<endl;
}

int main()
{
    int ch,x,n;
    do
    {
        cout<<"1.Start"<<endl;
        cout<<"2.Rules"<<endl;
        cout<<"3.View Score"<<endl;
        cout<<"4.Exit"<<endl;
        cin>>ch;
        switch(ch)
        {
           case 1: start();
            break;
            case 2: rules();
            break;
            case 3: score();
            break;
            case 4:
                if(ch==4)
                {
                    cout<<"Exit"<<endl;
                }
         default: cout<<"\n Invalid Option "<<endl;
        }
    cout<<" Do you want to select next step then please press: y "<<endl;
    cout<<" If you want to exit then please press: n "<<endl;
    x=_getch();
    if(x=='n' || x=='N')
    cout<<"Exit"<<endl;
    }
    while (x=='y' || x=='Y');

    _getch();

}

