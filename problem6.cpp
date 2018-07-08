#include<iostream>
#include<cmath>
#include<math.h>
int main()
{

    int squared_sum = 0;
    for(int i = 1; i <= 100; i++)
    {
        squared_sum += pow(i, 2);
    }

    int sum_squared = 0;

    for(int i = 1; i <= 100; i++)
    {
        sum_squared += i;
    }

    sum_squared = pow(sum_squared, 2);

    std::cout<<sum_squared - squared_sum;
    



    return 0;
}