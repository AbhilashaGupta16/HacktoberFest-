// Program to find whether a number is automorphic or not
#include<conio.h>
#include<math.h>
#include<iostream.h>
void main()
{ clrscr();
  int n,c=0;
  cout<<"enter number";
  cin>>n;
  int t=n;
  while(t!=0)
   { c++;
     t/=10;
   }
  int x=pow(10,c);
  int y=(n*n)%x;
  if(y==n)
  cout<<"automorphic no";
  else
  cout<<"not automorphic no";
  getch();
}
