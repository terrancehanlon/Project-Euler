#include<iostream>
using namespace std;

int main()
{
    /*
        sums of multiples of 3 and 5 below 1000
    */
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        if( i % 5 == 0 || i % 3 == 0)
            sum += i;
    }
    cout<<sum<<"\n";
    return 0;
}