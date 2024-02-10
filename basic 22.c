////22. Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P
#include<stdio.h>
#include <math.h> 
int main() {
    double principal_amount, rate, time_duration, half_yearly_amount, quarterly_amount, half_yearly_compound_interest, quarterly_compound_interest;
    
    printf("Enter the principal amount: ");
    scanf("%lf",&principal_amount);
    printf("Enter the rate of interest: ");
    scanf("%lf",&rate);
    printf("Enter the time duration: ");
    scanf("%lf",&time_duration);
    
    half_yearly_amount = principal_amount*((pow((1+(rate/2)/100),2*time_duration)));
    
    half_yearly_compound_interest = half_yearly_amount - principal_amount;
    
    printf(" The half-yearly compound interest is: %lf",half_yearly_compound_interest);
    
    quarterly_amount = principal_amount*((pow((1+(rate/4)/100),4*time_duration)));
    
    quarterly_compound_interest = quarterly_amount - principal_amount;
    
    printf(" \nThe quarterly compound interest is: %lf",quarterly_compound_interest);
    
    return 0;
}
