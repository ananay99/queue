#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
void push(struct node ** head)
{
    if(*head==NULL)
    {
        int input;
        scanf("%d",&input);
        *head=(struct node *)malloc(sizeof(struct node));
        (*head)->next=NULL;
        (*head)->data=input;
    }
    else
    {
        struct node *funchead=*head;
        while(funchead->next!=NULL)
        {
            funchead=funchead->next;
        }
        funchead->next=(struct node *)malloc(sizeof(struct node));
        funchead=funchead->next;
        funchead->next=NULL;
         int input;
        scanf("%d",&input);
        funchead->data=input;
    }
}
void pop(struct node ** head)
{
    if(*head!=NULL)
    {
        struct node * freenode=*head;
        *head=(*head)->next;
        printf("%d\n",freenode->data);
        free(freenode);
    }
    else
    {
        printf("Queue Empty\n");
    }
}
int main()
{
    struct node * head=NULL;
    while(1)
    {
        printf("1 for push\n");
        printf("2 for pop\n");
        printf("3 for exit\n");
        int input;
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            push(&head);
            break;
        case 2:
            pop(&head);
            break;
        case 3:
            exit(0);
            break;
        }
    }
    return 0;
}
