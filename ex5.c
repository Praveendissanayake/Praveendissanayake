#include<stdio.h>
#include<string.h>

void convertToUpperCase (char a[ ], int size );

int main(void){
	char address[50];
	int length;
	
	strcpy(address,"SLIIT,New Kandy Road,Malabe");
	length=strlen(address);
	convertToUpperCase(address,length);
}
void convertToUpperCase (char a[ ], int size )
{
	int i;
	for(i=0;i<size;i++)
	{
		if(a[i]>=97 && a[i]<=122)
		{
			a[i]=a[i]-32;
		}
	}
	printf("%s",a);
}
