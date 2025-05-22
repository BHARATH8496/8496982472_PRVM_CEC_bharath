//1,4,9,16,25,...n
#include<stdio.h>
int main()
{
    int limit,x;
    scanf("%d",&limit);
    for(x=1;x<=limit;x++)
    {
        printf("%d,",x*x);
    }
    return 0;
}