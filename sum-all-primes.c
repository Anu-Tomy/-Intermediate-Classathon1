
#include <cs50.h>
#include <stdio.h>

int sumPrimes(int num);

int main()
{
    int num;
    int sum;
    printf("Enter the limit: ");
    num = get_int();
    sum = sumPrimes(num);
    printf("Sum of all the prime numbers upto %i is: %i\n", num, sum);
}

int sumPrimes(num)
{
    int sum = 0;
    int isPrime;
   //Check for every number upto num, whether it is prime number or not.
    for (int i = 2; i <= num; i++)
    {
       isPrime = 1;
       for(int j = 2; j < i; j++)
       {
           if((i % j) == 0)
           {
            isPrime = 0;
            break;
          }
       }

        if(isPrime == 1)
         {
            sum = sum + i;
         }
    }
    return sum;
}
