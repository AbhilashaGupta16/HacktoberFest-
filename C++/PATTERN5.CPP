#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
 long x=1;
 for(int i=1;i<=5;i++)
 { cout<<x*x;
   x=x*10+1;
   cout<<endl;
 }
getch();
}