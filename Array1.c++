#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    int i,j=0;
    int myArray[10];
    int largeNum[10];
    float total,avg;
    cout<<"enter the number series: ";
    for(i=0;i<10;++i)
    {
        cin>>myArray[i];
        total += myArray[i];
    }
    avg = total/10;
    cout<<"average: "<<setiosflags(ios::fixed)<<setprecision(2)<<avg<<endl;
    cout<<"My array: ";
    for(i=0;i<10;++i)
    {
        cout<<" "<<myArray[i];
        if(myArray[i]>avg)
        {
            largeNum[j]=myArray[i];
            j++;
        }
    }
    cout<<endl;
    cout<<"Large num: ";
    for(i=0;i<j;++i)
    {
        cout<<" "<<largeNum[i];
    }
    cout<<endl;
    return 0;
}
