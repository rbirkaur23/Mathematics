//Calculate sum of digits of the number
#include <iostream>
using namespace std;
int main()
{
    int n,value=0;
    cout<<"Enter n ";
    cin>>n;
    while(n!=0)
    {
        value=value+n%10;
        n=n/10;
    }
    cout<<"Sum of the digits "<<value;
    return 0;
}
