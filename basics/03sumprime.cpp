#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int lb, ub, primesum = 0, restsum = 0, temp = 0;
    cout << "enter lower bound and upper bound";
    cin >> lb;
    cin >> ub;
    for (int i = lb; i <= ub; i++)
    {
        temp = 0;
        // cout << i;
        for (int j = 2; j<sqrt(i); j++)
        {
            if (i % j == 0)
            {
                temp++;
            }
        }
        if (temp != 0)
        {
            restsum = restsum + i;
        }
        else
        {
            primesum = primesum + i;
        }
    }
    cout << "primesum=" << primesum;
    cout << "restsum=" << restsum;
    return 0;
}