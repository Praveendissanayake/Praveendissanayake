# include <stdio.h>
# include <string.h>

int main()
{
	char name[20];
	char backward[20];
	int i, size;
	
	printf("Enter name :");
	scanf("%s", name);
	
	size = strlen(name);
	
	for(i=0; i<size; i++)
	{
		backward[(size-1) - i] = name[i];
	}
	for(i=0; i<size; i++)
	{
		name[i] = backward[i];
		printf("%c", name[i]);
	}
	return 0;
}
