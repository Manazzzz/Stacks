#include<stdio.h>
#include<string.h>
#define max 100


int a[max];
int top=-1;

void push(int value)
{
    if(top==max-1)
    {
        printf("Stack overflow\n");
        return;
    }
    top=top+1;
    a[top]=value;
}

int pop()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
        return '\0';
    }
    int temp = a[top];
    top=top-1;
    return temp;
}

void insertAtBottom(int value)
{
    if(top==-1)
    {
        push(value);
    }
    else
    {
        int temp = pop();
        insertAtBottom(value);
        push(temp);
    }
}

void rev()
{
    if(top==-1)
    {
        return;
    }
    int temp = pop();
    rev();
    insertAtBottom(temp);
}

void print()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}
void main()
{
    int choice;
    do
    {
        printf("Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: int n;
                    printf("Value to be pushed : ");
                    scanf("%d",&n);
                    push(n);
                    break;
            case 2: pop();
                    break;
                    
            case 3: rev();
                    break;
            case 4: print();    
                    break;
            case 5: printf("Exiting...");
                    break;
            default: printf("Enter a valid choice");
                     break;
            
        }
    }while(choice!=5);
    
}
