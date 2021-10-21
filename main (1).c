#include <stdio.h>
#include <math.h>
int main() 
{
 char operator;
 double a,b,result,fact=1;
 int i;
 
 printf("enter the operator from(+,-,*,/,^,!)");
 scanf("%c",&operator);
 if(operator == '!')
 {
 printf("enter your number");
 scanf("%lf",&a);
 }
 else
{
 printf("enter the value of a:");
 scanf("%lf",&a);
 printf("enter the value of b:");
 scanf("%lf",&b);
}
 switch(operator)
 {
   case '+': printf("The result of %.2lf + %.2lf is %.2lf",a,b,a+b);
   break;
   
   case '-': printf("The result of %.2lf - %.2lf is %.2lf",a,b,a-b);
   break;
   case '*':printf("The result of %.2lf * %.2lf is %.2lf",a,b,a*b);
   break;
   case'/':printf("The result of %.2lf / %.2lf is %.2lf",a,b,a/b);
   break;
   case'^':
          result = pow(a,b);
          printf("%.2lf^%.2lf = %.2lf", a, b, result);
          break;
         
   case'!':
       
       for (i = 1; i <= a; ++i)
         {
            fact *= i;
         } 
      
         printf("Factorial of %.2lf = %.2lf \n", a, fact);
    
          
   break;
   default:printf("you have entered the wrong operator");
 }

 return 0;
   }