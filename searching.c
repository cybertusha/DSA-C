#include <stdio.h>

int main()
{
    int a[100];
    int flag=0,i,n,key;

    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("\nEnter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key==a[i])
        
        {
                flag=1;
                break;
        }
    }

    if(flag==1)
    {
        printf("Element is found!!!!");
    }
    else
    {
        printf("Element is not found!!!!");
    }

    return 0;
}