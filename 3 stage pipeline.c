#include<stdio.h>
int main()
{
	int counter=1,a,b,res,performance_measure,ins;
	counter=1;
	printf("enter number 1:");
	scanf("%d",&a);
	counter=counter+1;
	printf("enter number 2:");
	scanf("%d",&b);
	counter=counter+1;
	res=a && b;
	counter=counter+1;
	printf("%d",res);
	counter=counter+1;
	printf("Enter number of instructions:");
	scanf("%d",&ins);
	performance_measure=ins/counter;
	printf("performance measure:%d",performance_measure);
}

