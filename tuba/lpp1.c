#include<stdio.h>

int main(){
   
   int i, j, k, space;
   
       for(i=1; i<=5; i++)

          for(space=5; space>i; space--)
            printf(" ");
              
              for(j=1, k=i; j<=2*i-1; j++)
                
             {   if(k==2*i-1)
                {printf("%d",k);
                 
                 for (--k; k>=i; k--)
                 printf("%d",k);
                
                   break;  
                }
                 else
                  printf("%d",k);}
                 k++;
                 
                 printf("\n");
return 0;}
