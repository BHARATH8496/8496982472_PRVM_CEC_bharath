/*c programing to generate fibonacci series n numbers
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/
#include<stdio.h>
int main()
{
    int n=0;
      scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            for(int j=5;j>=1;j--)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
}    