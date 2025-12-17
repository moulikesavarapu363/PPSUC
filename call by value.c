#include<stdio.h>
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	
}int main(){
	int x=20,y=10;
	printf("Before swap x=%d,y=%d\n",x,y);
	swap(x,y);
	printf("after swap x=%d,y=%d\n",x,y);
}
