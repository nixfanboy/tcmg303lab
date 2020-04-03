#include <iostream>
using namespace std;
int main()
{
    int birthmonth,birthyear;
    int currentmonth,currentyear;
    int agey,agem;
    cout<<"Enter Your Birth Month(Eg:1):";
    cin>>birthmonth;
    cout<<"\n\nEnter Your Birth Year(Eg:1997):";
    cin>>birthyear;
    cout<<"\nEnter The Current Month(Eg:7):";
    cin>>currentmonth;
    cout<<"\nEnter The Current Year(Eg:2010):";
    cin>>currentyear;

    agey = currentyear - birthyear;
    if(currentmonth == birthmonth)
    {
         agem = 0;
    }
    else if(currentmonth < birthmonth)
    {
        agey--;
        agem = (12 - birthmonth) + currentmonth;
    }
    else
    {
        agem = currentmonth - birthmonth;
    }

    cout<<"\n\n\t\tYour Age is "<<agey<<" Years And "<<agem<<" Months ";
    return 0;
}
