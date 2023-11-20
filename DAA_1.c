#include<stdio.h>
int Fib_Non_Recursive(int n)
{
    int a=0;
    int b=1;
    int next,i;
    if(n<=1)
    {
        return n;
    }
    for(i=2;i<=n;i++)
    {
        next=a+b;
        a=b;
        b=next;
    }
    return b;
}
int Fib_Recursive(int n)
{
    if(n<=1)
    {
        return n;
    }
    return Fib_Recursive(n-1)+Fib_Recursive(n-2);
}
int main()
{
    int n,choice;
    printf("Enter the value of n ");
    scanf("%d",&n);
    printf("Select the method from below\n");
    printf("1) Fib_Non_Recursive\n 2) Fib_Recursive");
    printf("Type 1 or 2 ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
                printf("fibonaccis(%d)(Non_Recursive)=%d\n",n,Fib_Non_Recursive(n));
                break;
        case 2: 
                printf("fibonaccis(%d)(Fib_Recursive)=%d\n",n,Fib_Recursive(n));
                break;
        default: 
                printf("invalid output");
    }
    
    
}
