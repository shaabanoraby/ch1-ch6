#include <stdio.h>
//prototype
int factorial(int n);

int main()
{

    int number;
    int fact;     //result of factorial function


    printf("please ,enter the number\n");    //Ask to add number
    scanf("%d",&number);                     //recive the number and store in var


    fact=factorial(number);          //store the value of factorial

    if (fact!=-1)
        {
    printf("%d",fact);
        }

     else
        {

         printf("not valid");

        }

     return 0;

}
/*function implementation*/

int factorial(int n)
{
  if (n>=0)      // check if positive or not
  {

      if(n==1)     //base case number equal 0 or 1
      {

         return 1;

     }
     else
     {
         /*Recursive Condition: If the number is any number except zero, return the same number multiplied by Factorial of the previous number*/
         return   n*factorial(n-1);
     }

 }

 else
    {

        return -1;
    }

}
