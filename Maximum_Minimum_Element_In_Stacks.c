#include<stdio.h>
#define MAX 100

int a[MAX];
int top=-1;

void push()
{
    int value;
    printf("Value to be pushed : ");
    scanf("%d",&value);
    if(top==MAX-1)
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
    return temp;
}

void maximum_minimum()
{
    if(top==-1)
    {
        printf("Underflow\n");
        return;
    }
    int maxx = a[top];
    for(int i=top;i>=0;i--)
    {
        if(a[i]>maxx)
        {
            maxx=a[i];
        }
    }
    printf("Maximum element is : %d\n",maxx);
    int minn=a[top];
    for(int i=top;i>=0;i--)
    {
        if(a[i]<minn)
        {
            minn=a[i];
        }
    }
    printf("Minimum element is : %d\n",minn);
    
}

void main()
{
    push();
    push();
    push();
    push();
    push();
    push();
    maximum_minimum();
}
