#include<stdio.h>
int main()
{
    int  a[20];
    int i,n,j,k,temp;

    printf("Enter the size of array :");
    scanf("%d",&n);
    
    printf("\nEnter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(a[k]>a[j])
            {
                k=j;
            }
        

        }
            if(k!=i)
            {
                temp=a[i];
                a[i]=a[k];
                a[k]=temp;
            }
    }

    printf("\n\n\n\nsorting elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }    

 return 0;
}