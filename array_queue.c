#include<stdio.h>
#include<stdlib.h>
#define size 1000
void push(int * arr,int * front)
{
    if(*front<size-1)
    {
    *front+=1;
    scanf("%d",&arr[*front]);
    }
    else
    {
        printf("Queue full :(\n");
    }
}
void pop(int *arr,int * front)
{
    if(*front>-1)
    {
        printf("%d\n",arr[*front]);
        *front-=1;
    }
    else
    {
        printf("Queue Empty :(\n");
    }
}
int main()
{
    int arr[size];
    int front=-1;
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
            push(arr,&front);
            break;
        case 2:
            pop(arr,&front);
            break;
        case 3:
            exit(0);
            break;
        }
    }
    return 0;
}
