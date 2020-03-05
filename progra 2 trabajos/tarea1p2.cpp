#include <stdio.h>

#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    while (num < 5000)
    {
        std::cout << "insert number between 1 and 5000 : \n";
        std::cin >> num;
        if(num <= 5000)
        {
            for (int i = num; i > 0; i--)
            {
                if (num % i == 0)
                {
                std:cout << i << "\n";

                }




                else
                    std::cout << " higher than 5000 \n";
            }
        


        }


    }
    return 0;
}


