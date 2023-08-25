#include<stdio.h>
int main(){
	int a[10] , i , j , secmax, secmin, max=0,min=100,temp,n;
	printf("enter no of elemnts in array:");
	scanf("%d",&n);
	printf("enter elements in array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    	if(a[i]>max)
    	{
    	secmax=max;
    	max=a[i];
		}
		if(a[i]>max && secmax!=max)
		{
			secmax=a[i];
		}
	
	}
	printf("largest elemnts is:%d",max);
	printf("second largest elemet is %d",secmax);
	
    for(i=0;i<n;i++)
    {
    	if(a[i]<min)
    	{
    	secmin=min;
    	min=a[i];
		}
		if(a[i]<min&&secmin!=min)
		{
			secmin=a[i];
		}
	
	}
	printf("smallest element is:%d",min);
	printf("second smallest element is :%d", secmin);
	
	
	
}
