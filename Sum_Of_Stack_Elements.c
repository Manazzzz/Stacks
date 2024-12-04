void sum()
{
    int s = 0;
    if(top==-1)
    {
        printf("Stack underflow\n");
        return;
    }
    for(int i=top;i>=0;i--)
    {
        s=s+a[i];
    }
    printf("Sum of elements in stack : %d\n",s);
}
