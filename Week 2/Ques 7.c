#include<stdio.h>
int main()
{
    int n,i=5,count=0; //Initializing all Variables in Integer Format to truncate decimal
    printf("Enter number to find Trailing Zeroes in its Factorial:");
    scanf("%d",&n);

    while(n/i>=1)   //The loop will run until the remainder is WHOLE Part of the quotient is greater than 0
    {
        count+=n/i; //Adding the whole value of quotient to the value of count
        i*=5;  //Raising Power of 5 every time the condition satisfies
    }
    printf("Number of Trailing Zeroes=%d",count);

  return 0;
}
