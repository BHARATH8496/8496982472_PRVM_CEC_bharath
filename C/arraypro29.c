//print the array elements taking the input from the user
#include<stdio.h>
int main()
{
    int size=0,a[100],i,sum=0;
    scanf("%d",&size);
    for( i=0;i<size;scanf("%d ",&a[i++]));
    for(i=0;i<size;printf("%d ",a[i]),sum+=a[i++]); 
    printf("sum of all elements is %d",sum); 
}    
    