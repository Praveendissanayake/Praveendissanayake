#include<stdio.h>

int main(void){
	int salery[9]={0};
	char *range[9]={"$200 - $299 :","$300 - $399 :","$400 - $499 :","$500 - $599 :","$600 - $699 :","$700 - $799 :","$800 - $899 :","$900 - $999 :","$1000 and above $1000 :"};
	int i;
	float sal=1;
	
	while(sal!=-1)
	{
		printf("enter your salary:$");
		scanf("%f",&sal);
		if(sal>=200 && sal<=299)
			salery[0] += 1;
		else if(sal>=300 && sal<=399)
			salery[1] += 1;
		else if(sal>=400 && sal<=499)
			salery[2] += 1;
		else if(sal>=500 && sal<=599)
			salery[3] += 1;
		else if(sal>=600 && sal<=699)
			salery[4] += 1;
		else if(sal>=700 && sal<=799)
			salery[5] += 1;
		else if(sal>=800 && sal<=899)
			salery[6] += 1;
		else if(sal>=900 && sal<=999)
			salery[7] += 1;
		else if(sal>=1000)
			salery[8] += 1;
		else
		{
			printf("invalid input!\n");
			continue;	
		}
		
	}
	printf("\n");
	for(i=0;i<9;++i)
	{
		printf("%s %d\n",range[i],salery[i]);
	}
	
	
	
}
