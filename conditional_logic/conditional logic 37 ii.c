//37.i monday to sunday  using switchcase
#include<stdio.h>
int main()
{
	int days;
	printf("\t\t\t***days of one week***\n\n\n");
	printf("\n1 for monday\n2 for tuesday\n3 for wednesday\n4 for thursday\n5 for friday\n6 for staurday\n7 for sunday");
	scanf("%d",&days);
	
	switch(days)
	{
		case 1:
			printf("monday");
			break;
			
		case 2:
			printf("tuesday");
			break;
			
		case 3:
			printf("wednesday");
			break;
			
		case 4:
			printf("thursday");
			break ;
			
		case 5:
			printf("friday");
			break;
			
		case 6:
			printf("saturday");
			break;
			
		case 7:
			printf("sunday");
			break;
			
			return 0;
	}
	
}
