#include<conio.h>
#include<stdio.h>
void main()
{
	int choice1,choice2;
	clrscr();
	printf(" call service \n\n\n");
	printf(" press 1 for English \n ");
	printf(" press 2 for Hindi\n ");
	printf(" press 3 for Gujarati\n ");
	printf( "Enter your choice \n");
	scanf( "%d",&choice1);
	switch(choice1)
	{
		case 1:
			printf("press 1 for internet recharge\n");
			printf("press 2 for top-up recharge\n");
			printf("press 3 for special recharge\n");
			printf("enter your choice");
			scanf("%d",&choice2);
			switch(choice2)
			{
				case 1:
					printf("your internet recharge is done successfully\n");
					break;
				case 2:
					printf("your top-up recharge is successfully done\n");
					break;
				case 3:
					printf("your special recharge is successfully done \n");
					break;
				default:
					printf("invalid choice\n");
			}
		case 2:
			printf("press 1 internet recharge ke liye\n");
			printf("press 2 top-up recharge ke liye\n");
			printf("press 3 special recharge ke liye\n");
			printf("enter your choice");
			scanf("%d",&choice2);
			switch(choice2)
			{
				case 1:
					printf("internet recharge successfully ho chuka hai\n");
					break;
				case 2:
					printf("top-up recharge successfully ho chuka hai\n");
					break;
				case 3:
					printf("special recharge successfully ho chuka hai\n");
					break;
				default:
					printf("invalid choice\n");
			}
		case 3:
			printf("internet recharge 1 dabavo\n");
			printf("top-up recharge mate 2 dabavo\n");
			printf("special recharge mate 3 dabavo\n");
			printf("enter your choice");
			scanf("%d",&choice2);
			switch(choice2)
			{
				case 1:
					printf("internet recharge thai gayu\n");
					break;
				case 2:
					printf("top-up recharge thai gayu\n");
					break;
				case 3:
					printf("special recharge thai gayu\n");
					break;
				default:
					printf("invalid choice\n");
			}
		default:
			printf("invalid choice");
	}
	getch();
}
