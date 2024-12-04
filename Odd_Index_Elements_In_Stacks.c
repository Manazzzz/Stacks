void odd_pos_elements()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
        return;
    }
    for(int i=top;i>=0;i--)
    {
        if(i%2!=0)
        {
            printf("%d\n",a[i]);
        }
    }
}
