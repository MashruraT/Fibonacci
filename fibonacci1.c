#include<stdio.h>
int main()
{
    int i,j,k,l,m;
    while(1)
    {
        printf("Enter a positive number: ");
        scanf("%d",&i);

        l=0;
        m=1;
        //Include boundary test. What if the input is negative?
        if(i==0)
        {
            k=0;
        }
        else if(i==1)
        {
            k=1;
        }
        else
        {
            for(j=2;j<=i;j++)
            {
                k=l+m;
                l=m;
                m=k;
            }
        }
        printf("Output = %d\n",k);

    }
    return 0;
}
