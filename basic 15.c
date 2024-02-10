//15.Convert school’s name in abbreviated form
#include<stdio.h>
int main()
{
	char fname[20],mname[20],lname[20];
	printf("enter full name(first,middle,last):");
	scanf("%s %s",fname , mname ,lname);
	
	//print abriviated name
	printf("abriviated name:");
	    printf("%c .%c. %s\n",fname[0],mname[0],lname);
	
	return 0;
}
