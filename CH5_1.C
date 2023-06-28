#include<stdio.h>
#include<conio.h>
main()
{
	int a=100,b=200,c=50;
	clrscr();
	if (a<b)
	{
		if(a<c)
		{
			printf("a is minimum");
		}
		else
		{
			printf("c is minimum");
		}
	}
	else
	{
		if (b<c)
		{
			printf("b is minimum");
		}
		else
		{
			printf("C is minimum");
		}
	}
	getch();
}