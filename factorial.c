#include <cs50.h>
#include <stdio.h>

int main()
{
    int n;
    int i;
    long long factorial = 1;

    printf("Enter an integer: ");
    n = get_int();
    if(n < 0)
        {
            printf("Negative numbers are not allowed!!");
        }
    else{
        for(i = 1; i <= n; i++){
            factorial = factorial * i;
        }
        printf("Factorial of %i = %lld\n", n,factorial);
    }


}
