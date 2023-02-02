#include<stdio.h>
int factorial()
{
	int n,i;
	long long fact=1;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial is  %lld",fact);
}
int main()
{
	float a,b,r;
	int n;
	printf("press 1: for on calculator:->");
	scanf("%d",&n);
	
	if(n==1)
	{
		printf("\n");
	}
	else
	{
	printf("error");
	return -1;
	}
	
	char op;
    printf("**********************************************\n");
	printf("|         available operation                |\n");
	printf("**********************************************\n");
	printf("|          '+' for addition                  |\n"); 
	printf("**********************************************\n");
	printf("|          '-' for substraction              |\n");
	printf("**********************************************\n");
	printf("|          '*' for multiplication            |\n");
	printf("**********************************************\n");
	printf("|          '/' for division                  |\n");
	printf("**********************************************\n");
	printf("|          '!' for factorial                 |\n");
	printf("**********************************************\n");
	printf("|            choose operation ?              |\n");
	printf("**********************************************\n");
	scanf("%s", &op);
	int fact;
	if(op=='!')
	{
	fact=factorial();
	return -1;
	}	
	printf("enter two  number:\n");
	scanf("%f %f",&a,&b);
	switch(op)
	{
	case'+':
		r=a+b;
	printf("%f + %f = %f", a,b,r);
		break;
	case'-':
		r=a-b;
	printf("%f - %f = %f", a,b,r);
		break;
	case'*':
		r=a*b;
	printf("%f * %f = %f", a,b,r);
		break;
	case'/':
	if(b!= 0)
	{
	r=a/b;
	printf("%f / %f = %f", a,b,r);
	}
		else
	{
		printf("division not possible");
		break;
	
		default:
		printf("invalid operation");		
	}
	return 0;
}
}
