/*c programing to generate fibonacci series n numbers
        1
      2 1 
    3 2 1
  4 3 2 1
5 4 3 2 1
*/
#include<stdio.h>
int main()
{
    int n=0;
      scanf("%d",&n);
        for(int i=1;i<=5;i++)
        {
            for(int j=1;j<=5-i;j++)
            {
             printf("%d ",j-n);
            }
            printf("\n");
        
        }
}    