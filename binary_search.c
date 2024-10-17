//PROGRAM ON BINARY SEARCH
#include<stdio.h>
int main()
{
    int a[20],i,j,n,temp,key,mid;

    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("Enter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter the array element to be searched:");
    scanf("%d",&key);

    i=0;
    j=n-1;
    mid=(i+j)/2;

    while(key!=a[mid]&&i<=j)
    {
        if(key>a[mid])
        {
            i=mid+1;
        }
        else
        {
            j=mid-1;
        }
        mid=(i+j)/2; 
    }

    if(i<=j)
    {
        printf("\nElement is found!!!");
    }
    else
    {
        printf("Element is not found!!!");
    }
    return 0;
}