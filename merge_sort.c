#include <stdio.h>
#include <stdlib.h>


void print(int a[],int n)
{
    int i;
    printf("your array elelments are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf("\n\n");
    }
}

void merge( int a[],int mid ,int low ,int high)
{
    int i,j,k,b[30];

    i=low;
    j=mid+1;
    k=low;

    while(i<=mid&&j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }

    }

    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }

    while(j<=high)
    {
        b[k]=a[j];
        j++;
        k++;
    }

    for(i=low;i<=high;i++)
    {
        a[i]=b[i];
    }

}

void mergesort(int a[],int low ,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,mid,low,high);
    }
}

void main()
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

    print(a,n);
    mergesort(a,0,n-1);
     print(a,n);

}