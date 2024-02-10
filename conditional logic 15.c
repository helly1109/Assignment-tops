//15.Write a C program to determine eligibility for admission to a profession
//course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
//in Chem>=50 and Total in all three subject >=190 or Total in Maths and
//Physics >=140 --------------------------------------Input the marks obtained in
//Physics :65 Input the marks obtained in Chemistry :51 Input the marks
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
//188 Total marks of Maths and Physics : 137 The candidate is not eligible.
#include<stdio.h>
int main()
{
	int phy, chem,maths,total_all,total_maths_physics;
	
	printf("input the marks obtained in physics :");
	scanf("%d",&phy);
	
	printf("input the marks obtained in chemistry:");
	scanf("%d",&chem);
	
	printf("input the marks obtained in maths:");
	scanf("%d",&maths);
	
	printf("input the marks obtained in total_all :");
	scanf("%d",&total_maths_physics);

if ((phy >= 65 && chem >=55 && maths >=50 && total_all >=190) || total_maths_physics >=140)
{
	printf("the candidate is eligable. \n");
}
 else 
{
	printf("the candidate is not eligable .\n");
}
return 0;
}

