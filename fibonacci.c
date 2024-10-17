#include <stdio.h>

int fibo(int i)
{
    if(i==0)
    {
        return 0;
    }
    else if(i==1)
    {
        return 1;
    }
    else
    {
        return (fibo(i-1)+fibo(i-2));
    }
    return 0;
}

int main()
{
    int i,n;
    printf("enter the number:");
    scanf("%d",&n);

    printf("fibonacci  series is :");
    for(i=0;i<n;i++)
    {
        printf("%d ",fibo(i));
    }
}