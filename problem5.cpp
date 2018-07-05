#include<iostream>




void printNum()
{
    int i = 1;
    int j = 1;
    while(i < 100000000000)
    {
        for(j; j<= 20; j++)
        {
            if(i % j != 0)
            {
                break;
            }
            if(j == 20)
            {
                std::cout<<i<<std::endl;
            }
        }
        j = 1;
        i++;
    }
}


int main()
{
    printNum();

    return 0;
}