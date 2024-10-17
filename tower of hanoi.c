#include <stdio.h>
void toh(int n, char source,char dest,char aux)
{
    if(n==1)
    {
        printf("\n\n\nmove disk 1 from rod %c to rod %c",source ,dest);
        return;
    }
    
    toh(n-1,source,aux,dest);
    {
        printf("\n\n\nmove disk %d  from rod %c to rod %c",n,source ,dest);
    }
    toh(n-1,aux,dest,source);

}

int main()
{
    int n;
    printf("Enter the no of disk:");
    scanf("%d",&n);

    toh(n,'A','C','B');


    return 0;
}