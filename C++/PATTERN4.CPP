#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
 for(char i='E';i>='A';i--)
 { for(char j='E';j>=i;j--)
    cout<<j;
    cout<<endl;
 }
 getch();
}