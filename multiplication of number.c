#include<stdio.h>
int main()
{
  //To input numbers num and  the range of table n
	int num,i,n;
	printf("Enter the number");
	scanf("%d%d",&num,&n);
	for(i=1;i<=n;i++)
	{
		printf("%d*%d=%d\n",num,i,num*i);
	}
	return 0;
}
