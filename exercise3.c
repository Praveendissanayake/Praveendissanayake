#include<stdio.h>

int area(int length,int width);

int main()
{
    int yl,yw,hl,hw;
    printf("enter the yard length :");
    scanf("%d",&yl);
    printf("enter the yard width :");
    scanf("%d",&yw);
    printf("enter the house length :");
    scanf("%d",&hl);
    printf("enter the house width :");
    scanf("%d",&hw);

    printf("Lawn area is %d",area(yl,yw)-area(hl,hw));
}
int area(int length,int width)
{
    return length*width;
}