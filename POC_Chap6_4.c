/*
RuizeZ
5/18/2020
Write a program that implements the Sieve of Eratosthenes algorithm to find prime number from 1 to 1000
*/
#include <stdio.h>
int main(void)
{
    int numlist[1000] = {[0 ... 999]=1};
    int *numlistP = numlist;
    //printf("%d\n",numlist[100]);
    for (int i = 2; i < 1000; i++)
    {
        if (i == 2)
        {
            for (int j = i * 2; j <= 1000; j += i)
            {
                *(numlistP + j - 1) = 0;
            } 
        }
        else
        {
            if (i % 2 != 0)
            {
                for (int j = i * 2; j <= 1000; j += i)
                {
                    *(numlistP + j - 1) = 0;
                }
            }
        }
    }
    for (int k = 1; k < 1000; k++)
    {
        if (*(numlistP+k) == 1)
        {
            printf("%d ", k+1);
        }
    } 
    printf("\n");
}