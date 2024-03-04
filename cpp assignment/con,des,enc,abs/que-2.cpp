//2.Write a program of Addition, Subtraction, Division, Multiplication using constructor. 
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,result;
    cout<<"Enter Two Numbers:";
    cin>>num1>>num2;
    result = num1+num2;
    cout<<endl<<"Addition Result = "<<result<<endl;
    result = num1-num2;
    cout<<endl<<"Subtraction Result = "<<result<<endl;
    result = num1*num2;
    cout<<endl<<"Multiplication Result ="<<result<<endl;
    result = num1/num2;
    cout<<endl<<"Division Result = "<<result<<endl;
    return 0;
}
