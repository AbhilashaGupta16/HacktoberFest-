#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
  int n,c=0;
  cout<<"enter no";
  cin>>n;
  for(int i=1;i<=n/2;i++)
   { if(n%i==0)
     c++;
   }
 if(c==1)
 { int x=0;
   for(int i=1;i<=n/2+1;i++)
    { if((n+2)%i==0)
      x++;
    }
   if(x==1)
   cout<<"twin prime";
   else
   cout<<"not twin prime";
 }
 else
 cout<<"not twin prime";
getch();
}

