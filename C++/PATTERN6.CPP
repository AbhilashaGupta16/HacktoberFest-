#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
 for(int i=1;i<=5;i++)
 { for(int j=5;j>=i;j--)
   cout<<" ";
   for(int k=1;k<=i;k++)
   cout<<k;
   cout<<endl;
 }
getch();
}