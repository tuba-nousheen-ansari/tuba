#include<stdio.h>
int main(){
int a,b,c,d;
a=10, b=20, c=30, d=40;
a=++b;
b=c++;
d=++a;
c=d++;
printf("a=%d\nb=%d\nc=%d\nd=%d\n" ,a,b,c,d);
return 0;






}
