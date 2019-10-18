#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> stk1,stk2;
    int input;
    int number;
    while(true)
    {
        printf("1 for push\n");
        printf("2 for pop\n");
        printf("3 for exit\n");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            printf("\nEnter number to input\n");
            scanf("%d",&number);
            stk1.push(number);
            break;
        case 2:
            if(stk2.empty())
            {
                if(stk1.empty())
                {
                    printf("No element present\n");
                }
                else
                {
                    while(!stk1.empty())
                    {
                        stk2.push(stk1.top());
                        stk1.pop();
                    }
                    printf("%d\n",stk2.top());
                    stk2.pop();
                }
            }
            else
            {
                 printf("%d\n",stk2.top());
                    stk2.pop();
            }
            break;
        case 3:
            exit(0);
            break;
        }
    }
    return 0;
}
