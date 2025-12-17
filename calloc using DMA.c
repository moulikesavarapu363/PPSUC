#include<stdio.h>
#include<stdlib.h>
int main(){
	int *arr,n,i,sum=0;
	printf("Enter number of elements");
	scanf("%d",&n);
	arr = (int*) calloc(n, sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum = arr[i];
	}
	printf("sum is:%d",sum);
	free(arr);
	return 0;
}
