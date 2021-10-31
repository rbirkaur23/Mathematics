// Check if a number is prime or not
#include <iostream>
using namespace std;
int prime(int number)
{
    for(int i=2;i<=number/2;i++)
    {
        if(number%i==0)
        {
            return 1;
            break;
        }
    }
    return 0;
}
int main()
{
    int value,n;
    cout<<"Enter number ";
    cin>>n;
    value=prime(n);
    if(value==0)
    {
        cout<<n<<" is a prime number";
    }
    else
    {
        cout<<n<<" is not a prime number";
    }
    return 0;
    
}
