#include<stdio.h>
#include<string.h>
#define max 100

char a[max]; 
int top = -1; 


void push(char c)
{
    if(top == max - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    top = top + 1;
    a[top] = c;
}


char pop()
{
    if(top == -1)
    {
        printf("Stack underflow\n");
        return '\0';
    }
    char temp = a[top];
    top = top - 1;
    return temp;
}


void checkvalid(char* expression)
{
    int l = strlen(expression);
    int i;
    
    
    for(i = 0; i < l; i++)
    {
        
        if(expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
        {
            push(expression[i]);
        }
        
        else if(expression[i] == ')' || expression[i] == '}' || expression[i] == ']')
        {
            if(top == -1 || 
               (expression[i] == ')' && a[top] != '(') || 
               (expression[i] == '}' && a[top] != '{') || 
               (expression[i] == ']' && a[top] != '['))
            {
                printf("Not balanced\n");
                return;
            }
            else
            {
                pop();
            }
        }
    }
    
    
    if(top == -1)
    {
        printf("Balanced parentheses\n");
    }
    else
    {
        printf("Unbalanced\n");
    }
}

void main()
{
    char str[max]; 
    printf("Enter a string with brackets: ");
    gets(str); 
    checkvalid(str);
}
