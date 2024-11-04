#include <iostream>
using namespace std;
int main()
{
    int row, num = 1;
    cin >> row;
for (int i = 0; i < row; i++)
{
    for (
         int j = i+1; j >0 ; j--)
    {
        cout << j;
    }
    cout << "\n";
}

    return 0;
}