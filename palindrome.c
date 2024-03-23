#include<stdio.h>
void main()
{ int n,rem,rev=0,org;
printf("enter value of number");
scanf("%d",&n);
org=n;
while(n>0)
{rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(org==rev){
printf("%d is a palidromic sries",org);
}
else
printf("%d is not palidromic series",org);
}









