#include <cs50.h>
#include <stdio.h>

long long factorialize(int n);
int main()
{
    int n;
    printf("Enter an integer: ");
    n = get_int();
    long long fact = factorialize(n);
    printf("Factorial of %i = %lld\n", n, fact);
}
long long factorialize(n)
    {
        long long factorial = 1;

        if (n < 0)
        {
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
        return factorial;
    }

