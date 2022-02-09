#include<stdio.h>
int main()
{
    int m1,m2,m3,count;
    float avgMrk=0;
    for(count=1;count<=3;count++)
    {
        printf("enter student %d module marks\n",count);
        printf("enter your first module mark :");
        scanf("%d",&m1);

        printf("enter your second module mark :");
        scanf("%d",&m2);

        printf("enter your third module mark :");
        scanf("%d",&m3);

        avgMrk=(m1+m2+m3)/3.0;

        printf("average mark is %.2f\n",avgMrk);

        if(avgMrk>60)
        {
            printf("you are selected software engineer degree programme\n");
        }

        printf("\n");
    }
    return 0;
}