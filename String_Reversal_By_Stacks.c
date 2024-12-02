#include<stdio.h>
#include<string.h>
#define max 100


char a[max];
int top=-1;

void push(char c)
{
    if(top==max-1)
    {
        printf("Stack overflow\n");
        return;
    }
    top=top+1;
    a[top]=c;
}

char pop()
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

void main()
{
    char str[max],ch;
    printf("Enter a string : ");
    gets(str);
    int l;
    l=strlen(str);
    
    for(int i=0;i<l;i++)
    {
        push(str[i]);
    }
    
    for(int i=0;i<l;i++)
    {
        ch=pop();
        printf("%c",ch);
    }
    
}
