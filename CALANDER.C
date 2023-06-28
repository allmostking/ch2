#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("Press 1 for jan\n");
	printf("Press 2 for feb\n");
	printf("Press 3 for mar\n");
	printf("Press 4 for apr\n");
	printf("Press 5 for may\n");
	printf("Press 6 for june\n");
	printf("Press 7 for july\n");
	printf("Press 8 for aug\n");
	printf("Press 9 for sep\n");
	printf("Press 10 for oct\n");
	printf("Press 11 for nov\n");
	printf("Press 12 for dec\n");
	printf("Enter your choice");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("January");
			break;
		case 2:
			printf("Febuary");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("July");
			break;
		case 8:
			printf("August");
			break;
		case 9:
			printf("September");
			break;
		case 10:
			printf("Octomber");
			break;
		case 11:
			printf("November");
			break;
		case 12:
			printf("December");
			break;
		default:
			printf("Wrong choice");
	}
	getch();
}
