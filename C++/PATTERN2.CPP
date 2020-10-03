#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int n,x;
 float sum=0;
 cout<<"enter the no of terms and x";
 cin>>n>>x;
 for(int i=1;i<=n;i++)
 { int p=1;
  for(int j=1;j<=n;j++)
  { p*=j;
  }
  sum+= pow(x,i)/p;
 }
 cout<<sum;
 getch();
}