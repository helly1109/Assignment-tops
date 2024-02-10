////25 Accept 5 expense from user and find average of expense
#include<stdio.h>
int main()
{
	int user1,user2,user3,user4,user5,average;
	
	printf("enter the 1st person expense ");
	scanf("%d",&user1);
	
	printf("enter the 2nd person expense ");
	scanf("%d",&user2);
	
	printf("enter the 3rd person expense ");
	scanf("%d",&user3);
	
	printf("enter the 4th person expense ");
	scanf("%d",&user4);
	
	printf("enter the 5th person expense ");
	scanf("%d",&user5);
	
	average=(user1+user2+user3+user4+user5)/5;
	
	printf("average of expense %d",average);
    
	return 0;
    
}
