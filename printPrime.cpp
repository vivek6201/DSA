#include <iostream>
using namespace std;

bool checkPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int num = 20;
    for (int i = 2; i <= num; i++)
    {

        if (checkPrime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}