#include <iostream>
using namespace std;
int main(){
    int rows,temp=1;
    cout << "enter rows\n";
    cin >> rows;
    for (int i = 1; i <=rows; i++)
    {
        for (int i =1 ; i<=rows; i++)
        {
            cout <<temp ;
            temp++;
        }
        cout << "\n";
    }
    

    return 0;
}