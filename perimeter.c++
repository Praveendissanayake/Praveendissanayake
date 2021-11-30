#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float length,width,perimeter;
    cout<<"enter length and width rectangle:";
    cin>>length>>width;

    perimeter=2*(length+width);

    cout<<"rectangle perimeter is:"<<setiosflags(ios::fixed)<<setprecision(2)<<perimeter<<endl;
    return 0;
}