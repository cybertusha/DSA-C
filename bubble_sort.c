#include <stdio.h>

int main()
{
    int a[20];
    int i ,n ,j,temp;

    printf("\nEnter the size of array:");
    scanf("%d",&n);

    printf("\nEnter the array elements:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }

    printf("\nyour array element are:");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }

    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j>a[j+1]])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
        printf("\nYour array elements after sorting: ");
        for(i=0;i<n;i++)
        {
              printf("%d  ",a[i]);
        }

    return 0;
}