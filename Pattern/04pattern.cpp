// 1
// 22
// 333
// 4444
#include<iostream>
using namespace std;
int main(){
    int row,num=1;
    cin >> row;
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << num;

        }
        num++;
        cout << "\n";
        }
    

    return 0;
}