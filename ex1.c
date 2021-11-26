#include<stdio.h>

int main(void){
	int number,value=1;
	printf("enter factorial value:");
	scanf("%d",&number);
	if(number>0){
		while(number>0)
		{
			value=value*number;
			number--;	
		}
		printf("answer:%d",value);
	}
	else if(number==0)
	{
		value=0;
		printf("%d",value);
	}
	else
	{
		printf("this is nonenegative integer!");
	}
}
