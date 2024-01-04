#include<stdio.h>
void bubble_sort(int arr[], int n)
{ 
int i, j,temp; 
for (i = 0; i < n - 1; i++) 
{ 
 for (j = 0; j < n - i - 1; j++) 
 { 
 if (arr[j] > arr[j + 1]) 
 { 
 temp = arr[j]; 
 arr[j] = arr[j + 1]; 
 arr[j + 1] = temp; 
 } 
 } 
 } 
} 
void main()
{
  int arr[10], n, i;
  printf("Enter the no of elements in array\n");
scanf("%d",&n);
printf("Enter the elements of array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf(" \nElements of array are: \n");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
bubble_sort(arr, n);
printf("\nsorted array\n");
  for ( i = 0; i < n; i++) { 
    printf("%d  ", arr[i]); 
  } 
}
