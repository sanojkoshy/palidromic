#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if((a > b ) && (a > c))
        printf(" %dis the largest no",a);
        else if((b>c)  &&  (b>a))
        printf(" %d is the largest no",b);
        else
        printf(" %d is the largest no",c);
    }