/*
    This program is a simple Calculator
*/

#include<stdio.h>
#include<conio.h>
void main()
{
    float num1,num2;
    char opr;
    printf("Enter the first value, operator and second value: \n");
    scanf("%f %c %f",&num1, &opr, &num2);
    switch(opr)
    {
        case'+':
         printf("The result is: %.2f",num1+num2);
         break;
        case'-':
          printf("The result is: %.2f",num1-num2);
          break;
        case'*':
          printf("The result is: %.2f",num1*num2);
          break;
        case'/':
          printf("The result is: %.2f",num1/num2);
          break;
    }
}
