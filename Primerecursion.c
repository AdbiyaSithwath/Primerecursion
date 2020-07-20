#include <stdio.h>
int primenum(int, int);
int main()
{
    int num=456,c;
    c = primenum(num, num / 2);
    if (c == 1)
    {
        printf("456 is a prime number\n", num);
    }
    else
    {
        printf("456 is not a prime number\n", num);
    }
    return 0;
}
int primenum(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return primenum(num, i - 1);
       }       
    }
}
