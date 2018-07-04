#include<iostream>
#include<string>
#include <sstream>


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

void palin(int n)
{
    int maxLength = n * 2;
    int ans = 1;
    int length = patch::to_string(ans).length();

    int currentPalin = 1;

    int factor1 = 100;
    int factor2 = 100;

    while(length <= maxLength)
    {
        for(int i = factor1; i < 1000; i++)
        {
            int product;
            //std::cout<<"here";
            for(int j = factor2; j<1000; j++)
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
    }
     


    

    std::cout<<currentPalin<<std::endl;
    //cout<<num;
}

int main()
{
    //bool x = checkIfPalin(2);
    //std::cout<<x;  
    palin(2); 
    return 0;
}   