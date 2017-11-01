#include <cs50.h>
#include <stdio.h>

int sumfibs(int num);
int result = 0;

int main(void)
{
    int num;
    printf("Enter a positive integer: ");
    num = get_int();
    result = sumfibs(num);
    printf("Sum of all odd Fibonacci numbers <= %i is %i\n", num,result);
}

    int sumfibs(int num)
    {
        int prevnumber = 0;
        int currnumber = 1;

          while (currnumber <= num)
            {
                if ((currnumber % 2) != 0)
                {
                    result += currnumber;
                }
                currnumber += prevnumber;
                prevnumber = currnumber - prevnumber;
            }
        return result;
    }
