//Count the total number of duplicate elements in an array
#include <stdio.h>
//prototype
void dupli(int[], int, int, int, int);
//main function 
int main()
{
	int arr[10], i, j, Size, Count = 0;
	
	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &Size);
	
	printf("\n Please Enter %d elements of an Array  :  ", Size);
	
	dupli(arr, i, j, Size, Count);
	
	return 0;
}
//defination
void dupli(int arr[],int i,int j,int Size,int Count ){
 
 for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}     
 
	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
				break;
			}
		}
	}

 	printf("\n Total Number of Duplicate Elements in this Array  =  %d ", Count);
	     
 	
}
