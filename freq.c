#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],b[100],i,j,n,c=0;
	printf("enter size of array:");
	scanf("%d",&n);
	printf("\nenter elements into array:");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=1;
		if(a[i]!= -1)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					c++;
					a[j]= -1;
				}
			}
			b[i]=c;
		}
	}
	printf("digit \t frequency");
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		printf("\n%d \t %d",a[i],b[i]);
	}
	int maxfreq=0, minfreq=0;
	for(i=1;i<n;i++)
	{
		if(b[i]>b[maxfreq])
		{	
		maxfreq=i;
	    }	    
	}
	 printf("\nThe most frequent element is: %d\n", a[maxfreq]);
      printf("\nIt appears %d times.\n", b[maxfreq]);
	    
	for(i=1;i<n;i++){
	if(b[i] != 0&b[i]<b[minfreq]){
	    	minfreq=i;
		}
     }
     printf("\nThe min frequent element is: %d\n", a[minfreq]);
        printf("\nIt appears %d times.\n", b[minfreq]);
	

}
