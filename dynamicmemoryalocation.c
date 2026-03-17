#include<stdio.h>
#include<stdlib.h>
int main()
{
	int*ptr,n,i;
	printf("enter number of elements");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("allocation fail");
		exit(0);
	}
	else
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",ptr+i);
		}
		printf("the elements are");
		for(i=0;i<n;i++)
		{
			printf("%d",*(ptr+i));
			free(ptr);
			return 0;
		}
	}
}
