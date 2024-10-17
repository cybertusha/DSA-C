#include<stdio.h>
#define max 20
 int data[max],rear,front;

 int full()
 {
    if(rear==max-1)
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
    if(rear==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
 }

 void initialize()
 {
    front=-1;
    rear=-1;
 }


 void insert()
 {
    int x;
    printf("Enter the element to be insert:");
    scanf("%d",&x);

    if(front==-1&&rear==max-1|| front==rear+1)
    {
        printf("queue is overflow!!!");
    }
    else
    {
        if(front==-1&&rear==-1)
        {
            front=front+1;
            rear=rear+1;
        }
        else
        {
            rear=rear+1;
        }
        data[rear]=x;
        printf("Data enter successfully!!!!!");

    }
   
 }

 void delete()
 {
    int x;
    if(front==-1&& rear==-1)
    {
        printf("\nqueue is underflow");
    }
    else
    {
        x=data[front];
        if(rear==front)
        {
            rear=-1;
            front=-1;
        }
        else
        {
            front=front+1;
        }
        printf("%d data pop successfully",x);
    }

 }


 void print()
 {
    int i;
    if(rear==-1)
    {
        printf("\nqueue is empty!!!");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d",data[i]);
        }
    }
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
            case 1: insert();
                    break;
            case 2: delete();
                    break;
            case 3: print();
                    break;
            case 4: printf("THANK YOU!!!!!!");
                    break;
            default:printf("\nINVALID CHOICE!!!!");
        }
    }while(ch!=4);
    
}
