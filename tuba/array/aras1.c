//Peak an element
#include <stdio.h>
 int main(){
 
    int n, i, peakelement;
    
      printf("Enter total number of element:\n");
      scanf("%d",&n);
       
       int a[n];
       
        printf("Enter %d element:\n",n);
           for(i=0; i<n; i++)
           scanf("%d",&a[i]);
           
             { if (n==1)
             printf("1");
             
               else
               printf("0");
             
             }

      
    return 0;
}
