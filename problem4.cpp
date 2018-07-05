#include<iostream>
#include<string>
#include <sstream>
#include <cmath>


namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

bool checkIfPalin(int n)
{
    std::string str = patch::to_string(n);
    int lastIndex = str.length() - 1;
    for(int i = 0; i < str.length(); i++, lastIndex--)
    {   
        if(str.at(i) != str.at(lastIndex))
        {
            return false;
        }
    }

    return true;
}

int* bounds(int n)
{
    int b[2];
    int * point;
    point = &b[0];

    //if n = 3
    // 1 x 10^3

    //if n = 2
    //1 x 10^2 
    //etc..

    b[1] = std::pow(10, 2);
    b[0] = (int)(b[1] / 10);
    



    return point;
}

void palin(int n)
{
    int maxLength = 2 * n;
    int ans = 1;
    int length = patch::to_string(ans).length();

    int currentPalin = 1;

    int* boundaries = bounds(n);
    //std::cout<<boundaries[0];

    int factor1 = boundaries[0];
    int factor2 = boundaries[0];
    std::cout<<factor1<<std::endl;

   // while(length <= maxLength)
    //{
        for(int i = factor1; i < boundaries[1]; i++)
        {
            int product;
            //std::cout<<"here";
            for(int j = factor2; j<boundaries[1]; j++)
            {
                product = i * j;
                if(checkIfPalin(product))
                {
                    if(product > currentPalin)
                    {
                        currentPalin = product;
                        length = patch::to_string(currentPalin).length();
                        //std::cout<<length<<std::endl;
                    }   
                }
            }
        }
    //}
     


    

    std::cout<<currentPalin<<std::endl;
    //cout<<num;
}

int main()
{
    //bool x = checkIfPalin(2);
    //std::cout<<x;  
    palin(30); 
    return 0;
}   