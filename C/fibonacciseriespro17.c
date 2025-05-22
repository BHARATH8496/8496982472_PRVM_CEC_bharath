//c programing to generate fibonacci series n numbers
#include<stdio.h>
int main()
{
    int i,n;
    int f1=0,f2=1;
    int f3=f1+f2;
    printf("enter the number of terms");
      scanf("%d",&n);
        printf("fibonacci series:%d,%d",f1,f2);
        for(i=3;i<=n;++i)
        {
            printf("%d",f3);
            f1=f2;
            f2=f3;
            f3=f1+f2;
        }
        return 0;
}    