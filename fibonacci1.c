//Corrected variable names

#include<stdio.h>
int main()
{
    int n,cnt,result,prev1,prev2;
    while(1)
    {
        printf("Enter a positive number: ");
        scanf("%d",&n);

        prev1=0;
        prev2=1;

        if(n==0)
        {
            result=0;
        }
        else if(n==1)
        {
            result=1;
        }
        else
        {
            //Recursion is better way to calculate Fibonacci numbers
            for(cnt=2;cnt<=n;cnt++)
            {
                result=prev1+prev2;
                prev1=prev2;
                prev2=result;
            }
        }
        printf("Output = %d\n",result);

    }
    return 0;
}
