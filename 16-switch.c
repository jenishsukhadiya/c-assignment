#include<stdio.h>
main()
{
	int days;
	printf("enter a number=");
	scanf("%d",&days);
	switch(days)
	{
		case 1:
		printf("sunday");
		break;
		
		case 2:
		printf("monday");
		break;
	
		case 3:
		printf("tuesday");
		break;
		
		case 4:
		printf("wednesday");
		break;
		
		case 5:
		printf("thursday");
		break;
	
		case 6:
		printf("friday");
		break;
	
		case 7:
		printf("saturday");
		break;
		
		default :
			printf("something is wrong");
	}
}
