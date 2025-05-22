//sumation of n numbor recursion using loop
#include<stdio.h>

int main()
{
    int n,i, sum=0;
    scanf("%d",&n);
    printf("enter the number of ternms:");
  for(i=1 ;i<=n; i++)
  {
    sum+=i;
  }
  printf("the summation of the first %d numbers is: %d", n, sum);
  return 0;
  
}    
    


