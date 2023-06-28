#include<stdio.h>
#include<conio.h>
main()
{
	int a=10,b=20,c=30;
	clrscr();
	(a>b)?(a>c)?printf("A is max"):printf("c is max")
	     : (b>c)?printf("B is max"):printf("C is max");
	getch();
}