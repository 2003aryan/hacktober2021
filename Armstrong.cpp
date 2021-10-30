#include <iostream>
using namespace std;

int main()
{
    int num, temp, digit, sum=0;
    cout<<"enter anumber";
    cin>>num;

    temp=num;
    while(num!=0)
    {
        digit=num%10;
        sum=sum+(digit*digit*digit);
        num=num/10;
    }

    if(temp==sum)
    {
        cout<<"number is amstrong number";

    }
    else cout<<"number is not armstrong";

    return 0;
}
    
