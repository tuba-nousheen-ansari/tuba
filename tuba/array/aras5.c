//Sort the array of 0s , 1s and 2s.
#include<stdio.h>
 int main()
{
    printf("Enter the size of the array:");
    int size;
    scanf("%d",&size);
    int arr[size];
    int i,j;
    printf("Enter the Element of the array(only 0s, 1s, and 2s):\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp;
      for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        if(arr[i]>=arr[j])
        {
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
        }}
    printf("After segregate 0s, 1s and 2s in an Array, Array is:");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
 return 0;}


