#include<stdio.h>
int main()
{
	auto int i=10;
	printf("%d\n",i);//10
	{
		auto int i=20;
	printf("%d\n",i);//20
	}
	printf("%d\n",i);//10
	
}
