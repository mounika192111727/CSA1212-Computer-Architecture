#include<stdio.h>
int main()
{
	int counter=1,a,b,choice,res,ins;
	printf("enter number 1:");
	scanf("%d",&a);
	counter=counter+1;
	printf("enter number 2:");
	scanf("%d",&b);
	counter=counter+1;
	printf("1-addition:\n2-substraction:\n3-multiplication:\n4-division:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("performing addition\n");
		res=a+b;
		counter=counter+1;
		break;
		case 2:printf("performing subtraction\n");
		res=a-b;
		counter=counter+1;
		break;
		case 3:printf("performing multiplication\n");
		res=a*b;
		counter=counter+1;
		break;
		case 4:printf("performing division\n");
		res=a/b;
		counter=counter+1;
		break;
		default:printf("wrong input");
		break;
	}
	printf("the cycle value is %d\n",counter);
	printf("enter the number of instructions:");
	scanf("%d",&ins);
	int performance_measure=ins/counter;
	printf("the performance measure is:%d\n",performance_measure);
	return 0;
}


