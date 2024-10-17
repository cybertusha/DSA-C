#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};


struct node*head;


void traversal()
{
    struct node *temp=head;
    printf("listed elements are:");
    if(head==NULL)
    {
        printf("linked is empty!!!");
    }
    while(temp!=NULL)
    {
        printf("%d--->",(temp->data));
        temp=temp->next;
    }
    printf("END");
}



void create()
{
    int n,i;
    struct node *p=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number of nodes:");
    scanf("%d",&n);

    printf("\n Enter the  data:");
    scanf("%d",&(head->data));

    p=head;

    for(i=1;i<n;i++)
    {
        p->next=(struct node*)malloc(sizeof(struct node));
        p=p->next;
        printf("\nEnter the data:");
        scanf("%d",&(p->data));
        p->next=NULL;
    }
    traversal();

}



void count()
{
    int count=0;
    struct node*p;
    if(head==NULL)
    {
        printf("\nlinked is empty");
    }
    while(p!=NULL)
    {
        count=count+1;
        p=p->next;
    }
    printf("count of nodes:%d",count);
}

void search()
{
    int x,flag=0;
    printf("\nEnter the element to be serached:");
    scanf("%d",&x);

    struct node*p=head;
    if(head==NULL)
    {
        printf("\nLinked list is empty!!!");
    }
    while(p!=NULL)
    {
        if(x==p->data)
        {
            flag=1;
            break;
        }
        p=p->next;
        if(flag==1)
        {
            printf("\nElement is found!!!");
        }
        else
        {
            printf("Element is not found!!!");
        }
    }
}

int main()
{
    
    create();
    count();
  search();
    return 0;
}