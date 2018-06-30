#include<iostream>

using namespace std;

void printFib(int n)
{

    int term1 = 0;
    int term2 = 1;
    int newTerm = 0;
    int sum = 0;
    int i = 0;
    while(sum < 4000000)
    {
        if(i == 0){}
            //cout<<term1<<" ";
        if(i == 1){}
            //cout<<term2<<" ";
        else{
            newTerm = term1 + term2;
            term1 = term2;
            term2 = newTerm;

            if(newTerm % 2 == 0)
            {
                sum += newTerm;
            }

            //cout<<newTerm<<" ";
        }
    }
    cout<<"\n";
    cout<<sum;
}



int main()
{
 //Print the fib sequence 0, 1, 1, 2, 3, 5, 8, 13, 21 etc...
    printFib(10);
    
}

