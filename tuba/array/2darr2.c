#include<stdio.h>
int main()
{
  
   int a[10],k,n,i,j,sum,count=0;
   printf("Enter Number");
   scanf("%d",&n);
   printf("Enter %d Element",n);
      
   for(i=0;i<n;i++)
         scanf("%d",&a[i]);
   
   printf("Enter K");
   scanf("%d",&k);
            
   for(i=0;i<n-1;i++)
   {
          sum=a[i];       
          for(j=i+1;j<n;j++)
          {
                 sum=sum+a[j];     
                 if(sum==k)
                 {
                      count++;   
                      sum=a[i];
                  }
           }
           if(count !=0)
           {
         	   printf("Total pair %d", count);      
           }
           else  
                  printf("No pair found");
     }
               
     return 0;
}
