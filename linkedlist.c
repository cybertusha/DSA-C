#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;

};
struct node* head;
void traversal()
{
    struct node* p=head;
    if(head=NULL)
    {
        printf("Linked list is empty");
    }
    while((p!=NULL))
    {
        printf("%d->",p->data);
        p=p->next;
    }
    printf("END");
}
//create function
void create()
{
    int i,n;
   
    struct node*p;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter how many nodes do you want to insert:");
    scanf("%d",&n);

    printf("Enter the data :");
    scanf("%d",&(head->data));

    p=head;

    for(i=1;i<n;i++)
    {
        p->next=(struct node*)malloc(sizeof(struct node));
        p=p->next;
        printf("Enter the data:");
        scanf("%d",&(p->data));

        p->next=NULL;

    }
}
//count funtion
int count()
{
    int count=0;
    struct node*p=head;
    if(head!=NULL)
    {
        printf("linked list empty");
    }
    while(p!=NULL)
    {
        count=count+1;
        p=p->next;
    }

printf("%d",count);
return count;
}

int main()
{
    char ch;
    printf("Do you want t create linked list:(y/n)");
    scanf("%s",&ch);
    if(ch=='n')
    {
        return 1;
    }
    create();
    traversaly();
    count();
    return 0;
}                                                                                                                  