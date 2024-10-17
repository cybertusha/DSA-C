#include<stdio.h>
#define N 10
int top ,a[N];
void push()
{
    int x;
   
    if(full()==0)
    {
         printf("Enter the element to be insert:\n");
    scanf("%d",&x);
        top=top+1;
        a[top]=x;
        printf("Element push Successfully!!");
    }
    else
    {
        printf("\nsatck is overflow");
    }

}
void pop()
{
   
    if(empty()==0)
    {
        int x;
        x = a[top];
        top = top-1;
        printf("%d data pop successfully\n\n\n",x);
    }
    else
    {
        printf("\n stack is underflow");
    }

   



}
int full()
{
     if(top==N-1)
     {
       return 1;
     }
     else
     {
        return 0;
     }
}

int empty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void print()
{
    int i;
    if(top==-1)
    {
        printf("\n stack underflow");
    }
    else
    {
        for(i=0;i<=top;i++)
        {
            printf("%d",a[i]);
        }
    }

}
void initialize()
{
    top=-1;
}

void main()
{ 
    initialize();
    int ch;
    do
    {
        printf("\n1.INSERT ELEMENT\n2.DELETE ELEMENT \n3.PRINT ELEMENT \n4.EXIT");
        printf("\n Enter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: print();
                    break;
            case 4: printf("THANK YOU!!!!!!");
                    break;
            default:printf("\nINVALID CHOICE!!!!");
        }
    }while(ch!=4);
    
}
