#include<stdio.h>
#include<string.h>
int main(void){
	int i,length;
	char array[20];
	
	printf("Enter a name :");
	scanf("%20s",array);
	
	length=strlen(array);
	printf("\n");
	printf("Name in backward :");
	for(i=length-1;i>=0;--i)
	{
		printf(" %c",array[i]);
	}
	
}
