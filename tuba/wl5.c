// write a programme to print 2,4,6,8,10.....n
#include<stdio.h>
int main ()
{int n=10,i= 0;
printf("Enter no of terms\n");
scanf("%d",&n);
while (n>=1)
{
	i=i+2;
	n--;
	printf("%d  ",i);

}


return 0;
}

