#include "math.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

    int num = 0;

    bool prime = true;
    bool dprime = true;
    int number = 0;
    while ((cin >> num) && (num != 0))
    {
        if (num % 2 != 0)
        {
            if (num != 1 || num != 3 || num != 5 || num != 7)
            {
                for (int i = 3; i < (1+sqrt(num)); i += 2)
                {
                    if (num % i == 0 || num % 5 == 0)
                    {
                        prime = false;
                        break;
                    }
                }
            }
            else
            {
                prime = true;
            }
        }
        else
        {
            prime = false;
        }
        number = 2 * num;
        while (true)
        {
            if (number % 2 == 0)
            {
                number++;

            }
            else
            {
                if (number == 3)
                {

                    break;
                }
                else
                {
                    for (int j = 3; j < (1+sqrt(number)); j += 2)
                    {
                        if (number % j == 0 || number % 5 == 0)
                        {
                            dprime = false;

                            break;
                        }
                    }
                    if (dprime == false)
                    {
                        number += 2;

                        dprime = true;
                    }
                    else
                    {

                        break;

                    }

                }
            }
        }
        if (num == 2){
            prime = true;
            number = 5;
        }
        if (num == 1){
            prime = true;
            number = 2;
        }
        if (num == 5){
            prime = true;
            number = 11;
        }
        if (num == 7){
            prime = true;
            number = 17;
        }
        if (prime == true)
        {
            cout << number << "\n";
        }
        else
        {
            cout << number << " (" << num << " is not prime)\n";
        }
        prime = true;
        dprime = true;
    }
    return 0;
}