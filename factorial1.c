#include <cs50.h>
#include <stdio.h>

int main()
{
    int n;
    long long factorial = 1;

    printf("Enter an integer: ");
    n = get_int();
    fact = factorialize(n);
    printf("Factorial of %i = %lld\n", n,fact);

    long long factorialize(n)
    {
        if (n < 0){
           printf("Negative numbers are not allowed!!");
        }

        else if( n == 0)
        {
        return factorial;
        }
        else
        {
            factorial = (n * factorialize(n-1));
        }


    }


}
