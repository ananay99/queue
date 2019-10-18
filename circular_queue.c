#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void push(int * cqueue,int * front,int * rear)
{
    if(*rear==(SIZE-1))
    {
        if(*front==0)
            (*front)+=1;
        *rear=0;
        scanf("%d",&cqueue[*rear]);
    }
    else if((*front-1)==*rear)
    {
        (*front)+=1;
        if(*front==SIZE)
            *front=0;
        (*rear)+=1;
        scanf("%d",&cqueue[*rear]);
    }
    else
    {
        *rear+=1;
        scanf("%d",&cqueue[*rear]);
    }
}
void pop(int * cqueue,int * front,int * rear)
{
    if(*front!=*rear)
    {
        printf("%d\n",cqueue[*front]);
        *front+=1;
        if(*front==SIZE)
        {
            *front=0;
        }
    }
    else
    {
        printf("Queue Empty\n");
    }
}
int main()
{
    int cqueue[SIZE];
    int front=0;
    int rear=0;
    while(1)
    {
        int input;
        printf("1 for push\n");
        printf("2 for pop\n");
        printf("3 for exit\n");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            push(cqueue,&front,&rear);
            break;
        case 2:
            pop(cqueue,&front,&rear);
            break;
        case 3:
            exit(0);
            break;
        }
    }
    return 0;
}
