#include<stdio.h>

int square(int x);
int cube(int x);

int main()
{
    int y;
    printf("X\tsquare\tcube\n");
    for(y=1;y<=10;y++)
    {
        printf("%d\t%3d\t%4d\n",y,square(y),cube(y));
    }
    return 0;

}
int square(int x)
{
    return x*x;
}
int cube(int x)
{
    return x*x*x;
}