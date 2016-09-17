#include<stdio.h>

int main()
{
	int a[100],i,j;
	
	for(i=0;i<50;i++)
	{
		scanf("%d",&a[i]);
		
		if(a[i]==42)
		{
			i=48;
		}
	}
	
	for(j=0;j<50;j++)
	{
		if(a[j]==42)
		{
			break;
		}
		else
		{
		printf("%d\n",a[j]);
		continue;
     	}
	}
	return 0;
}
