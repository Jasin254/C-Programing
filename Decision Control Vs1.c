#include<stdio.h>
 
void main( )
{  
int n;  
printf("Enter a number less than 10" );
scanf("%d",&n);
if (n<=10)
{
printf ("Number is less than or equal to 10" );
}
}





#include<stdio.h>

void main ()
{
    printf("My name is Jasin");
}




#include <stdio.h>
 
void main()
{
int num;
printf("Enter a number to check if it is negative:n");
scanf("%d",&num);
if(num<0)
{
  printf("Number is negative");
}
else
{
  printf("Number is positive");
}
}




////
Take one number from the user. Check it whether it is negative, zero or positive and print the message for it.

#include <stdio.h>

void main()
{
 int num;
 printf("Enter any number:");
 scanf("%d",&num);

 if (num < 0)
  printf("number is negative");

 else
 {
  if (num==0)
   printf("number is 0");
  else
   printf("number is positive");
 }


#include <stdio.h>
 
void main()
{
int num;
printf("Enter any number:");
scanf("%d",&num);
 
if (num < 0)
  printf("number is negative");
 
else
{
  if (num==0)
   printf("number is 0");
  else
   printf("number is positive");
}
}

/////Discount Eligibility
#include <stdio.h>
void main()
{
    float amnt, famnt, dis;
    printf("Enter the total amount");
    scanf("%f",& amnt);
    famnt=amnt;

    if (amnt>2000)
    {
        printf("You are eligible for discount");
        dis=0.1*amnt;
        famnt=famnt-dis;

    }
    printf("final amount is %f", famnt);
}





