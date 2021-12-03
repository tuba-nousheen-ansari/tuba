#include<stdio.h>
  int main(){
  int i;
   i=1;
     do{
     if (i>=6 && i<=10)
       continue;
       printf("%d  ",i);
       }
        while (++i<=10);
        return 0;
}



