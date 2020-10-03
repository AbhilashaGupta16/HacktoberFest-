#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
 int a[21],size;// swap first half elements with next half in evan sized array
 cout<<"enter size of array";
 cin>>size;
 for(int j=0;j<size;j++)  //input elements
 cin>>a[j];
 for(int i=0;i<size/2;i++)  //swapping
 { int temp=a[i];
   a[i]=a[size/2+i];
   a[size/2+i]=temp;
 }
 for(int k=0;k<size;k++)  // print the o/p array
 cout<<a[k]<<" ";
 getch();
}