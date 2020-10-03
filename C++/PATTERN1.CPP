#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
 float sum=0;
 int n;
 cout<<"enter the no of terms";
 cin>>n;
 for(int i=1;i<=n;i++)
 {    int p=1;
  for(int j=1;j<=i;j++)
  { p*=j;
  }
  sum+=(float)i/p;
 }
 cout<<"sum="<<sum;
  getch();
 }