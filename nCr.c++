#include<iostream>

long Factorial(int no);
long nCr(int n,int r);

using namespace std;

int main(void)
{
    int n,r;
    cout<<"Enter value for a (n): ";
    cin>>n;

    cout<<"Enter value for a (r): ";
    cin>>r;

    cout<<"nCr = "<<nCr(n,r)<<endl;
    return 0;
}
long Factorial(int no)
{
    long fac=1;
    for(int i=no;i>=1;i--)
    {
        fac *= i;
    }
    return fac;
}
long nCr(int n,int r)
{
    long nCr = Factorial(n) / (Factorial(r) * Factorial(n-r));
    return nCr;
}