#include<stdio.h>
int main(){
    int a[10],i,n,min,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
    	if(a[i]>max)
    	max=a[i];
    	if(a[i]<min)
    	min=a[i];
	}
 printf("Max=%d\nMin=%d",max,min);
    return 0;
}
