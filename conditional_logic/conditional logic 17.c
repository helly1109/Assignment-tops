//17.Write a C program to check whether a triangle can be formed with the given values for the angels
#include<Stdio.h>
int main()
{
	int ang1,ang2,ang3;
	
	printf("enter the 1st angle of triangle");
	scanf("%d",&ang1);
	
	printf("enter the 2nd angle of triangle");
	scanf("%d",&ang2);
	
	printf("enter the 3rd angle of triangle");
	scanf("%d",&ang3);

   if(ang1+ang2+ang3==180)
   {
   	   printf("the given angle can be form");
   }

  else
   {
     printf("the given angle cannot be form");
 }
 return 0;
}
   
