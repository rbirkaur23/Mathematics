// Calculate factorial of the number
#include <iostream>
using namespace std;
int main()
{
    long fact=1,n;
    cout<<"Enter number ";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial "<<fact;
}
