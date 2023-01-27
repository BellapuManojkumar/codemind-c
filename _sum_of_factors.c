#include<stdio.h>
int main()
{
    int n,sum=0,b,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        b=n%i; 
        if(b==0)
        {
            sum=sum+i;
            }
            }
            printf("%d",sum);
            }