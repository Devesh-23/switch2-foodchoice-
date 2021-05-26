#include<stdio.h>
int main(){
	int choice;
	printf("Enter any random no from 1 to 5 : ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
		{
			printf(" Food Item: Aloo Paratha \n Price: RS 50");
			break;
		}
		case 2:
		{
			printf(" Food Item: Egg Roll \n Price: RS 250");
			break;
		}
		case 3:
		{
			printf(" Food Item: Momos \n Price: RS 100");
			break;
		}
		case 4:
		{
			printf(" Food Item: Chiken \n Price: RS 500");
			break;
		}
		case 5:
		{
			printf(" Food Item: Brayani \n Price: RS 350");
			break;
		}
		default:
			printf(" Enter no from 1 to 5 ");
	}
}
