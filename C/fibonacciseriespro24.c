/*c programing to generate fibonacci series n numbers
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
#include<stdio.h>
int main()
{
    int n=0;
      scanf("%d",&n);
        for(int i=5;i>=1;i--)
        {
            for(int j=5;j>=i;j--)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
}    