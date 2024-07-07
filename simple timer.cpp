#include<stdio.h>
#include<iostream>
#include<windows.h>
using namespace std;

int main()

{int hours,minutes,seconds;


  while(true)
  {
    cout<<"ENTER HOURS:  ";
    cin >>hours;
    cout<<"ENTER MINUTES: ";
    cin >>minutes;
    cout<<"ENTER SECONDS: ";
    cin>> seconds;
    if( hours< 0 || minutes <0  || seconds<0 || minutes > 59 || seconds > 59 )
    {
        continue;
    }
    break;

    }
    while(hours >0 || minutes>0 || seconds>0)
{
    system("cls");
    cout<<hours<<":"<<minutes<<":"<<seconds<<":"<<endl;
    Sleep(1000);
    if(seconds>0)
    {
        seconds--;

    }
    else if(minutes>0)
    {
        seconds=59;
        minutes--;
    }
    else if(hours>0)
    {
        minutes=59;
        seconds=59;
        hours--;
    }

}
system("cls");
cout<<"COUNTDOWN HAS ENDED";
 return 0;
 }

