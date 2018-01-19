//Used recursion instead of loop

#include<stdio.h>

int fibonacci(int num)
{
    if(num==0)
        return 0;
    else if(num==1)
        return 1;
    else
        return fibonacci(num-1)+fibonacci(num-2);
}

int main()
{
    int n,result;
    while(1)
    {
        printf("Enter a positive number: ");
        scanf("%d",&n);

        //The input has to be verified. It has to be positive
        result=fibonacci(n);        //Calling recursive function
        printf("Output = %d\n",result);
    }


    return 0;
}
