#include<stdio.h>
 
 void cp(int);
  void cp(int n)
  
  {
   int i, flag=1;
    
   for(i=2;i<=n/2;i++)
   
      {
       if(n%i==0)
       {
       flag=0;
       break;
       }
      }
    if (flag)
    printf("%d  ",n);
  }
   
 int main(){
 
   int i;
   
    for(i=2;i<=100;i++)
     {
       cp(i);
     }
     {
       cp(i);
     }
     {
       cp(i);
     }
  return 0; }
