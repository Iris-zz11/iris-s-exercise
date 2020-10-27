#include<stdio.h>
int main()
{
    int n=0;
    int in;
    scanf("%d",&in);
    while(in!=1)
    {
        n++;
        if(in%2==0)
        {
            in/=2;
            continue;
        }
        in=(3*in+1)/2;
    }
    printf("%d",n);
    return 0;
}
