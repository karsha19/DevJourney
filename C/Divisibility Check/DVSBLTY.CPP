//Program to input 2 nos and check whether divisible by 2nd or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,r;
	clrscr();
	printf("Enter the number to divide : ");
	scanf("%d",&a);
	printf("Enter the number to divide by : ");
	scanf("%d",&b);
	r=a%b;
//or you can do as--> if((a%b)==0)
	if(r==0)
		printf("Divisible");
	else
		printf("Not divisible");
	getch();
}
