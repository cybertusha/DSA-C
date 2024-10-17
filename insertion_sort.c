//PRGRAM ON A insertion SORT
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20];
    int i,j,n,temp;

    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("\nEnter the  array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
//logic of program
    for(i=1;i<n;i++)
    {
        temp=a[i];
        
        for( j=i-1;  j>=0  &&  a[j]>temp;  j-- )
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }

    printf("\nYour array eleemnt are after sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
