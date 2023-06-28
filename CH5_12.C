#include<stdio.h>
#include<conio.h>
main()
{
	int a=100,b=20,c=30,d=40;
	clrscr();
	if (a<b)
	{
		if (a<c)
		{
			if (a<d)
			{
				printf("A is minimum");
			}
			else
			{
				printf("D is minimum");

		}	}
		else
		{
			if (b<c)
			{
				printf("B is minimum");
			}
			else
			{
				printf("C is minimum");
			}

		}

	}
	else
	{
		if (b<c)
		{
			if (d<c)
			{
				printf("D is minimum");
			}
			else
			{
				printf("C is minimum");
			}
		}
		else
		{
			if (a<d)
			{
				printf("A is minimum");
			}
			else
			{
				printf("D is minimum");
			}
		}
		}

	getch();
}