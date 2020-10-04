#include<stdio.h>
#include<conio.h>
void swap (int a, int b)
{
	int temp=a;
	a=b;
	b=temp;
	printf("\n Within the Swap: a=%d, b=%d",a,b);

}
int main()
{
	int a=5,b=10;
	printf("a=%d,b=%d",a,b);
	swap(a,b);
	printf("\n a=%d,b=%d",a,b);
	getch();
}
