//Sum of all array elements. – using recursion.
#include <stdio.h>
#define MAX_SIZE 100
//prototype
void sum(int arr[], int start, int len);
//main function
int main()
{
    int arr[MAX_SIZE];
    int num, i, sumofarray;

    printf("Enter size of the array: ");
    scanf("%d", &num);
    
    printf("Enter elements in the array: ");
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    sumofarray = sum(arr, 0, num);
    printf("Sum of array elements: %d", sumofarray);
    
    sum(arr, start, len);
 
    return 0;
}
//defination
void sum(int arr[], int start, int len)
{

    if(start >= len)
 
    return (arr[start] + sum(arr, start + 1, len));
}
