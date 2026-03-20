#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("Enter the number");
	scanf("%d%d",&a,&b);
	printf("Enter the operator");
	scanf(" %c",&ch);
	switch(ch)
	{
		case'+':
			printf("result=%d",a+b);
			break;
			case'-':
				printf("substraction=%d",a-b);
				break;
				case'*':
					printf("multiplication=%d",a*b);
					break;
					case'/':
						if(b!=0)
						{
							printf("division=%d",a/b);
						}
						else
						{
							printf("Division is not allowed");
						 } 
						
						break;
						case'%':
						if(b!=0)
						{
							printf("modulardivision=%d",a%b);
						}
						else
						{
							printf("Modular division is not allowed");
						}
						break;
						default:
							printf("Invalid Operator");
						}
						return 0;
	}
