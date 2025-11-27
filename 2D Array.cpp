#include <stdio.h>
int main()
{
	int a[10][10],i,j;
	printf("Enter Array Elements:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
