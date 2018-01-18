#include <stdio.h>
void main()
{
int fact=1,n,i;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
print("%d",fact);
}