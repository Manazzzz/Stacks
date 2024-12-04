// linked lists as stacks 

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node* next;
};
struct node* start;
struct node* getNode(int n)
{
    struct node* p = (struct node*)malloc(sizeof(struct node));
    if(p==NULL)
    {
        return p;
    }
    p->info=n;
    p->next=NULL;
    return p;
}

void push(int value)
{
    struct node* new_node = getNode(value);
    
    if(new_node==NULL)
    {
        return;
    }
    else if(start==NULL)
    {
        start=new_node;
    }
    else
    {
        new_node->next=start;
        start=new_node;
    }
}

void pop()
{
    if(start==NULL)
    {
        return;
    }
    else
    {
        struct node* temp = start;
        start=temp->next;
        free(temp);
    }
}

void traverse()
{
    if(start==NULL)
    {
        return;
    }
    else
    {
        struct node* temp = start;
        while(temp!=NULL)
        {
            printf("%d ",temp->info);
            temp=temp->next;
        }
        printf("\n");
    }
}

void main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);
    
    traverse();
    
    pop();
     
    traverse();
    
    pop();
    traverse();
    
}
