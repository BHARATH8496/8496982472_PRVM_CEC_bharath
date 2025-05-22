//print the array elements even sum odd sum
#include<stdio.h>
int main()
{
    int size=0,a[100],i,esum=0,osum=0;
    scanf("%d",&size);
    for( i=0;i<size;scanf("%d ",&a[i++]));
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
       
    } 
    printf("sum of even %d odd %d",esum,osum); 
}    
    