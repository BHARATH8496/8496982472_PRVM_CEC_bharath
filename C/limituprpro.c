#include<stdio.h>
int main()
{
    int x,y,z,lowerlimit,upperlimit;
    scanf("%d%d%d",&x,&y,&z);
    if(y<z)
    {
        upperlimit=z;
        lowerlimit=y;
    }
    else
    {
        upperlimit=y;
        lowerlimit=z;
    }

    if(x>lowerlimit&&x<upperlimit)
    {
        printf("middle");
    }
    else if(x<lowerlimit)
    {
        printf("left");
    }
    else
    {
        printf("right");
    }
    
    return 0;
}