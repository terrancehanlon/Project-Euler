#include<iostream>
#include<vector>
#include<math.h>
#include <stdio.h>

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



void primeFactors(long n)
{
    //All prime factors have a 2, get the number of 2s by dividing by 2
    while(n % 2 == 0)
    {
        //printf("%d", 2);
        cout<<2<<" ";
        //if can be divided 2, obv means it can be multiplied by 2
        n = n/2;
    }

    //By continually dividing by 2 we will end up with an odd number
    //difference pf two prime numbers must be 2, therefore the only even number in prime factor is 2 so we can skip evens
    for(int i = 3; i <= sqrt(n); i+=2)
    {
        //same logic as first while loop, but now looking for odd prime factors
        while(n%i == 0)
        {
            //printf("%d", i);
            cout<<i<<" ";
            n = n/i;
        }

    }

    //if for any reason now n < 2, it must be prime
    if(n > 2)
    {
        //printf("%d", n);
        cout<<n<<" ";
    }
}


int main()
{
    //printPrimes(13195);
    //bool x = checkIfPrime(10);
    //cout<<"\n"<<!x;

//largestPrime(10);
    //cout<< x;
    
    primeFactors(600851475143);
    cout<<endl;
    return 0;
}