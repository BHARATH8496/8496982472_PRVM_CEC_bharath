#include<stdio.h>
void main()
{
    int no = 0;
    printf("Enter a number");
    scanf("%d",&no);
    printf("The number entered is %d", no);
    int mul=10;
    
    do
    {
        printf("%d x %d= %d\n",no,mul,no*mul);
        
        mul--;
    } while(mul>=1);

   
}