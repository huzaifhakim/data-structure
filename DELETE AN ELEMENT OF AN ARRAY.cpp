#include<stdio.h>
int main()
{
	int n,arr[n],i,item;
	printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of an array");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	printf("enter the item u want to delete");
	scanf("%d",&item);
	for(i=item;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	n=n-1;
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	return 0;
}