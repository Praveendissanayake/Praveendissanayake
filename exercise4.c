# include <stdio.h>

float findCA_1(int t_mark1);
float findCA_2(int t_mark2);

int main()
{
	int i,mark1[5],mark2[5];
    float CA_1[5],CA_2[5];
	for(i=0; i<5; i++)
	{
	   printf("Student Number %d assignment 1 mark: ",i+1);
	   scanf("%d", &mark1[i]);
	   printf("Student Number %d assignment 2 mark: ",i+1);
	   scanf("%d", &mark2[i]);
	   CA_1[i]=findCA_1(mark1[i]);
	   CA_2[i]=findCA_2(mark2[i]);
	}
	printf("Student\tMarks1\tMarks2\tCA_1\tCA_2\n");

	for(i=0; i<5; i++)
	{
		printf("%d\t%d\t%d\t%.2f\t%.2f\n", i+1,mark1[i],mark2[i], CA_1[i], CA_2[i]);
	}
}
float findCA_1(int t_mark1)
{
	return t_mark1*(20/100.0);
}                                       
float findCA_2(int t_mark2)
{
	return t_mark2*(30/100.0);
}