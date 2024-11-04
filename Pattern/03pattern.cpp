// *
// **
// ***
// ****
#include <iostream>
using namespace std;
int main(){
    int rows;
    cout << "enter the num of rows\n";
    cin >> rows;
    for (int i = 0; i <=rows; i++)
    {
       int temp = i;
        for (int i = 0; i < temp; i++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    

    return 0;
}