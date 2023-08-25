#include<stdio.h>
int main(){
	int a[10]={1,2,3,4,5,6};
	int i,j,temp;
	printf("\n elements in array are:\n");
	for (i=0;i<a[i];i++)
	{
		printf("%d\t",a[i]);
	}
	temp=a[0];
	for(i=0;i<a[i];i++)
	{
		a[i]=a[i+1];
	}
	a[i]=a[0];
	printf("\nleft rotated array is:\n");
	for(i=0;i<a[i];i++){
		printf("%d\t",a[i]);
		
	}
	

	
}
