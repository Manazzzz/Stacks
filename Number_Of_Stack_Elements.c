void count()
{
    int c=0;
    if(top==-1)
    {
        printf("Stack is empty\n");
        return;
    }
    for(int i=top;i>=0;i--)
    {
        c++;
    }
    printf("Number of elements : %d\n",c);
}
