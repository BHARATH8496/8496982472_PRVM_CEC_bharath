//1,4,9,25,36,49,81,...n
#include<stdio.h>
int main()
{
    int limit,x;
    scanf("%d",&limit);
    for(x=1;x<=limit;x++)
    {
        if(x%2!=0)
            printf("%d,",x*x);
        else
        printf("%d,",(x*x)*-1);
    }
    return 0;
}    