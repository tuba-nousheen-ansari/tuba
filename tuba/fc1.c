#include<stdio.h>
int main ()
{
int a,b,c,d,e,x,y,z;
printf("Please Enter 5 Number");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
if (a>b)
x=a;
else
x=b;
if (c>d)
y=c;
else
y=d;
if (x>y)
z=x;
else
z=y;
if (z>e)
printf("%d",z);
else("%d",e);



return 0;
}
