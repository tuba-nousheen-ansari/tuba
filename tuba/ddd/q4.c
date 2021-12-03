//Simple Interest
// formula p*r*t%100
#include<stdio.h>
int main(){
 float p,r,t,si;
 
    printf("Please enter principal amount\n");
    scanf("%f",&p);
    printf("Please enter rate\n");
    scanf("%f",&r);
    printf("Please enter time\n");
    scanf("%f",&t);
    
    si=p*r*t/100;
    
    printf("The simple interest is: %f",si);
 return 0;}
