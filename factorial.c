#include <stdio.h>

int fact(int n)
{
    if(n>=1)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }

    return 0;
}

int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);

    printf("\nFactorial is %d=%d",n,fact(n));
    return 0;

}