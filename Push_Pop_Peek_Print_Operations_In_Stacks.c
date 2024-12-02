#include<stdio.h>
#define max 100

int a[max];
int top=-1;

void push()
{
    int value;
    printf("Value to be pushed : ");
    scanf("%d",&value);
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
        return -1;
    }
    int temp = a[top];
    top=top-1;
}

int peek()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
        return -1;
    }
    printf("Top of the stack is : %d\n",a[top]);
}

void print()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
        return;
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
        printf("Enter\n1.Push\n2.Pop\n3.Peek\n4.Print\n5.Exit\n");
        scanf("%d",&choice);
        switch(choice)
    {
        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: peek();
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
