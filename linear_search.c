#include <stdio.h>
int lsearch(int arr[], int size,int key) 
{
int i;
for(i=0;i<size;i++)
  {
   if(arr[i]==key) return i;
  }
  if(i==size) return -1;
}

int main()
{
int arr[100],n,i,key;
printf("enter the size of the array:\n");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
  {
   scanf("%d",&arr[i]);
  }
printf("enter the elements search for:\n");
scanf("%d",&key);
if(lsearch(arr,n,key) == -1)
printf("element not found ");
else
printf("Element found at %d index",lsearch(arr,n,key));
}