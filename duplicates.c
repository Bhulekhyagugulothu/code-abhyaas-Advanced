#include<stdio.h>
int main()
{
	int a[10],i,j,n,k;
	printf("enter no of elements in array:");
	scanf("%d",&n);
	printf("\n enter elements into array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
					
				}
				n--;
				j--;
			}
		}
	}
	printf("new array is:");
	for(i=0;i<n;i++){

	printf("%d\t",a[i]);
}
}
