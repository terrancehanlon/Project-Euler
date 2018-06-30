#include<iostream>
#include<vector>

using namespace std;


//prime factor = prime number * prime number = number 
// prime factors of 15 = 5 * 3

bool checkIfPrime(long n)
{
    int lastValue;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
        
        lastValue = i;
    }
    return true;
}
int primeCheck(long n)
{
    int maxPrime = 0;
    for(int i = 2; i < n; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }
       if(checkIfPrime(i))
       {
           if(i > maxPrime)
           {
               maxPrime = i;
           }
       }
    }

    return maxPrime;
}


int main()
{
    int x = primeCheck(600851475143);
    cout<<x;
    
    return 0;
}