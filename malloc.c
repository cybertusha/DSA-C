//write a program using malloc() function
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,*ptr,sum=0;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));

    //if memory cannot bbe allocated
    if(ptr==NULL)
    {
        printf("ERROR!!!");
        exit(0);
    }
    printf("\nEnter the elements:\n");
    for(i=0;i<n;i++)
    {
            scanf("%d",ptr+i);
            sum+=*(ptr+i);
    }
    printf("\nSum = %d",sum);
    //deallocating memory
    free(ptr);
    
    return 0;
}